#include "Peon.hpp"

Peon::Peon(void) {}

Peon::Peon(std::string name) : Victim(name) {
  std::cout << "Zog zog.\n";
}

Peon::Peon(const Peon& peon) {
  *this = peon;
}

Peon::~Peon(void) {
  std::cout << "Bleuark...\n";
}

Peon& Peon::operator = (const Peon& peon)
{
  name = peon.name;
  return *this;
}

void Peon::getPolymorphed(void) const {
  std::cout << name << " has been turned into a pink pony!\n";
}
