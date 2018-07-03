#ifndef FEDERATION_HH
#define FEDERATION_HH

#include <iostream>
#include "Warpsystem.hh"

namespace Federation{
    namespace Starfleet{
	class Ship{
	    private:
		int _length;
		int _width;
		std::string _name;
		short _maxWarp;
		WarpSystem::Core* _core;
	    public:
		Ship(int length, int width, std::string name, short maxWarp);
		~Ship();
		void setupCore(WarpSystem::Core* core);
		void checkCore();
	};
    }

    class Ship{
	private:
	int _length;
	int _width;
	std::string _name;
	short _maxWarp;
	WarpSystem::Core* _core;
	public:
	Ship(int length, int width, std::string name);
	~Ship();
	void setupCore(WarpSystem::Core* core);
	void checkCore();
    };
}

#endif /* FEDERATION_HH */
