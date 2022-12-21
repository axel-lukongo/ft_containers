#include <vector>
#include <iostream>

int main()
{
	std::vector<int> test;
	std::vector<int>::iterator it;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);
	it = test.begin();
	it++;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	std::cout<<std::endl;

	test.insert(it, 2, 5);

	for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
		std::cout<< *its << std::endl;

	std::cout<<std::endl;

	// test.insert(it, 9);
	// test.insert(it, 7);
	// test.insert(it, 5);
	// for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
	// 	std::cout<< *its << std::endl;
	std::cout<<std::endl;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
}