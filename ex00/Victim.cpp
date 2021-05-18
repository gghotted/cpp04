#include "Victim.hpp"

Victim::Victim(void) {}

Victim::Victim(std::string name) : name(name) {
  std::cout << "Some random victim called " << name << " just appeared!\n";
}

Victim::Victim(const Victim& victim)
{
  *this = victim;
}

Victim::~Victim(void) {
  std::cout << "Victim " << name << " just died for no apparent reason!\n";
}

Victim& Victim::operator = (const Victim& victim)
{
  name = victim.name;
  return *this;
}

void Victim::getPolymorphed(void) const {
  std::cout << name << " has been turned into a cute little sheep!\n";
}

const std::string& Victim::getName(void) const {
  return name;
}

std::ostream& operator << (std::ostream& os, const Victim& victim) {
  os << "I`m " << victim.getName() << " and I like otters!\n";
  return os;
}
