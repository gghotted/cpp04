#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
 public:
  AMateria(const std::string& type);
  AMateria(const AMateria& aMateria);
  virtual ~AMateria(void);

  AMateria& operator = (const AMateria& aMateria);

  const std::string& getType() const;
  unsigned int getXP() const;

  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);

 protected:
  std::string type;
  unsigned int _xp;

 private:
  AMateria(void);
};

#endif
