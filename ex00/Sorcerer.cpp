#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {}

Sorcerer::Sorcerer(std::string name, std::string title) : name(name),
                                                          title(title) {
  std::cout << name << ", " << title << ", is born!\n";
}

Sorcerer::Sorcerer(const Sorcerer& sorcerer)
{
  *this = sorcerer;
}

Sorcerer::~Sorcerer(void) {
  std::cout << name << ", " << title
            << ", is dead. Consequences will never be the same!\n";
}

Sorcerer& Sorcerer::operator = (const Sorcerer& sorcerer)
{
  name = sorcerer.name;
  title = sorcerer.title;
  return *this;
}

void Sorcerer::polymorph(Victim const& victim) const {
  victim.getPolymorphed();
}

const std::string& Sorcerer::getName(void) const {
  return name;
}

const std::string& Sorcerer::getTitle(void) const {
  return title;
}

std::ostream& operator << (std::ostream& os, const Sorcerer& sorcerer) {
  os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle()
     << ", and I like ponies!\n";
  return os;
}
