#include <vector>
#include <iostream>

int main()
{
	std::vector<int> test;
	std::vector<int>::iterator it;
	test.push_back(3);
	test.push_back(2);
	test.push_back(1);
	it = test.begin();
	std::cout << *it <<std::endl<<std::endl;

	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
}