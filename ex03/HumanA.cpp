#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon weaponType): name(name), weapon(weaponType) {}

HumanA::~HumanA() {}

void HumanA::attack() {
	std::cout << this->name << "  attacks with their " << this->weapon.getType()  << std::endl;
}