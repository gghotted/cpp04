#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const& type)
    : hp(hp),
      type(type) {
}

Enemy::Enemy(const Enemy& enemy) {
  *this = enemy;
}

Enemy::~Enemy(void) {
}

Enemy& Enemy::operator = (const Enemy& enemy) {
  hp = enemy.hp;
  type = enemy.type;
  return *this;
}

std::string const& Enemy::getType() const {
  return type;
}

int Enemy::getHP() const {
  return hp;
}

void Enemy::takeDamage(int damage) {
  if (damage < 0)
    return ;
  hp -= damage;
  if (hp <= 0)
    hp = 0;
}

Enemy::Enemy(void) {}
