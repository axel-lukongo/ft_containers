/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2023/01/27 02:28:55 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stack.hpp"
#include <iostream>
// #include <vector>
#include"map.hpp"
// #include "print_tree.hpp"
#include<map>

#include "vector.hpp"

// template <typename T>
// void	printSize(ft::vector<T> const &vct, bool print_content = true)
// {
// 	const size_t size = vct.size();
// 	const size_t capacity = vct.capacity();
// 	const std::string isCapacityOk = (capacity >= size) ? "OK" : "KO";
// 	// Cannot limit capacity's max value because it's implementation dependent

// 	std::cout << "size: " << size << std::endl;
// 	std::cout << "capacity ok or ko: " << isCapacityOk << std::endl;
// 	std::cout << "capacity: " << capacity << std::endl;
// 	std::cout << "max_size: " << vct.max_size() << std::endl;
// 	if (print_content)
// 	{
// 		typename ft::vector<T>::const_iterator it = vct.begin();
// 		typename ft::vector<T>::const_iterator ite = vct.end();
// 		std::cout << std::endl << "Content is:" << std::endl;
// 		for (; it != ite; ++it)
// 			std::cout << "- " << *it << std::endl;
// 	}
// 	std::cout << "###############################################" << std::endl;
// }


int main(){

{
	std::cout << std::endl<< std::endl<< std::endl;
	std::cout << "************************** erase ***************************";
	std::cout << std::endl;
	ft::map<int, std::string> test;
	test.insert(ft::pair<int,std::string>(2, "deux"));
	test.insert(ft::pair<int,std::string>(5,"cinq"));
	test.insert(ft::pair<int,std::string>(1,"un"));
	test.insert(ft::pair<int,std::string>(8,"huit"));
	test.insert(ft::pair<int,std::string>(3,"trois"));
	test.insert(ft::pair<int,std::string>(19,"trois"));
	test.insert(ft::pair<int,std::string>(34,"trois"));
	test.insert(ft::pair<int,std::string>(21,"trois"));
	test.insert(ft::pair<int,std::string>(51,"trois"));
	test.insert(ft::pair<int,std::string>(61,"trois"));
	test.insert(ft::pair<int,std::string>(91,"trois"));
	test.insert(ft::pair<int,std::string>(81,"trois"));
	test.insert(ft::pair<int,std::string>(161,"trois"));
	test.insert(ft::pair<int,std::string>(61,"trois"));
	test.insert(ft::pair<int,std::string>(32,"trois"));
	test.insert(ft::pair<int,std::string>(101,"trois"));
	test.insert(ft::pair<int,std::string>(71,"trois"));
	test.insert(ft::pair<int,std::string>(7,"trois"));
	test.insert(ft::pair<int,std::string>(9,"trois"));
	// ft::map<int, std::string>::iterator it = test.begin();
	// ft::map<int, std::string>::iterator ite = test.begin();
	// ite--;
	// ite--;
	// ite--;
	// ite--;
	// ite--;
	// ite++;
	// ite++;
	// ite++;
	// ite++;
	// ite++;
	// std::cout << "it: " << ite->first<< std::endl;
	// test.erase(it, ite);
	
	// std::cout << "erase: " << test.erase(5) << std::endl;
	// std::cout << "erase: " << test.erase(71) << std::endl;
}



// {
// 	std::cout << std::endl<< std::endl<< std::endl;
// 	std::cout << "************************** count ***************************";
// 	std::cout << std::endl;
// 	ft::map<int, std::string> test;
// 	test.insert(ft::pair<int,std::string>(2, "deux"));
// 	test.insert(ft::pair<int,std::string>(5,"cinq"));
// 	test.insert(ft::pair<int,std::string>(1,"un"));
// 	test.insert(ft::pair<int,std::string>(8,"huit"));
// 	test.insert(ft::pair<int,std::string>(3,"trois"));
// 	test.insert(ft::pair<int,std::string>(19,"trois"));
// 	test.insert(ft::pair<int,std::string>(34,"trois"));
// 	test.insert(ft::pair<int,std::string>(21,"trois"));
// 	test.insert(ft::pair<int,std::string>(9,"trois"));
// 	int count = test.count(19);
// 	std::cout << count;
// }

// {
// 		const int size = 5;
// 	ft::vector<int> vct(size);
// 	ft::vector<int>::iterator it_ = vct.begin();
// 	ft::vector<int>::reverse_iterator it(it_);

// 	for (int i = 0; i < size; ++i)
// 		vct[i] = (i + 1) * 5;
// 	printSize(vct);

// 	std::cout << (it_ == it.base()) << std::endl;
// 	std::cout << (it_ == (it + 3).base()) << std::endl;

// 	std::cout << *(it.base() + 1) << std::endl;
// 	std::cout << *(it - 3) << std::endl;
// 	std::cout << *(it - 3).base() << std::endl;
// 	it -= 3;
// 	std::cout << *it.base() << std::endl;

// 	std::cout << "TEST OFFSET" << std::endl;
// 	std::cout << *(it) << std::endl;
// 	std::cout << *(it).base() << std::endl;
// 	std::cout << *(it - 0) << std::endl;
// 	std::cout << *(it - 0).base() << std::endl;
// 	std::cout << *(it - 1).base() << std::endl;

// }



	// {
	// const int size = 5;
	// ft::vector<int> vct(size);
	// ft::vector<int>::reverse_iterator it = vct.rbegin();
	// ft::vector<int>::const_reverse_iterator ite = vct.rbegin();

	// for (int i = 0; i < size; ++i)
	// 	it[i] = (size - i) * 5;

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
	// }

	// {
	// 	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** swap ***************************";
	// 	std::cout << std::endl;

	// 	ft::map<int, std::string> test;
	// 	test.insert(ft::pair<int,std::string>(2, "deux"));
	// 	test.insert(ft::pair<int,std::string>(5,"cinq"));
	// 	test.insert(ft::pair<int,std::string>(6,"cinq"));
	// 	test.insert(ft::pair<int,std::string>(1,"un"));
	// 	test.insert(ft::pair<int,std::string>(8,"huit"));
	// 	test.insert(ft::pair<int,std::string>(3,"trois"));
	// 	test.insert(ft::pair<int,std::string>(9,"trois"));
	// 	test.insert(ft::pair<int,std::string>(7,"trois"));
	// 	test.insert(ft::pair<int,std::string>(4,"trois"));
	

	// 	ft::map<int, std::string> bigger;
	// 	bigger.insert(ft::pair<int,std::string>(43,"trois"));
	// 	bigger.insert(ft::pair<int,std::string>(41,"un"));
	// 	bigger.insert(ft::pair<int,std::string>(49,"neuf"));
	// 	bigger.insert(ft::pair<int,std::string>(45,"cinq"));
	// 	bigger.insert(ft::pair<int,std::string>(40,"zero"));
	// 	bigger.insert(ft::pair<int,std::string>(46,"zero"));
	// 	bigger.insert(ft::pair<int,std::string>(42,"deux"));
	// 	bigger.insert(ft::pair<int,std::string>(44,"deux"));
	// 	bigger.insert(ft::pair<int,std::string>(47,"sept"));

	// 	ft::map<int, std::string>::iterator it;
	// 	std::cout << "test: ";
	// 	for(it = test.begin();it != test.end(); it++){
	// 		std::cout << it->first << " ";
	// 	}

	// 	std::cout << "\nbigger: ";
	// 	for(it = bigger.begin();it != bigger.end(); it++){
	// 		std::cout << it->first << " ";
	// 	}

	// 	std::cout << "\n\n----------swap --------------\n\n";

	// 	test.swap(bigger);

	// 	std::cout << "test: ";
	// 	for(it = test.begin();it != test.end(); it++){
	// 		std::cout << it->first << " ";
	// 	}

	// 	std::cout << "\nbigger: ";
	// 	for(it = bigger.begin();it != bigger.end(); it++){
	// 		std::cout << it->first << " ";
	// 	}
	// }

	// {
	// 	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** count ***************************";
	// 	std::cout << std::endl;
	// 	ft::map<int, std::string> test;
	// 	test.insert(ft::pair<int,std::string>(2, "deux"));
	// 	test.insert(ft::pair<int,std::string>(5,"cinq"));
	// 	test.insert(ft::pair<int,std::string>(1,"un"));
	// 	test.insert(ft::pair<int,std::string>(8,"huit"));
	// 	test.insert(ft::pair<int,std::string>(3,"trois"));
	// 	test.insert(ft::pair<int,std::string>(19,"trois"));
	// 	test.insert(ft::pair<int,std::string>(34,"trois"));
	// 	test.insert(ft::pair<int,std::string>(21,"trois"));
	// 	test.insert(ft::pair<int,std::string>(9,"trois"));
	// 	int count = test.count(2);
	// 	std::cout << count;

	// }


	// {
	//	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** equal_range ***************************";
	// 	std::cout << std::endl;
	// ft::map<int,int> mymap;

	// 	mymap.insert(ft::pair<int,int>(1, 10));
	// 	mymap.insert(ft::pair<int,int>(2, 20));
	// 	mymap.insert(ft::pair<int,int>(3, 30));
	// 	mymap.insert(ft::pair<int,int>(4, 40));
	// 	mymap.insert(ft::pair<int,int>(5, 50));
	// 	mymap.insert(ft::pair<int,int>(6, 60));


	// 	ft::pair<ft::map<int,int>::iterator,ft::map<int,int>::iterator> ret;
	// 	ret = mymap.equal_range(2);

	// 	std::cout << "lower bound points to: ";
	// 	std::cout << ret.first->first << " => " << ret.first->second << '\n';

	// 	std::cout << "upper bound points to: ";
	// 	std::cout << ret.second->first << " => " << ret.second->second << '\n';

	// 	return 0;

	// }




	// {
	// 	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** upper_bound ***************************";
	// 	std::cout << std::endl;
	// 	ft::map<int, std::string> test;
	// 	test.insert(ft::pair<int,std::string>(2, "deux"));
	// 	test.insert(ft::pair<int,std::string>(5,"cinq"));
	// 	test.insert(ft::pair<int,std::string>(1,"un"));
	// 	test.insert(ft::pair<int,std::string>(8,"huit"));
	// 	test.insert(ft::pair<int,std::string>(3,"trois"));
	// 	test.insert(ft::pair<int,std::string>(19,"trois"));
	// 	test.insert(ft::pair<int,std::string>(34,"trois"));
	// 	test.insert(ft::pair<int,std::string>(21,"trois"));
	// 	test.insert(ft::pair<int,std::string>(9,"trois"));
	// 	ft::map<int, std::string>::iterator it = test.upper_bound(21);
	// 	std::cout << it->first;
	// }
	

	
	// {
	// 	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** lower_bound ***************************";
	// 	std::cout << std::endl;
	// 	ft::map<int, std::string> test;
	// 	test.insert(ft::pair<int,std::string>(2, "deux"));
	// 	test.insert(ft::pair<int,std::string>(5,"cinq"));
	// 	test.insert(ft::pair<int,std::string>(1,"un"));
	// 	test.insert(ft::pair<int,std::string>(8,"huit"));
	// 	test.insert(ft::pair<int,std::string>(3,"trois"));
	// 	test.insert(ft::pair<int,std::string>(19,"trois"));
	// 	test.insert(ft::pair<int,std::string>(34,"trois"));
	// 	test.insert(ft::pair<int,std::string>(21,"trois"));
	// 	test.insert(ft::pair<int,std::string>(9,"trois"));
	// 	ft::map<int, std::string>::iterator it = test.lower_bound(30);
	// 	std::cout << it->first;
	// }



	// {
	// 	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** find ***************************";
	// 	std::cout << std::endl;
	// 	ft::map<int, std::string> test;
	// 	test.insert(ft::pair<int,std::string>(2, "deux"));
	// 	test.insert(ft::pair<int,std::string>(5,"cinq"));
	// 	test.insert(ft::pair<int,std::string>(1,"un"));
	// 	test.insert(ft::pair<int,std::string>(8,"huit"));
	// 	test.insert(ft::pair<int,std::string>(3,"trois"));
	// 	test.insert(ft::pair<int,std::string>(19,"trois"));
	// 	test.insert(ft::pair<int,std::string>(34,"trois"));
	// 	test.insert(ft::pair<int,std::string>(21,"trois"));
	// 	test.insert(ft::pair<int,std::string>(9,"trois"));
	// 	ft::map<int, std::string>::iterator it = test.find(200);
	// 	std::cout << it->first;
	// }




	// {
	// std::cout << std::endl<< std::endl<< std::endl;
	// std::cout << "************************** iterator ************************";
	// std::cout << std::endl;
	// ft::map<int, std::string> test;
	// test.insert(ft::pair<int,std::string>(2,"le deuxieme mini"));
	// // test.insert(ft::pair<int,std::string>(5,"le 2eme plus grand"));
	// ft::map<int, std::string>::iterator it = test.begin();
	// std::cout << it->first;

	// }



	// {
	// std::cout << std::endl<< std::endl<< std::endl;
	// std::cout << "************************** riverse const iterator ************************";
	// std::cout << std::endl;
	// ft::map<int, std::string> test;
	// test.insert(ft::pair<int,std::string>(2,"le deuxieme mini"));
	// test.insert(ft::pair<int,std::string>(5,"le 2eme plus grand"));
	// ft::map<int, std::string>::const_reverse_iterator it = test.rbegin();

	// std::cout << it->first;
	// }




	// {
	// std::cout << std::endl<< std::endl<< std::endl;
	// std::cout << "************************** insert one ************************";
	// std::cout << std::endl;
	// ft::map<int, std::string> test2;
	// test2.insert(ft::pair<int,std::string>(2,"le deuxieme mini"));
	// test2.insert(ft::pair<int,std::string>(33,"le 3eme mini"));
	// test2.insert(ft::pair<int,std::string>(24,"le 4eme "));
	// test2.insert(ft::pair<int,std::string>(76,"le 6eme "));
	// test2.insert(ft::pair<int,std::string>(15,"le 3eme"));
	// test2.insert(ft::pair<int,std::string>(15,"le 5eme"));
	// test2.insert(ft::pair<int,std::string>(53,"le 4eme"));
	// test2.insert(ft::pair<int,std::string>(1,"le 1er"));
	// test2.insert(ft::pair<int,std::string>(4,"le 1er"));
	// ft::map<int, std::string>::iterator it;
	// it = test2.begin();
	// std::cout << it->first << "\n";
	// it++;
	// std::cout << it->first << "\n";
	// it++;
	// std::cout << it->first << "\n";
	// it++;
	// std::cout << it->first << "\n";
	// it++;
	// std::cout << it->first << "\n";
	// }







	
	// red_black_tree<int, int> tree;

	// tree.print_tree(5);
	// std::cout << "\n\n height tree: "<<tree.height();
	// std::cout << "\n\n black node: "<<tree.black_node();
}


