#include "Slave.hpp"

Slave::Slave(std::string name) : Victim(name) {
  std::cout << "slave born.\n";
}

Slave::~Slave(void) {
  std::cout << "slave died.\n";
}

void Slave::getPolymorphed(void) const {
  std::cout << name << " has been turned into a cute cat!\n";
}
