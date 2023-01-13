#include <vector>
#include <iostream>
#include <stack>
#include<map>
template <typename T>
void	printSize(std::vector<T> const &vct, bool print_content = true)
{
	const size_t size = vct.size();
	const size_t capacity = vct.capacity();
	const std::string isCapacityOk = (capacity >= size) ? "OK" : "KO";
	// Cannot limit capacity's max value because it's implementation dependent

	std::cout << "size: " << size << std::endl;
	std::cout << "capacity ok or ko: " << isCapacityOk << std::endl;
	std::cout << "capacity: " << capacity << std::endl;
	std::cout << "max_size: " << vct.max_size() << std::endl;
	if (print_content)
	{
		typename std::vector<T>::const_iterator it = vct.begin();
		typename std::vector<T>::const_iterator ite = vct.end();
		std::cout << std::endl << "Content is:" << std::endl;
		for (; it != ite; ++it)
			std::cout << "- " << *it << std::endl;
	}
	std::cout << "###############################################" << std::endl;
}

void	is_empty(std::vector<int> const &vct)
{
	std::cout << "is_empty: " << vct.empty() << std::endl;
}

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
	// std::vector<int> test(5);
	// std::vector<int>::reverse_iterator it = test.rbegin();
	// std::vector<int>::reverse_iterator ite = test.rbegin();
	// std::vector<int>::reverse_iterator ita(it);
	
	// 	for (size_t i = 0; i < test.size(); ++i)
	// 	it[0] = (test.size() - 0) * 5;

	// it = it + 5;
	// it = 1 + it;
	// it = it - 4;
	// std::cout << *(it += 2) << std::endl;
	// std::cout << *(it -= 1) << std::endl;

	// *(it -= 2) = 42;
	// *(it += 2) = 21;

	// std::cout << "const_ite +=/-=: " << *(ite += 2) << " | " << *(ite -= 2) << std::endl;

	// std::cout << "(it == const_it): " << (ite == it) << std::endl;
	// std::cout << "(const_ite - it): " << (ite - it) << std::endl;
	// std::cout << "(ite + 3 == it): " << (ite + 3 == it) << std::endl;


	// const int start_size = 7;
	// std::vector<int> vct(start_size, 20);
	// std::vector<int> vct2;
	// std::vector<int>::iterator it = vct.begin();

	// std::vector<int> vct(10);
	// std::vector<int> vct2;
	// std::vector<int> vct3;


	// for (int i = 2; i < start_size; ++i)
	// 	it[i] = (start_size - i) * 3;
	// printSize(vct, true);

	// vct.resize(10, 42);
	// printSize(vct, true);

	// vct.resize(18, 43);
	// printSize(vct, true);
	// vct.resize(10);
	// printSize(vct, true);
	// vct.resize(23, 44);
	// printSize(vct, true);
	// vct.resize(5);
	// printSize(vct, true);
	// vct.reserve(5);
	// vct.reserve(3);
	// printSize(vct, true);
	// vct.resize(87);
	// vct.resize(5);
	// printSize(vct, true);

	// is_empty(vct2);
	// vct2 = vct;
	// is_empty(vct2);
	// vct.reserve(vct.capacity() + 1);
	// printSize(vct, true);
	// printSize(vct2, true);

	// vct2.resize(0);
	// is_empty(vct2);
	// printSize(vct2, true);
	std::map<int,int> tree;
	tree[2] = 213;
	tree[3] = 33;
	tree[4] = 21;
	tree[1] = 83;
	tree[5] = 22;
	tree[6] = 23;
	tree[7] = 24;
	std::map<int,int>::iterator it = tree.begin();
	std::cout << it->first << "----------\n";

	return 0;
}