// template <typename T>
// void	printSize(ft::vector<T> const &vct, bool print_content = true)
// {
// 	// bool print_content = true;
// 	const size_t size = vct.size();
// 	const size_t capacity = vct.capacity();
// 	const std::string isCapacityOk = (capacity >= size) ? "OK" : "KO";
// 	// Cannot limit capacity's max value because it's implementation dependent

// 	std::cout << "size: " << size << std::endl;
// 	std::cout << "capacity ok or ko : " << isCapacityOk << std::endl;
// 	std::cout << "capacity: " << capacity << std::endl;
// 	std::cout << "max_size: " << vct.max_size() << std::endl;
// 	if (print_content)
// 	{
// 		typename ft::vector<T>::const_iterator it = vct.begin();
// 		typename ft::vector<T>::const_iterator ite = vct.end();
// 		std::cout << std::endl << "Content is:" << std::endl;
// 		for (; it != ite; ++it)
// 			std::cout << "- " << *it << std::endl;
// 	}
// 	std::cout << "###############################################" << std::endl;
// }

// void	is_empty(ft::vector<int> const &vct)
// {
// 	std::cout << "is_empty: " << vct.empty() << std::endl;
// }


// int main(){



// 	const int start_size = 7;
// 	ft::vector<int> vct(start_size, 20);
// 	ft::vector<int> vct2;
// 	ft::vector<int>::iterator it = vct.begin();

