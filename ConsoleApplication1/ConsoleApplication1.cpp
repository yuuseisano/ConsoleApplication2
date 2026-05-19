
#include <iostream>

int* foo()
{
	int a = 10;
	return &a;
}

void foo2(int *p)
{
	int b = 10;
	std::cout << &b << std::endl;
	std::cout << b << std::endl;

	*p = 20;
	std::cout << b << std::endl;

}


int main()
{
	int* p = foo();
	foo2(p);

	std::cout << p << std::endl;
	std::cout << &p << std::endl;

}

