#ifndef BORG_HH
#define BORG_HH

#include <iostream>
#include "Warpsystem.hh"

namespace Borg{

class Ship{
    private:
	int _side;
	short _maxWarp;
	WarpSystem::Core* _core;
    public:
	Ship();
	~Ship();
	void setupCore(WarpSystem::Core* core);
	void checkCore();
};

}

#endif /* BORG_HH */
