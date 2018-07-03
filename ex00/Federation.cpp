
#include "Federation.hh"

namespace Federation{
    namespace Starfleet{
	Ship::Ship(int length, int width, std::string name, short maxWarp){
	    this->_length = length;
	    this->_width = width;
	    this->_name = name;
	    this->_maxWarp = maxWarp;
	    std::cout<<"The ship USS "<<name<<" has been finished. It is "
		 	<<length<<" m in length and "<<width<<" m in width."<<std::endl;
	    std::cout<<"It can go to Warp "<<maxWarp<<"!"<<std::endl;

	}

	Ship::~Ship(){

	}

	void Ship::setupCore(WarpSystem::Core* core){
	    this->_core = core;
	    std::cout<<"USS "<<this->_name<<": The core is set."<<std::endl;
	}
	
	void Ship::checkCore(){
	     std::cout<<"USS "<<this->_name<<": The core is "
		<<(this->_core->checkReactor()->isStable() ? "stable" : "unstable")
		<<" at the time."<<std::endl;	
	}
    }

    Ship::Ship(int length, int width, std::string name){
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = 1;
	std::cout<<"The independant ship "<<name<<" just finished its construction. It is "
	 	<<length<<" m in length and "<<width<<" m in width."<<std::endl;
    }

    Ship::~Ship(){}

    void Ship::setupCore(WarpSystem::Core* core){
	this->_core = core;
	std::cout<<this->_name<<": The core is set."<<std::endl;
    }

    void Ship::checkCore(){
	std::cout<<this->_name<<": The core is "
	<<(this->_core->checkReactor()->isStable() ? "stable" : "unstable")
	<<" at the time."<<std::endl;	
    }

}

