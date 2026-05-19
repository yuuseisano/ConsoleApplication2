
#include <iostream>

void foo(std::unique_ptr<int> p)
{
	std::cout << *p << std::endl;
}

int main()
{
	std::unique_ptr<int> unique(new int(10));
	std::unique_ptr<int>unique2 ;
	unique2.swap(unique);

	std::cout << *unique2 << std::endl;
}

