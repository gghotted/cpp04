#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : size(0)
{
  memset(inventory, 0, sizeof(void*) * 4);
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource)
{
  *this = materiaSource;
}

MateriaSource::~MateriaSource(void)
{
  clearInventory();
}

MateriaSource& MateriaSource::operator = (const MateriaSource& materiaSource)
{
  clearInventory();
  cloneInventory((const AMateria**)materiaSource.inventory);
  return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
  if (size >= 4)
    return ;
  inventory[size++] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
  for (int i = 0; i < 4; i++)
    if (type.compare(inventory[i]->getType()) == 0)
      return inventory[i]->clone();
  return 0;
}

void MateriaSource::clearInventory(void)
{
  for (int i = 0; i < 4; i++)
    delete inventory[i];
}

void MateriaSource::cloneInventory(const AMateria** inventory)
{
  for (int i = 0; i < 4; i++)
    this->inventory[i] = inventory[i]->clone();
}
