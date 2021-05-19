#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
  std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& assaultTerminator)
{
  std::cout << "* teleports from space *\n";
  *this = assaultTerminator;
}

AssaultTerminator::~AssaultTerminator(void)
{
  std::cout << "I’ll be back...\n";
}

AssaultTerminator& AssaultTerminator::operator = (const AssaultTerminator& assaultTerminator)
{
  (void)assaultTerminator;
  return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
  return (new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
  std::cout << "This code is unclean. PURIFY IT!\n";
}

void AssaultTerminator::rangedAttack() const
{
  std::cout << "* does nothing *\n";
}

void AssaultTerminator::meleeAttack() const
{
  std::cout << "* attacks with chainfists *\n";
}
