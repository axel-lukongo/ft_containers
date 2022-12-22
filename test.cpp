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
	std::vector<int> vec;
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(6);
	vec.push_back(8);
	std::vector<int> vec2;
	vec2.push_back(1);
	vec2.push_back(3);
	vec2.push_back(5);
	vec2.push_back(7);

	std::cout<<"Intially first vector: ";
	for(std::vector<int>::iterator i=vec.begin(); i<vec.end(); i++)
	{
		std::cout<<" "<<*i;
	}
	std::cout<<"\nIntially second vector: ";
	for(std::vector<int>::iterator i=vec2.begin(); i<vec2.end(); i++)
	{
		std::cout<<" "<<*i;
	}
	
	//Inserting vec2 at the beginning of the vec vector
	vec.insert(vec.begin(),vec2.begin(),vec2.end());
	
	std::cout<<"\n\nThe modified vector is: ";
	for(std::vector<int>::iterator i=vec.begin(); i<vec.end(); i++)
	{
		std::cout<<" "<<*i;
	}
	return 0;
}