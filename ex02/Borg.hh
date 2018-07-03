#ifndef BORG_HH
#define BORG_HH

#include <iostream>
#include "Warpsystem.hh"
#include "Destination.hh"

namespace Borg{

class Ship{
    private:
	int _side;
	short _maxWarp;
	WarpSystem::Core* _core;
	Destination _location;
	Destination _home;
    public:
	Ship();
	~Ship();
	void setupCore(WarpSystem::Core* core);
	void checkCore();
	bool move(int warp, Destination d); // move _location to d
	bool move(int warp); // move _location to _home
	bool move(Destination d); // move _location to d
	bool move(); // move _location to _home
};

}

#endif /* BORG_HH */
