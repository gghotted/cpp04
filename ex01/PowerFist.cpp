#include "PowerFist.hpp"

PowerFist::PowerFist(void)
    : AWeapon("Power Fist", 8, 50) {
}

PowerFist::PowerFist(const PowerFist& powerFist)
    : AWeapon(powerFist) {
}

PowerFist::~PowerFist(void) {}

PowerFist& PowerFist::operator = (const PowerFist& powerFist) {
  AWeapon::operator=(powerFist);
  return *this;
}

void PowerFist::attack(void) const {
  std::cout << "* pschhh... SBAM! *\n";
}
