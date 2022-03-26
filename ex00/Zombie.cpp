#include "Zombie.h"

Zombie::Zombie() {}

Zombie::~Zombie() {}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie Zombie::newZombie(std::string name)
{
	Zombie*	zom = new Zombie();
	zom->name = name;
	zom->announce();
	return (*zom);
}