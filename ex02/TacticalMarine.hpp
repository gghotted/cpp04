#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
 public:
  TacticalMarine(void);
  TacticalMarine(const TacticalMarine& tacticalMarine);
  virtual ~TacticalMarine(void);

  TacticalMarine& operator = (const TacticalMarine& tacticalMarine);

  virtual ISpaceMarine* clone() const;
  virtual void battleCry() const;
  virtual void rangedAttack() const;
  virtual void meleeAttack() const;
};

#endif
