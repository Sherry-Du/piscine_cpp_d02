#ifndef BORG_HH
#define BORG_HH

#include <iostream>
#include "Warpsystem.hh"
#include "Destination.hh"
#include "Federation.hh"

namespace Borg{

class Ship{
    private:
	int _side;
	short _maxWarp;
	WarpSystem::Core* _core;
	Destination _location;
	Destination _home;
	int _shield; 
	int _weaponFrequency; 
	short _repair;
    public:
	Ship(int wF, short repair);
	Ship(int wF);
	~Ship();
	void setupCore(WarpSystem::Core* core);
	void checkCore();
	bool move(int warp, Destination d); // move _location to d
	bool move(int warp); // move _location to _home
	bool move(Destination d); // move _location to d
	bool move(); // move _location to _home
	int getShield();
	void setShield(int shield);
	int getWeaponFrequency();
	void setWeaponFrequency(int weaponFrequency);
	short getRepair();
	void setRepair(short repair);
	void fire(Federation::Starfleet::Ship * ship);
	void fire(Federation::Ship * ship);
	void repair();
};

}

#endif /* BORG_HH */
