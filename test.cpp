#include <vector>
#include <iostream>
#include <stack>
int main()
{
	// // std::vector<int> test;
	// // std::vector<int>::iterator it;
	// // // test.push_back(1);
	// // // test.push_back(2);
	// // // test.push_back(3);
	// // // test.push_back(4);
	// // // test.push_back(5);
	// // it = test.begin();
	// // // it++;
	// // std::cout << "size: "<<test.size() << std::endl;
	// // std::cout << "capacity: "<<test.capacity() << std::endl;
	// // std::cout<<std::endl;

	// // // test.insert(it, test.begin(), test.end());
	// // test.insert(it, 4);

	// // for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
	// // 	std::cout<< *its << std::endl;

	// // std::cout<<std::endl;

	// // test.insert(it, 9);
	// // test.insert(it, 7);
	// // test.insert(it, 5);
	// // for(std::vector<int>::iterator its = test.begin(); its < test.end(); its++)
	// // 	std::cout<< *its << std::endl;
	// // std::cout<<std::endl;
	// // std::cout << "size: "<<test.size() << std::endl;
	// // std::cout << "capacity: "<<test.capacity() << std::endl;
	// std::vector<int> vec;
	// vec.push_back(9);
	// vec.push_back(8);
	// vec.push_back(7);

	// std::vector<int> vec2;
	// vec2.push_back(1);
	// vec2.push_back(2);
	// vec2.push_back(3);
	// vec2.push_back(4);
	// vec2.push_back(5);
	// vec2.push_back(6);
	// vec2.push_back(7);
	// std::cout << "size: "<< vec.size() << std::endl;
	// std::cout << "capacity: "<<vec.capacity() << std::endl;
	// std::cout<<std::endl<<std::endl;	//Inserting vec2 at the beginning of the vec vector

	// vec.swap(vec2);
	// // vec.erase(it);
	// // vec.erase(it);

	// // vec.assign(3,6);
	
	// for(std::vector<int>::iterator i=vec.begin(); i<vec.end(); i++)
	// {
	// 	std::cout<<" "<<*i << "\n";
	// }
	// std::cout<<std::endl<<std::endl;	//Inserting vec2 at the beginning of the vec vector
	// std::cout << "size: "<< vec.size() << std::endl;
	// std::cout << "capacity: "<<vec.capacity() << std::endl;
	// std::cout<<std::endl<<std::endl;	//Inserting vec2 at the beginning of the vec vector

	std::stack<int> test3;
	test3.push(4);
	test3.push(4);
	test3.push(4);
	test3.push(1);
	std::cout << test3[1] << std::endl;
	return 0;
}