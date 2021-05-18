#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character {
 public:
  Character(std::string const& name);
  Character(const Character& character);
  ~Character(void);

  Character& operator = (const Character& character);

  void recoverAP(void);
  void equip(AWeapon* aWeapon);
  void attack(Enemy* enemy);
  std::string const& getName(void) const;
  AWeapon const* getAWeapon(void) const;
  int getAP(void) const;

 private:
  Character(void);

  std::string name;
  AWeapon* aWeapon;
  int ap;
};

std::ostream& operator << (std::ostream& os, const Character& character);

#endif
