

#include "Warpsystem.hh"

namespace WarpSystem{

  QuantumReactor::QuantumReactor():_stability(true){}

  QuantumReactor::~QuantumReactor(){};

  bool QuantumReactor::isStable(){
    return this->_stability;
  }

  void QuantumReactor::setStability(bool isStable){
    this->_stability = isStable;
  }

  Core::Core(QuantumReactor *_coreReactor){
    this->_coreReactor = _coreReactor;
  }

  Core::~Core(){}

  QuantumReactor* Core::checkReactor(){
    return this->_coreReactor;
  }

}
