#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "Ui.hpp"

void testGivenMain()
{
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter* me = new Character("me");

  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  ICharacter* bob = new Character("bob");

  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  delete me;
  delete src;
}

void testCharacterCopyConstructor()
{
  Character me("me");
  Character you(me);

  std::cout << me.getName() << "\n";
  std::cout << you.getName() << "\n";
}

void testCharacterAssignation()
{
  Character me("me");
  Character you("you");

  me.equip(new Ice());
  you.equip(new Cure());
  you = me;

  you.use(0, me);
}

void testCharacterUse()
{
  Character me("me");
  Character you("you");
  Ice* ice = new Ice();

  me.equip(ice);
  me.use(0, you);

  std::cout << "ice xp: " << ice->getXP();
}

int main(int argc, char** argv)
{
  if (argc != 2)
    return 1;

  int testCase = argv[1][0] - '0';
  if (testCase == 0) testGivenMain();
  if (testCase == 1) testCharacterCopyConstructor();
  if (testCase == 2) testCharacterAssignation();
  if (testCase == 3) testCharacterUse();

  std::cout << Ui::blue << "\n";
  system("leaks a.out");
  return 0;
}
