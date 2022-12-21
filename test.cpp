#include <vector>
#include <iostream>

int main()
{
	std::vector<std::string> test;
	std::vector<std::string>::iterator it;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	test.push_back("salut");
	// std::cout << "capacity: "<<test.capacity() << std::endl;
	test.push_back("je fais");
	// std::cout << "capacity: "<<test.capacity() << std::endl;
	test.push_back("un teste");
	// std::cout << "capacity: "<<test.capacity() << std::endl;
	// test.push_back("un teste");
	it = test.begin();
	it++;
	// std::cout << "size: "<<test.size() << std::endl;
	// std::cout << "capacity: "<<test.capacity() << std::endl;

	test.insert(it, "5");

	for(std::vector<std::string>::iterator its = test.begin(); its < test.end(); its++)
		std::cout<< *its << std::endl;

	// std::cout<<std::endl;

	// test.insert(it, 9);
	// test.insert(it, 7);
	// test.insert(it, 5);
	// for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
	// 	std::cout<< *its << std::endl;
	// std::cout<<std::endl;
	// std::cout << "size: "<<test.size() << std::endl;
	// std::cout << "capacity: "<<test.capacity() << std::endl;
}