// 	// std::vector<int> vct(10);
// 	// std::vector<int> vct2;
// 	// std::vector<int> vct3;


// 	for (int i = 2; i < start_size; ++i)
// 		it[i] = (start_size - i) * 3;
// 	printSize(vct, true);

// 	vct.resize(10, 42);
// 	printSize(vct, true);

// 	// vct.resize(18, 43);
// 	// printSize(vct, true);
// 	// vct.resize(10);
// 	// printSize(vct, true);
// 	// vct.resize(23, 44);
// 	// printSize(vct, true);
// 	// vct.resize(5);
// 	// printSize(vct, true);
// 	// vct.reserve(5);
// 	// vct.reserve(3);
// 	// printSize(vct, true);
// 	// vct.resize(87);
// 	// vct.resize(5);
// 	// printSize(vct, true);

// 	// is_empty(vct2);
// 	// vct2 = vct;
// 	// is_empty(vct2);
// 	// vct.reserve(vct.capacity() + 1);
// 	// printSize(vct, true);
// 	// printSize(vct2, true);

// 	// vct2.resize(0);
// 	// is_empty(vct2);
// 	// printSize(vct2, true);





	
// 	// ft::vector<int> test(5);
// 	// ft::vector<int>::reverse_iterator it = test.rbegin();
// 	// ft::vector<int>::reverse_iterator ite = test.rbegin();
// 	// ft::vector<int>::reverse_iterator ita(it);
// 	// // ft::vector<int>::reverse_iterator ito(ita);
	
