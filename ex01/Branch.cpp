#include "Branch.hpp"

Branch::Branch(void) : AWeapon("Branch", 2, 10)
{
}

Branch::Branch(const Branch& branch) : AWeapon(branch)
{
}

Branch::~Branch(void)
{
}

Branch& Branch::operator = (const Branch& branch)
{
  AWeapon::operator=(branch);
  return *this;
}

void Branch::attack(void) const
{
  std::cout << "* BaSLak.. BaSLak.. *\n";
}
