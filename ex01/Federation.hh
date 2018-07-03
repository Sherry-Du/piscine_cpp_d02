#ifndef FEDERATION_HH
#define FEDERATION_HH

#include <iostream>
#include "Warpsystem.hh"

namespace Federation{
    namespace Starfleet{

	class Captain{
	    private:
		std::string _name;
		int _age;
	    public:
		Captain(std::string name);
		~Captain();
		std::string getName();
		int getAge();
		void setAge(int age);
	};

	class Ship{
	    private:
		int _length;
		int _width;
		std::string _name;
		short _maxWarp;
		WarpSystem::Core* _core;
		Captain* _captain;
	    public:
		Ship(int length, int width, std::string name, short maxWarp);
		~Ship();
		void setupCore(WarpSystem::Core* core);
		void checkCore();
		void promote(Captain* captain);
	};

	class Ensign{
	    private:
		std::string _name;
	    public:
		Ensign(std::string name);
		~Ensign();
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
