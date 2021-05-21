#include "Character.hpp"

Character::Character(const std::string& name) : name(name)
{
  memset(inventory, 0, sizeof(void*) * 4);
}

Character::Character(const Character& character)
{
  memset(inventory, 0, sizeof(void*) * 4);
  *this = character;
}

Character::~Character(void)
{
  clearInventory();
}

Character& Character::operator = (const Character& character)
{
  name = character.name;
  clearInventory();
  cloneInventory((const AMateria**)character.inventory);
  return *this;
}

std::string const & Character::getName() const
{
  return name;
}

void Character::equip(AMateria* m)
{
  for (int i = 0; i < 4; i++)
  {
    if (!inventory[i])
    {
      inventory[i] = m;
      break ;
    }
  }
}

void Character::unequip(int idx)
{
  if (!(0 <= idx && idx < 4))
    return ;
  inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
  if (!(0 <= idx && idx < 4) || !inventory[idx])
    return ;
  inventory[idx]->use(target);
}

Character::Character(void)
{
}

void Character::clearInventory(void)
{
  for (int i = 0; i < 4; i++)
    delete inventory[i];
}

void Character::cloneInventory(const AMateria** inventory)
{
  for (int i = 0; i < 4; i++)
  {
    if (inventory[i])
      this->inventory[i] = inventory[i]->clone();
    else
      this->inventory[i] = 0;
  }
}
