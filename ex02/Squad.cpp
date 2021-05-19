#include "Squad.hpp"

Squad::Squad(void) : count(0), units(0) {}

Squad::Squad(const Squad& squad)
{
  *this = squad;
}

Squad::~Squad(void)
{
  deleteUnits();
}

Squad& Squad::operator = (const Squad& squad)
{
  count = squad.count;
  replaceUnits(squad.cloneUnits());
  return *this;
}

int Squad::getCount(void) const
{
  return count;
}

ISpaceMarine* Squad::getUnit(int idx) const
{
  if (!(0 <= idx && idx < count))
    return 0;
  return units[idx];
}

int Squad::push(ISpaceMarine* unit)
{
  resize(count + 1);
  units[count - 1] = unit;
  return count;
}

ISpaceMarine** Squad::cloneUnits() const
{
  ISpaceMarine** newUnits = new ISpaceMarine*[count];
  for (int i = 0; i < count; i++)
    newUnits[i] = units[i]->clone();
  return newUnits;
}

void Squad::replaceUnits(ISpaceMarine** units)
{
  deleteUnits();
  this->units = units;
}

void Squad::deleteUnits(void)
{
  for (int i = 0; i < count; i++)
    delete units[i];
  delete[] units;
}

void Squad::resize(int newCount)
{
  ISpaceMarine** newUnits = new ISpaceMarine*[newCount];
  for (int i = 0; i < count; i++)
    newUnits[i] = units[i];
  delete[] units;
  units = newUnits;
  count = newCount;
}
