#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
    : Enemy(170, "Super Mutant") {
  std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(const SuperMutant& superMutant)
    : Enemy(superMutant) {
}

SuperMutant::~SuperMutant(void) {
  std::cout << "Aaargh...\n";
}

SuperMutant& SuperMutant::operator = (const SuperMutant& superMutant) {
  Enemy::operator=(superMutant);
  return *this;
}

void SuperMutant::takeDamage(int damage) {
  if (damage < 0)
    return ;
  Enemy::takeDamage(damage - 3);
}
