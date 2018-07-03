#include "Borg.hh"

namespace Borg{

    Ship::Ship(){
	this->_home = UNICOMPLEX;
	this->_location = this->_home;
	std::cout<<"We are the Borgs. Lower your shields and surrender yourselves unconditionally."<<std::endl;
	std::cout<<"Your biological characteristics and technologies will be assimilated."<<std::endl;
	std::cout<<"Resistance is futile."<<std::endl;
    }

    Ship::~Ship(){}

    void Ship::setupCore(WarpSystem::Core* core){
	this->_core = core;
	bool isStable = core->checkReactor()->isStable();
	if(isStable)
	    std::cout<<"Everything is in order."<<std::endl;
	else
	    std::cout<<"Critical failure imminent."<<std::endl;
    }

    void Ship::checkCore(){
	bool isStable = this->_core->checkReactor()->isStable();
	if(isStable)
	    std::cout<<"Everything is in order."<<std::endl;
	else
	    std::cout<<"Critical failure imminent."<<std::endl;
    }

    bool Ship::move(int warp, Destination d){
	if((warp <= this->_maxWarp) && (d != _location) 
		&& (this->_core->checkReactor()->isStable())){
	    this->_location = d;
	    return true;
	}else{
	    return false;
	}
    }

    bool Ship::move(int warp){
	if((warp <= this->_maxWarp)
		&& (this->_core->checkReactor()->isStable())){
	    this->_location = this->_home;
	    return true;
	}else{
	    return false;
	}
    }

    bool Ship::move(Destination d){
	if((d != _location) && (this->_core->checkReactor()->isStable())){
	    this->_location = d;
	    return true;
	}else{
	    return false;
	}
    }
	
    bool Ship::move(){
	if(this->_core->checkReactor()->isStable()){
	    this->_location = this->_home;
	    return true;
	}else{
	    return false;
	}
    }

}

