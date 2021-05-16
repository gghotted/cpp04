#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim {
 public:
  Victim(std::string name);
  virtual ~Victim(void);

  virtual void getPolymorphed(void) const;
  const std::string& getName(void) const;

 protected:
  std::string name;
};

std::ostream& operator << (std::ostream& os, const Victim& victim);

#endif
