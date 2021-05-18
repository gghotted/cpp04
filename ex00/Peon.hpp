#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
 public:
  Peon(void);
  Peon(std::string name);
  Peon(const Peon& peon);
  virtual ~Peon(void);

  Peon& operator = (const Peon& peon);

  void getPolymorphed(void) const;
};

#endif
