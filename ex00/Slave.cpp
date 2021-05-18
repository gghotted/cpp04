#include "Slave.hpp"

Slave::Slave(void) {}

Slave::Slave(const Slave& slave)
{
  *this = slave;
}

Slave::Slave(std::string name) : Victim(name) {
  std::cout << "slave born.\n";
}

Slave::~Slave(void) {
  std::cout << "slave died.\n";
}

Slave& Slave::operator = (const Slave& slave)
{
  name = slave.name;
  return *this;
}

void Slave::getPolymorphed(void) const {
  std::cout << name << " has been turned into a cute cat!\n";
}
