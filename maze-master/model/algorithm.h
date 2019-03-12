#ifndef ALGORITHM_H
#define ALGORITHM_H


//baptiste millot -- pierre antoine duchange 2017
class Maze;
class Room;
class Door;
#include<iostream>
#include <fstream>
#include "mazesolver.h"
#include "mazegenerator.h"
#include <stack>
//
using typePileRoom = std::stack<Room *>; // type d'un stack de *room
using typeTabVectorInt = std::vector<unsigned  int>;
//using typeTabvectorVectorInt = std::vector<std::vector<unsigned  int>>;

class debug {
public:
	debug();

	std::ofstream file;
	void ecrire(std::string text);
	void ecrire(int text);
};

class DFSMazeGenerator : public MazeGenerator, public debug {
	Room* it_room;
public:
	
    DFSMazeGenerator(Maze* maze);
	bool isFinished() override;
	void step() override;
	bool condition; // condition pour fin du step()
	int periode;

	typePileRoom pile;
	Room * itMain;

	bool marcheADebut;
	

};

class KruskallMazeGenerator : public MazeGenerator, public debug {
public:
    KruskallMazeGenerator(Maze* maze);

	typeTabVectorInt tableauCell; // tableaux avec ID pour chaque cellule du maze unique.
	typeTabVectorInt indiceDoorsTableau; // tableau qui sert à appeler des portes au hasard
	typeTabVectorInt::iterator doorsAleaIndice; //iterateur sur tab

	
	Maze::DoorIterator It_doors; // iterator sur les portes
	
	//bool belongDistingsSet(typeTabvectorVectorInt &tabSETcell, unsigned  int &numerocell1, unsigned int &intnumerocell2);----> obsolète
	//fonction qui sert à déterminer si il existe un chemin entre 2 cellules   ----> obsolète


	bool isFinished() override;
    void step() override;
};


class OpenAllMazeGenerator : public MazeGenerator, public debug {
    Maze::DoorIterator nextDoorIt_;
public:
	
    OpenAllMazeGenerator(Maze* maze);
	int periode;
    bool isFinished() override;

    void step() override;
};







using typePileLockedRoom = std::stack<Direction>; // type d'un stack de lockedroom


//************* solvers


class DFSProgram : public MazeSolver::Program {
public:
	typePileLockedRoom pile;
	Direction direction;
    Direction move(LockedRoom currentRoom, std::vector<AdjLockedRoom> adjRooms, const Position& targetPosition) override;
};

class CustomProgram : public MazeSolver::Program {
public:
	CustomProgram();
    int ratioB  ;
    int ratioE  ;
	typePileLockedRoom pile;
	Direction direction;
    Direction move(LockedRoom currentRoom, std::vector<AdjLockedRoom> adjRooms, const Position& targetPosition) override;
};

class RandomProgram : public MazeSolver::Program {
public:
    Direction move(LockedRoom currentRoom, std::vector<AdjLockedRoom> adjRooms, const Position& targetPosition) override;
};

#endif // ALGORITHM_H
