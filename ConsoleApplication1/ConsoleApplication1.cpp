
#include <iostream>

void unique()
{
	std::unique_ptr<int> unique(std::make_unique<int>(10));
	std::unique_ptr<int>unique2;
	unique2.swap(unique);

	std::cout << *unique2 << std::endl;

}

class Sample
{
public:
	std::shared_ptr<int>value;

	Sample()
		: value(std::make_shared<int>(20))
	{
	}


};

void shared()
{
	auto sample = new Sample();
	std::cout << *sample->value << std::endl;
}



int main()
{
	// unique();
	shared();
}

