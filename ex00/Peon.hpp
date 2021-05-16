#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
 public:
  Peon(std::string name);
  virtual ~Peon(void);

  void getPolymorphed(void) const;
};

#endif
