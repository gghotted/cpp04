#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
 public:
  RadScorpion(void);
  RadScorpion(const RadScorpion& radScorpion);
  virtual ~RadScorpion(void);

  RadScorpion& operator = (const RadScorpion& radScorpion);
};

#endif
