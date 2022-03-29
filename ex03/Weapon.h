#ifndef EX03_WEAPON_H
#define EX03_WEAPON_H

#include <iostream>
#include <string>

class Weapon {
public:
	Weapon();
	~Weapon();
	const std::string &getType() const;
	void setType(std::string weaponType);
private:
	std::string type;
};


#endif //EX03_WEAPON_H
