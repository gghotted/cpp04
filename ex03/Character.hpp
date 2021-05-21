#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
 public:
  Character(const std::string& name);
  Character(const Character& character);
  virtual ~Character(void);

  Character& operator = (const Character& character);

  virtual std::string const & getName() const;
  virtual void equip(AMateria* m);
  virtual void unequip(int idx);
  virtual void use(int idx, ICharacter& target);

 private:
  Character(void);
  void clearInventory(void);
  void cloneInventory(const AMateria** inventory);

  std::string name;
  AMateria* inventory[4];
};

#endif
