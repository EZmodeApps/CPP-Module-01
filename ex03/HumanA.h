#ifndef EX03_HUMANA_H
#define EX03_HUMANA_H

#include "Weapon.h"

class HumanA {
public:
	HumanA(std::string name, Weapon weaponType);
	~HumanA();
	void attack();

private:
	Weapon weapon;
	std::string name;
};


#endif //EX03_HUMANA_H
