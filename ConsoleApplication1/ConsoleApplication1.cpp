
#include <iostream>

int* foo()
{
	int a = 10;
	return &a;
}

void foo2()
{
	int b;
	std::cout << &b << std::endl;
}


int main()
{
	int* p = foo();
	foo2();

	std::cout << p << std::endl;
	std::cout << &p << std::endl;

}

