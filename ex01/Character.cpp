#include "Character.hpp"

Character::Character(void) {}

Character::Character(std::string const& name)
    : name(name),
      ap(40) {
}

Character::Character(const Character& character) {
  *this = character;
}

Character::~Character(void) {}

Character& Character::operator = (const Character& character) {
  name = character.name;
  ap = character.ap;
  aWeapon = character.aWeapon;
  return *this;
}

void Character::recoverAP(void) {
  ap += 10;
  if (ap > 40)
    ap = 40;
}

void Character::equip(AWeapon* aWeapon) {
  this->aWeapon = aWeapon;
}

void Character::attack(Enemy* enemy) {
  if (!aWeapon) {
    std::cout << "no AWeapon\n";
    return ;
  }
  if (ap < aWeapon->getAPCost()) {
    std::cout << "no AP\n";
    return ;
  }
  ap -= aWeapon->getAPCost();
  std::cout << name << " attacks " << enemy->getType()
            << " with a " << aWeapon->getName() << "\n";
  aWeapon->attack();
  enemy->takeDamage(aWeapon->getDamage());
}

std::string const& Character::getName(void) const {
  return name;
}

AWeapon const* Character::getAWeapon(void) const
{
  return aWeapon;
}

int Character::getAP(void) const
{
  return ap;
}

std::ostream& operator << (std::ostream& os, const Character& character) {
  os << character.getName() << " has "
     << character.getAP() << " AP and ";
  if (character.getAWeapon())
    os << "wields a " << character.getAWeapon()->getName() << "\n";
  else
    os << "is unarmed\n";
  return os;
}
