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
	{
	const int size = 5;
	std::vector<int> vct(size);
	std::vector<int>::iterator it_ = vct.begin();
	std::vector<int>::reverse_iterator it(it_);

	for (int i = 0; i < size; ++i)
		vct[i] = (i + 1) * 5;
	printSize(vct);

	std::cout << (it_ == it.base()) << std::endl;
	std::cout << (it_ == (it + 3).base()) << std::endl;

	std::cout << *(it.base() + 1) << std::endl;
	std::cout << *(it - 3) << std::endl;
	std::cout << *(it - 3).base() << std::endl;
	it -= 3;
	std::cout << *it.base() << std::endl;

	std::cout << "TEST OFFSET" << std::endl;
	std::cout << *(it) << std::endl;
	std::cout << *(it).base() << std::endl;
	std::cout << *(it - 0) << std::endl;
	std::cout << *(it - 0).base() << std::endl;
	std::cout << *(it - 1).base() << std::endl;

	}
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
	// std::map<int,int> test;
	// test.insert(std::pair<int,int>(2,100));
	// test.insert(std::pair<int,int>(2,100));
	// test.insert(std::pair<int,int>(2,100));
	// test.insert(std::pair<int,int>(2,100));
	// test.insert(std::pair<int,int>(3,100));
	// std::map<int,int>::const_iterator it; 
	// it = test.begin();
	// it++;
	// std::cout << it->first << "----------\n";


// {
// 	std::cout << std::endl<< std::endl<< std::endl;
// 	std::cout << "************************** find ***************************";
// 	std::cout << std::endl;
// 	std::map<int, std::string> test;
// 	test.insert(std::pair<int,std::string>(2, "le deuxieme mini"));
// 	test.insert(std::pair<int,std::string>(5,"le 2eme plus grand"));
// 	test.insert(std::pair<int,std::string>(1,"le 2eme plus grand"));
// 	test.insert(std::pair<int,std::string>(8,"le 2eme plus grand"));
// 	test.insert(std::pair<int,std::string>(3,"le 2eme plus grand"));
// 	std::map<int, std::string>::iterator it = test.find(122);
// 	std::cout << it->first;

// 	}

	// std::map<int, int> m;
	// m[2] = 2;
	// m[5] = 5;
	// m[1] = 1;
	// m[8] = 8;
	// m[3] = 3;
	// m[19] = 19;
	// m[34] = 34;
	// m[21] = 21;
	// m[9] = 9;

	// std::map<int,int>::iterator found = m.upper_bound(20);
	// std::cout << "Key: " << found->first << std::endl;
	// return 0;

	// std::map<char,int> mymap;

	// mymap['a']=10;
	// mymap['b']=20;
	// mymap['c']=30;
	// mymap['d']=40;
	// mymap['e']=50;
	// mymap['f']=60;

	// std::pair<std::map<char,int>::iterator,std::map<char,int>::iterator> ret;
	// ret = mymap.equal_range('b');

	// std::cout << "lower bound points to: ";
	// std::cout << ret.first->first << " => " << ret.first->second << '\n';

	// std::cout << "upper bound points to: ";
	// std::cout << ret.second->first << " => " << ret.second->second << '\n';

	// return 0;
}
