#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <string>

class AWeapon {
 public:
  AWeapon(std::string const& name, int apcost, int damage);
  AWeapon(const AWeapon& aWeapon);
  virtual ~AWeapon(void);

  AWeapon& operator = (const AWeapon& aWeapon);

  std::string const& getName(void) const;
  int getAPCost(void) const;
  int getDamage(void) const;
  virtual void attack(void) const = 0;

 protected:
  std::string name;
  int apcost;
  int damage;

 private:
  AWeapon(void);
};

#endif
