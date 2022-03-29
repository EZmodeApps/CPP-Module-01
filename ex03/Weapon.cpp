#include "Weapon.h"

Weapon::Weapon() {}

Weapon::~Weapon() {}

const std::string &Weapon::getType() const {
	return (this->type);
}

void Weapon::setType(std::string weaponType) {
	this->type = weaponType;
}