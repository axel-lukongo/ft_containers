#include <vector>
#include <iostream>

int main()
{
	// std::vector<int> test;
	// std::vector<int>::iterator it;
	// // test.push_back(1);
	// // test.push_back(2);
	// // test.push_back(3);
	// // test.push_back(4);
	// // test.push_back(5);
	// it = test.begin();
	// // it++;
	// std::cout << "size: "<<test.size() << std::endl;
	// std::cout << "capacity: "<<test.capacity() << std::endl;
	// std::cout<<std::endl;

	// // test.insert(it, test.begin(), test.end());
	// test.insert(it, 4);

	// for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
	// 	std::cout<< *its << std::endl;

	// std::cout<<std::endl;

	// test.insert(it, 9);
	// test.insert(it, 7);
	// test.insert(it, 5);
	// for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
	// 	std::cout<< *its << std::endl;
	// std::cout<<std::endl;
	// std::cout << "size: "<<test.size() << std::endl;
	// std::cout << "capacity: "<<test.capacity() << std::endl;
	std::vector<int> test;
	std::vector<int>::iterator it;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	// test.push_back(4);
	// test.push_back(5);
	// test.push_back(6);
	std::vector<int> test2;
	test2.push_back(8);
	test2.push_back(9);
	test2.push_back(10);
	test2.push_back(11);
	test2.push_back(12);
	// test2.push_back(13);
	// test2.push_back(14);
	// test2.push_back(15);
	// test2.push_back(16);
	it = test.begin();
	it++;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	std::cout<<std::endl<<std::endl;

	// std::cout << "----------------: "<<*(test2.end()) << std::endl;
	// test.insert(it, test2.begin(), test2.end()-1);
		test.assign(test2.begin(), test2.end());

	for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
		std::cout<< *its << std::endl;

	// test.insert(it, 5);
	// test.insert(it, 5);
	// for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
	// 	std::cout<< *its << std::endl;
	std::cout<<std::endl<<std::endl;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	return 0;
}