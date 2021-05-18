#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
 public:
  PlasmaRifle(void);
  PlasmaRifle(const PlasmaRifle& plasmaRifle);
  virtual ~PlasmaRifle(void);

  PlasmaRifle& operator = (const PlasmaRifle& plasmaRifle);

  void attack(void) const;
};

#endif
