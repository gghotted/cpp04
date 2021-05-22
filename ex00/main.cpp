#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Slave.hpp"

#include "Ui.hpp"

void testGivenMain(void) {
  Ui::colorPrint("\nrequired: print sorcerer born msg\n");
  Sorcerer robert("Robert", "the Magnificent");

  Ui::colorPrint("\nrequired: print Victim born msg\n");
  Victim jim("Jimmy");

  Ui::colorPrint("\nrequired: print Peon born msg\n");
  Peon joe("Joe");

  Ui::colorPrint("\nrequired: introduce msg Sorcerer, Victim, Peon in order\n");
  std::cout << robert << jim << joe;

  Ui::colorPrint("\nrequired: print Victim polymorphed msg\n");
  robert.polymorph(jim);

  Ui::colorPrint("\nrequired: print Peon polymorphed msg\n");
  robert.polymorph(joe);

  Ui::colorPrint("\nrequired: delete msg Peon, Victim, Sorcerer in order\n");
}

void testSlave(void) {
  Ui::colorPrint("\nrequired: print sorcerer born msg\n");
  Sorcerer robert("Robert", "the Magnificent");

  Ui::colorPrint("\nrequired: print Slave born msg\n");
  Slave bob("bob");

  Ui::colorPrint("\nrequired: introduce msg Sorcerer, Slave in order\n");
  std::cout << robert << bob;

  Ui::colorPrint("\nrequired: print Slave polymorphed msg\n");
  robert.polymorph(bob);

  Ui::colorPrint("\nrequired: delete msg Slave, Sorcerer in order\n");
}

int main(int argc, char **argv)
{
  if (argc != 2)
    return 0;

  int testCase = argv[1][0] - '0';
  Ui::setTextColor(Ui::green);
  if (testCase == 0) testGivenMain();
  if (testCase == 1) testSlave();

  std::cout << Ui::blue << "\n";
  system("leaks a.out");
}
