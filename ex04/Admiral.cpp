#include "Admiral.hh"


namespace Federation{
    namespace Starfleet{
	Admiral::Admiral(std::string name){
	    this->_name = name;
	    std::cout<<"Admiral "<<name<<" ready for action."<<std::endl;
	}

	Admiral::~Admiral(){}

	void Admiral::fire(Federation::Starfleet::Ship*, Borg::Ship* bship){
	    std::cout<<"On order from Admiral "<<this->_name<<":"<<std::endl;
	    
	}
	
	bool Admiral::move(Federation::Starfleet::Ship*, Destination destination){
	    
	}

    }
}
