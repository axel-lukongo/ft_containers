/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2023/01/08 02:11:11 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.hpp"
#include <iostream>
#include <vector>
#include "red_black_tree.hpp"

int main(){
	red_black_tree<int, int> tree;
	tree.add(5, 5);
	tree.add(3, 3);
	tree.add(6, 6);
	// tree.add(1, 1);
	// tree.add(2, 2);
	// tree.add(13, 13);
	// tree.add(4, 4);
	// tree.add(7, 7);
	// tree.add(73, 73);
	// tree.add(15, 15);
	// tree.add(16, 16);
	tree.print_tree(5);
	std::cout << "\n\n height tree: "<<tree.height();
	std::cout << "\n\n black node: "<<tree.black_node();
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

// 	return (0);
// }
