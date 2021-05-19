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
  virtual ISpaceMarine* getUnit(int) const;
  virtual int push(ISpaceMarine*);
  void resize(int newCount);

 private:
  ISpaceMarine** units;
  int count;
};

#endif
