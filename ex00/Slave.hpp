#ifndef SLAVE_HPP
#define SLAVE_HPP

#include "Victim.hpp"

class Slave : public Victim {
 public:
  Slave(std::string name);
  ~Slave(void);

  void getPolymorphed(void) const;
};

#endif
