#include "Borg.hh"

namespace Borg{

    Ship::Ship(){
	std::cout<<"We are the Borgs. Lower your shields and surrender yourselves unconditionally."<<std::endl;
	std::cout<<"Your biological characteristics and technologies will be assimilated."<<std::endl;
	std::cout<<"Resistance is futile."<<std::endl;
    }

    Ship::~Ship(){}

    void Ship::setupCore(WarpSystem::Core* core){
	this->_core = core;
    }

    void Ship::checkCore(){
	bool isStable = this->_core->checkReactor()->isStable();
	if(isStable)
	    std::cout<<"Everything is in order."<<std::endl;
	else
	    std::cout<<"Critical failure imminent."<<std::endl;
    }

}

