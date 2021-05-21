#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice& ice) : AMateria("ice")
{
  *this = ice;
}

Ice::~Ice(void)
{
}

Ice& Ice::operator = (const Ice& ice)
{
  _xp = ice._xp;
  return *this;
}

AMateria* Ice::clone() const
{
  return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
  AMateria::use(target);
  std::cout << "* shoots an ice bolt at "
            << target.getName() << " *\n";
}
