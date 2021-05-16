#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Slave.hpp"

void testGivenMain(void) {
  Sorcerer robert("Robert", "the Magnificent");

  Victim jim("Jimmy");
  Peon joe("Joe");

  std::cout << robert << jim << joe;

  robert.polymorph(jim);
  robert.polymorph(joe);
}

void testExtendedMain(void) {
  Sorcerer robert("Robert", "the Magnificent");

  Slave bob("bob");

  std::cout << robert << bob;

  robert.polymorph(bob);
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return (1);
  if (argv[1][0] == '0')
    testGivenMain();
  else if (argv[1][0] == '1')
    testExtendedMain();
  return 0;
}
