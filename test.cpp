#include <vector>
#include <iostream>

int main()
{
	std::vector<int> test;
	std::vector<int>::iterator itb;
	test.begin();
	test.push_back(3);
	test.push_back(4);
	test.push_back(1);
	test.push_back(6);
	std::vector<int>::iterator it = test.begin();
	std::cout << *it << std::endl;
	std::cout << *it << std::endl;
	std::cout << *it << std::endl;
	// // for (it = test.begin(); it < test.end(); it++)
	// // {
	// // 	std::cout << *it << std::endl;
	// // }
	// // std::cout << std::endl;
	// // std::cout << std::endl;
	
	// // test.shrink_to_fit();
	// itb = test.begin();
	// for (it = test.begin(); it < test.end(); it++)
	// {
	// 	std::cout << *it << std::endl;
	// }
	// std::cout << std::endl;
	// std::cout << std::endl;
	// std::cout << "capacity: "<<test.capacity() << std::endl;
	// std::cout << "size: "<<test.size() << std::endl;
	// std::cout << test[0] << std::endl;
}