#ifndef _ADMIRAL_
#define _ADMIRAL_

#include <iostream>
#include "Federation.hh"

namespace Federation{
    namespace Starfleet{
	class Captain;
	class Ship;
	class Ensign;
	
	class Admiral{
	    private:
		std::string _name;
	    
	    public:
		Federation::Starfleet : movePtr
		Admiral(std::string name);
		~Admiral();
		void fire(Federation::Starfleet::Ship*, Borg::Ship* bship);
		bool move(Federation::Starfleet::Ship*, Destination destination);
	};
    }

    class Ship;
}

#endif /* _ADMIRAL_ */
