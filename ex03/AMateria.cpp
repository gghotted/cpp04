#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria& aMateria)
{
  *this = aMateria;
}

AMateria::~AMateria(void)
{
}

AMateria& AMateria::operator = (const AMateria& aMateria)
{
  type = aMateria.type;
  _xp = aMateria._xp;
  return *this;
}

const std::string& AMateria::getType() const
{
  return type;
}

unsigned int AMateria::getXP() const
{
  return _xp;
}

void AMateria::use(ICharacter& target)
{
  (void)target;
  _xp += 10;
}

AMateria::AMateria(void)
{
}