// 	// for (size_t i = 0; i < test.size(); ++i)
// 	// 	it[0] = (test.size() - 0) * 5;

// 	// it = it + 5;
// 	// it = 1 + it;
// 	// it = it - 4;
// 	// ft::cout << *(it += 2) << ft::endl;
// 	// ft::cout << *(it -= 1) << ft::endl;

// 	// *(it -= 2) = 42;
// 	// *(it += 2) = 21;

// 	// ft::cout << "const_ite +=/-=: " << *(ite += 2) << " | " << *(ite -= 2) << ft::endl;

// 	// ft::cout << "(it == const_it): " << (ite == it) << ft::endl;
// 	// ft::cout << "(const_ite - it): " << (ite - it) << ft::endl;
// 	// ft::cout << "(ite + 3 == it): " << (ite + 3 == it) << ft::endl;

	
	
// 	// ft::cout << *(it += 2) << ft::endl;
// 	// ft::cout << *(it -= 1) << ft::endl;
// 	// ft::vector<int> test;
// 	// test.push_back(1);
// 	// test.push_back(11);
// 	// test.push_back(111);
// 	// test.push_back(1111);
// 	// ft::vector<int> test2;
// 	// test2.push_back(0);
// 	// test2.push_back(1);
// 	// test2.push_back(2);
// 	// test2.push_back(3);
// 	// test2.insert(test2.begin()+1, test.begin(), test.end());
// 	// // test.push_back(4);
// 	// // // test.push_back(11111);
// 	// // // test.push_back(111111);
// 	// // // ft::stack<int> test3;
// 	// // // test3.push(4);
// 	// // // test3.push(3);
// 	// // // test3.push(2);
// 	// // // test3.push(1);
// 	// // // ft::vector<int> test2 = test;
// 	// // // test.resize(2);
// 	// // test.insert(test.begin()+1, test2.begin(), test2.end());
// 	// ft::cout << "test2: \n";
// 	// for(ft::vector<int>::iterator its = test2.begin(); its < test2.end(); its++)
// 	// 	ft::cout<< *its <<ft::endl;
// 	// ft::cout<<ft::endl;
// 	// // ft::cout << test3.top()<<ft::endl;
// 	// // ft::cout << test2.capacity() << ft::endl;
// 	// ft::cout<<ft::endl;

	// return (0);
// }
