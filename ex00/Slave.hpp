#ifndef SLAVE_HPP
#define SLAVE_HPP

#include "Victim.hpp"

class Slave : public Victim {
 public:
  Slave(void);
  Slave(const Slave& slave);
  Slave(std::string name);
  virtual ~Slave(void);

  Slave& operator = (const Slave& slave);

  void getPolymorphed(void) const;
};

#endif
