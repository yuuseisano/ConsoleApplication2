
#include <iostream>

int main()
{
	int v1 = 10;
	//int v2 = 20;
	int* p1 = new int(20);
	//int* p2 = new float(20);
	std::cout << &v1 << std::endl;
	std::cout << &p1 << std::endl;
}

