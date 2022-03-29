#ifndef EX03_HUMANB_H
#define EX03_HUMANB_H

#include "Weapon.h"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();
	void attack();

private:
	Weapon weapon;
	std::string name;
};


#endif //EX03_HUMANB_H
