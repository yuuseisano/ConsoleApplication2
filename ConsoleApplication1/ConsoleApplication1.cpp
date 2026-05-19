
#include <iostream>

int* foo()
{
	int a = 10;
	return &a;
}


int main()
{
	int* p = foo();

	std::cout << p << std::endl;
	std::cout << &p << std::endl;

}

