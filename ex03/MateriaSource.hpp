#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource(void);
  MateriaSource(const MateriaSource& materiaSource);
  virtual ~MateriaSource(void);

  MateriaSource& operator = (const MateriaSource& materiaSource);

  virtual void learnMateria(AMateria*);
  virtual AMateria* createMateria(std::string const & type);

 private:
  void clearInventory(void);
  void cloneInventory(const AMateria** inventory);

  int size;
  AMateria* inventory[4];
};

#endif
