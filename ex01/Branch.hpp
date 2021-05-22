#ifndef BRANCH_HPP
#define BRANCH_HPP

#include <iostream>
#include "AWeapon.hpp"

class Branch : public AWeapon {
 public:
  Branch(void);
  Branch(const Branch& branch);
  virtual ~Branch(void);

  Branch& operator = (const Branch& branch);

  void attack(void) const;
};

#endif
