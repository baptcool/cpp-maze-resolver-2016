#include "random.h"
#include <iostream>
#include "algorithm.h"
#include "maze.h"
#include <fstream>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <stack>
#include <stdio.h>

//baptiste millot -- pierre antoine duchange 2017

DFSMazeGenerator::DFSMazeGenerator(Maze* maze)
    : MazeGenerator(maze) , it_room(maze->getStart())
{

    pile.push(it_room);

    condition = 0;
    marcheADebut = 1;


    periode = 0;

}

bool DFSMazeGenerator::isFinished()
{
    return condition;
}


void DFSMazeGenerator::step()
{

    if (pile.empty()){
        condition = 1;
        unmarkRooms(maze_);
    }
    else {
        itMain = pile.top();
        itMain->mark();
        int nombreVoisinsDoors = std::distance( (itMain)->adjDoors().begin(), (itMain)->adjDoors().end() );
        if(nombreVoisinsDoors != 0){
            std::vector<int> tabRoomIndice;
            for (int i = 0; i < nombreVoisinsDoors; i++) { // si parmi les voisins, il y en a qui sont fermés, on regarde si on a pas deja visité la room adjacent
                if ((*(i + (itMain)->adjDoors().begin()))->isClosed()) {
                    if (!(*((itMain)->adjDoors().begin() + i))->oppositeRoom(itMain)->isMarked()) {
                        tabRoomIndice.push_back(i); // on enregistre la position de la porte voulu
                    }
                }
            }
            if (tabRoomIndice.size() > 0) {
                int indicetempo = tabRoomIndice[pick_an_integer<size_t>(0,tabRoomIndice.size()-1)]; // on choisit l'une des positions au random
                (*((itMain)->adjDoors().begin() + indicetempo))->open(); // on ouvre
                pile.push((*((itMain)->adjDoors().begin() + indicetempo))->oppositeRoom(itMain));	//on empile
            }
            else {
                pile.pop(); // on dépile
            }

        }
        else {
            pile.pop();// on dépile
        }


        }


}


//***********************************************************************************************************************

KruskallMazeGenerator::KruskallMazeGenerator(Maze* maze)
    : MazeGenerator(maze)
{
    srand(time(NULL));

    for (int i = 0; i < maze->ncol()*maze->nrow(); ++i) {
        tableauCell.push_back(i);  //tableau avec des ID uniques
    }

    auto tailletabportes = (maze->ncol() - 1)*maze->nrow() + maze->ncol()*(maze->nrow()-1); // nombre de portes

    //ca c'est les indices.
    for (int i = 0; i <(tailletabportes); ++i) indiceDoorsTableau.push_back(i); // tab des indices
    std::random_shuffle(indiceDoorsTableau.begin(), indiceDoorsTableau.end()); //mélange


    doorsAleaIndice = indiceDoorsTableau.begin();  // indices
    It_doors = maze->doors().begin(); // portes

}

bool KruskallMazeGenerator::isFinished()
{
    return doorsAleaIndice == indiceDoorsTableau.end();
}
/*
bool KruskallMazeGenerator::belongDistingsSet(typeTabvectorVectorInt &tabSETcell, unsigned  int &numerocell1, unsigned  int &intnumerocell2) {
    //obselette
    bool firstfound = false;
    bool secondfound = false;
    std::vector<std::vector<unsigned  int>>::iterator firstITSET;
    std::vector<std::vector<unsigned int>>::iterator secondITSET;
    auto it_tabSETcell = tabSETcell.begin();
    for (it_tabSETcell; it_tabSETcell != tabSETcell.end(); it_tabSETcell++) {
        auto it_tabSETcellcell = (*it_tabSETcell).begin();
        for (it_tabSETcellcell; it_tabSETcellcell != (*it_tabSETcell).end(); it_tabSETcellcell++) {
            if (!firstfound && numerocell1 == *it_tabSETcellcell ) {
                firstITSET = it_tabSETcell;
                firstfound = true;
            }
            if (!secondfound&&intnumerocell2 == *it_tabSETcellcell) {
                secondfound = true;
                secondITSET = it_tabSETcell;
            }
            if (secondfound &&firstfound) break;
        }
        if (secondfound && firstfound) break;
    }
    if (firstITSET == secondITSET) {
        return true;
    }
    else {
        //procedure joins SET
        if ((*secondITSET).size() <= (*firstITSET).size()) {
            auto it_tabSETcellcell = (*secondITSET).begin();
            for (it_tabSETcellcell; it_tabSETcellcell != (*secondITSET).end(); it_tabSETcellcell++) {
                (*firstITSET).push_back(*it_tabSETcellcell);
            }
            tabSETcell.erase(secondITSET);
        }
        else {
            auto it_tabSETcellcell = (*firstITSET).begin();
            for (it_tabSETcellcell; it_tabSETcellcell != (*firstITSET).end(); it_tabSETcellcell++) {
                (*secondITSET).push_back(*it_tabSETcellcell);
            }
            tabSETcell.erase(firstITSET);
        }

        return false;
    }




}
#include <thread>
*/
void KruskallMazeGenerator::step()
{

    Room* firstroom = (*(It_doors + *doorsAleaIndice))->rooms().first;
    Room* secondroom = (*(It_doors + *doorsAleaIndice))->rooms().second;
    auto numerofirst = (firstroom->col()) + (firstroom->row())*maze_->ncol();
    auto numerosecond = (secondroom->col()) + (secondroom->row())*maze_->ncol();
    {

        if (tableauCell[numerofirst] != tableauCell[numerosecond]) {
            int remplacer = tableauCell[numerosecond];
            int first = tableauCell[numerofirst];
            for (auto &p : tableauCell) {

                if (p == first) {
                    p = remplacer;
                }
            }
            (*(It_doors + *doorsAleaIndice))->open();
        }




    }
    ++doorsAleaIndice;


}
//***********************************************************************************************************************
Direction DFSProgram::move(LockedRoom currentRoom, std::vector<AdjLockedRoom> adjRooms, const Position& target)
{

    if (target == currentRoom.position() || adjRooms.size() == 0)
        return Direction::Stop;
    currentRoom.mark();
    std::vector<short int> indicesValides;
    short int i = 0;
    for (auto p : adjRooms) {
        if (!p.isMarked()) {
            indicesValides.push_back(i);
        }
        i++;
    }
    if (indicesValides.size() != 0) {
        direction = adjRooms[indicesValides[pick_an_integer<size_t>(0, indicesValides.size() - 1)]].direction();
        pile.push(direction);
    }
    else {
        direction = opposite(pile.top());
        pile.pop();
    }

    return direction;
}

