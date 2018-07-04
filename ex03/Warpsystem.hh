#ifndef WARPSYSTEM_HH
#define WARPSYSTEM_HH

#include <iostream>

namespace WarpSystem{
   
class QuantumReactor{
    private:
	bool _stability;
	
    public:
	QuantumReactor();
	~QuantumReactor();
	bool isStable();
	void setStability(bool isStable);
};

class Core{
    private:
	QuantumReactor *_coreReactor;
    public:
	Core(QuantumReactor *_coreReactor);
	~Core();
	QuantumReactor *checkReactor();
};
    
}

#endif /* WARPSYSTEM_HH */
