#ifndef CPP_MODULE_01_ZOMBIE_H
#define CPP_MODULE_01_ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie();
	Zombie newZombie(std::string name);

private:
	std::string name;
	void announce(void);
};


#endif
