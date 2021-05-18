#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
    : Enemy(80, "RadScorpion") {
  std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(const RadScorpion& radScorpion)
    : Enemy(radScorpion) {
}

RadScorpion::~RadScorpion(void) {
  std::cout << "* SPROTCH *\n";
}

RadScorpion& RadScorpion::operator = (const RadScorpion& radScorpion)
{
  Enemy::operator=(radScorpion);
  return *this;
}
