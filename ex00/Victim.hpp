#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class Victim {
 public:
  Victim(void);
  Victim(std::string name);
  Victim(const Victim& victim);
  virtual ~Victim(void);

  Victim& operator = (const Victim& victim);

  virtual void getPolymorphed(void) const;
  const std::string& getName(void) const;

 protected:
  std::string name;
};

std::ostream& operator << (std::ostream& os, const Victim& victim);

#endif
