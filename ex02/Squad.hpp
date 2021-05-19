#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <cstring>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
 public:
  Squad(void);
  Squad(const Squad& squad);
  virtual ~Squad(void);

  Squad& operator = (const Squad& squad);

  virtual int getCount(void) const;
  virtual ISpaceMarine* getUnit(int idx) const;
  virtual int push(ISpaceMarine* unit);

 private:
  ISpaceMarine** cloneUnits() const;
  void replaceUnits(ISpaceMarine** units);
  void deleteUnits(void);
  void resize(int newCount);

  int count;
  ISpaceMarine** units;
};

#endif
