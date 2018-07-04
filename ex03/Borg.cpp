#include "Borg.hh"

namespace Borg{

    Ship::Ship(int wF, short repair){
	this->_shield = 100;
	this->_weaponFrequency = wF;
	this->_repair = repair;
    }
    Ship::Ship(int wF){
	this->_shield = 100;
	this->_weaponFrequency = wF;
	this->_repair = 3;
    }

    Ship::~Ship(){}

    int Ship::getShield(){
	return this->_shield;
    }
    void Ship::setShield(int shield){
	this->_shield = shield;
    }
    int Ship::getWeaponFrequency(){
	return this->_weaponFrequency;
    }
    void Ship::setWeaponFrequency(int weaponFrequency){
	this->_weaponFrequency = weaponFrequency;
    }
    short Ship::getRepair(){
	return this->_repair;
    }
    void Ship::setRepair(short repair){
	this->_repair = repair;
    }

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

    void Ship::fire(Federation::Starfleet::Ship* ship){
	std::cout<<"Firing on target with "<<this->_weaponFrequency<<"GW frequency."<<std::endl;
	ship->setShield(ship->getShield() - this->_weaponFrequency);
    }
    void Ship::fire(Federation::Ship* ship){
	std::cout<<"Firing on target with "<<this->_weaponFrequency<<"GW frequency."<<std::endl;
	ship->getCore()->checkReactor()->setStability(false);
    }
    void Ship::repair(){
	if(this->_repair > 0){
	    this->_repair -= 1;
	    this->_shield = 100;
	    std::cout<<"Begin shield re-initialisation... Done. Awaiting further instructions."<<std::endl;
	}else
	    std::cout<<"Energy cells depleted, shield weakening."<<std::endl;
    }

}