CustomProgram::CustomProgram()
{
	 ratioB = 0;
	 ratioE = 0;
}

Direction CustomProgram::move(LockedRoom currentRoom, std::vector<AdjLockedRoom> adjRooms, const Position& target)
{
    Direction direction;
    if (target == currentRoom.position() || adjRooms.size() == 0)
        return Direction::Stop;
    currentRoom.mark();

    bool nord = false;
    bool east = false;
    bool south = false;
    int i = 0;
    bool west = false;


    for (auto p : adjRooms) {
        if (!p.isMarked()) {
            switch (p.direction())
            {
            case Direction::North:
                nord = true;
                i++;
                break;
            case  Direction::East:
                east = true;
                i++;
                break;
            case Direction::South:
                south = true;
                i++;
                break;
            case Direction::West:
                west = true;
                i++;
                break;
            default:
                break;
            }


        }
    }


    if (i != 0) {
        if(ratioB>=ratioE){
            if (east) {
                pile.push(Direction::East);
                ratioE++;
                return Direction::East;
            }
            if (south) {
                pile.push(Direction::South);
                ratioB++;
                return  Direction::South;
            }

            if (west) {
                pile.push(Direction::West);
                ratioE--;
                return Direction::West;
            }
            if (nord) {
                pile.push(Direction::North);
                ratioB--;
                return Direction::North;
            }
        }
        else{
            if (south) {
                pile.push(Direction::South);
                ratioB++;
                return  Direction::South;
            }
            if (east) {
                pile.push(Direction::East);
                ratioE++;
                return Direction::East;
            }
            if (west) {
                pile.push(Direction::West);
                ratioE--;
                return Direction::West;
            }
            if (nord) {
                pile.push(Direction::North);
                ratioB--;
                return Direction::North;
            }
        }


    }
    else {
        Direction d = pile.top();
        direction = opposite(d);
        pile.pop();
    }

        return direction;
}

Direction RandomProgram::move(LockedRoom currentRoom, std::vector<AdjLockedRoom> adjRooms, const Position& target)
{
    if (target == currentRoom.position() || adjRooms.size() == 0)
        return Direction::Stop;

    currentRoom.mark();
    auto direction = adjRooms[pick_an_integer<size_t>(0, adjRooms.size()-1)].direction();
    return direction;
}
//***********************************************************************************************************************

OpenAllMazeGenerator::OpenAllMazeGenerator(Maze *maze)
    : MazeGenerator(maze), nextDoorIt_(maze->doors().begin())
{

}

bool OpenAllMazeGenerator::isFinished()
{
    return nextDoorIt_ == maze_->doors().end();
}

void OpenAllMazeGenerator::step()
{

    (*nextDoorIt_)->open();

    ++nextDoorIt_;

}
//***********************************************************************************************************************

debug::debug()
{


    file = std::ofstream("file.txt", std::ios::out |std::ios::trunc);
    file << "debug start :.. \n";
}

void debug::ecrire(std::string text)
{
    file << text.c_str() << "\n";
}

void debug::ecrire(int text)
{
    file << text << "\n";
}
