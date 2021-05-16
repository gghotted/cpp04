#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
 public:
  Sorcerer(std::string name, std::string title);
  ~Sorcerer(void);

  void polymorph(Victim const& victim) const;

  const std::string& getName(void) const;
  const std::string& getTitle(void) const;

 private:
  std::string name;
  std::string title;
};

std::ostream& operator << (std::ostream& os, const Sorcerer& sorcerer);

#endif
