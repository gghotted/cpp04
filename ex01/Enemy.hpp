#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy {
 public:
  Enemy(int hp, std::string const& type);
  Enemy(const Enemy& enemy);
  virtual ~Enemy(void);

  Enemy& operator = (const Enemy& enemy);

  std::string const& getType() const;
  int getHP() const;
  virtual void takeDamage(int damage);

 protected:
  int hp;
  std::string type;

 private:
  Enemy(void);
};

#endif
