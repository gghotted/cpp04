#include "Squad.hpp"

Squad::Squad(void) : count(0), units(0) {}

Squad::Squad(const Squad& squad) : units(0)
{
  *this = squad;
}

Squad::~Squad(void)
{

}

Squad& Squad::operator = (const Squad& squad)
{
  resize(squad.count);
  count = squad.count;
  for (int i = 0; i)
}

int Squad::getCount(void) const
{

}

ISpaceMarine* Squad::getUnit(int) const
{

}

int Squad::push(ISpaceMarine*)
{

}

void Squad::resize(int newCount)
{
  if (units)
  {
    for (int i = 0; i < count; i++)
      delete units[i];
    delete[] units;
  }
  units = new ISpaceMarine*[newCount];
  std::memset(units, 0, newCount * sizeof(void*));
}
