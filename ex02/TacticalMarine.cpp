#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
  std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(const TacticalMarine& tacticalMarine)
{
  std::cout << "Tactical Marine ready for battle!\n";
  *this = tacticalMarine;
}

TacticalMarine::~TacticalMarine(void)
{
  std::cout << "Aaargh...\n";
}

TacticalMarine& TacticalMarine::operator = (const TacticalMarine& tacticalMarine)
{
  (void)tacticalMarine;
  return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
  return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const
{
  std::cout << "For the holy PLOT!\n";
}

void TacticalMarine::rangedAttack() const
{
  std::cout << "* attacks with a bolter *\n";
}

void TacticalMarine::meleeAttack() const
{
  std::cout << "* attacks with a chainsword *\n";
}
