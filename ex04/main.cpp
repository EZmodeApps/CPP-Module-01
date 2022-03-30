#include <iostream>
#include <string>
#include <fstream>

int main(void)//, char **argv)
{
	int argc = 4;
	//void(argv);
	if (argc < 4) {
		std::cerr << "Error: wrong number of arguments!" << std::endl;
		return (1);
	}
	else if (argc == 4)
	{
		int a(3), b(4);
		std::ifstream ifs("test");
		ifs >> a >> b;
		std::cout << ifs << std::endl;
		std::ofstream ofs("test");
		ofs << "3, 4" << std::endl;
		ofs.close();
	}
	return 0;
}
