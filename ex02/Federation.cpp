
#include "Federation.hh"

namespace Federation{
    namespace Starfleet{
	// ship
	Ship::Ship(int length, int width, std::string name, short maxWarp){
	    this->_length = length;
	    this->_width = width;
	    this->_name = name;
	    this->_maxWarp = maxWarp;
	    this->_home = EARTH;
	    this->_location = this->_home;
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

	void Ship::promote(Captain* captain){
	    this->_captain = captain;
	    std::cout<<captain->getName()
		<<": I’m glad to be the captain of the USS "<<this->_name<<"."<<std::endl;
	}

	bool Ship::move(int warp, Destination d){
	    if((warp <= this->_maxWarp) && (d != _location) 
		    && (this->_core->checkReactor()->isStable())){
	        this->_location = d;
	        return true;
	    }else
	        return false;
        }

        bool Ship::move(int warp){
	    if((warp <= this->_maxWarp)
		    && (this->_core->checkReactor()->isStable())){
	        this->_location = this->_home;
	        return true;
	    }else
	        return false;
        }

        bool Ship::move(Destination d){
	    if((d != _location) && (this->_core->checkReactor()->isStable())){
	        this->_location = d;
	        return true;
	    }else
	    return false;
        }
	
        bool Ship::move(){
	    if(this->_core->checkReactor()->isStable()){
	        this->_location = this->_home;
	        return true;
	    }else
	        return false;
        }

	// Captain
	Captain::Captain(std::string name){
	    this->_name = name;
	}

	Captain::~Captain(){}

	std::string Captain::getName(){
	    return this->_name;
	}
	
	int Captain::getAge(){
	    return this->_age;
	}

	void Captain::setAge(int age){
	    this->_age = age;
	}
	
	// Ensign
	Ensign::Ensign(std::string name){
	    this->_name = name;
	    std::cout<<"Ensign "<<name<<", awaiting orders."<<std::endl;
	}
	
	Ensign::~Ensign(){}

    }

    Ship::Ship(int length, int width, std::string name){
	this->_length = length;
	this->_width = width;
	this->_name = name;
	this->_maxWarp = 1;
	this->_home = VULCAN;
	this->_location = this->_home;
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


