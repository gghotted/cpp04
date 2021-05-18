#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
 public:
  Sorcerer(std::string name, std::string title);
  Sorcerer(const Sorcerer& sorcerer);
  virtual ~Sorcerer(void);

  Sorcerer& operator = (const Sorcerer& sorcerer);

  void polymorph(Victim const& victim) const;
  const std::string& getName(void) const;
  const std::string& getTitle(void) const;

 private:
  Sorcerer(void);

  std::string name;
  std::string title;
};

std::ostream& operator << (std::ostream& os, const Sorcerer& sorcerer);

#endif
