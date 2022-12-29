/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/29 21:35:47 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.hpp"

int main(){
	ft::vector<int> test(5);
	ft::vector<int>::reverse_iterator it = test.rbegin();
	for (size_t i = 0; i < test.size(); ++i)
		it[i] = (test.size() - i) * 5;

	it = it + 5;
	it = 1 + it;
	it = it - 4;
	
	
	// std::cout << *(it += 2) << std::endl;
	// std::cout << *(it -= 1) << std::endl;
	// test.push_back(1);
	// test.push_back(11);
	// test.push_back(111);
	// test.push_back(1111);
	// ft::vector<int> test2 = test;
	// test.push_back(0);
	// test.push_back(1);
	// test.push_back(2);
	// test.push_back(3);
	// test.push_back(4);
	// // test.push_back(11111);
	// // test.push_back(111111);
	// // ft::stack<int> test3;
	// // test3.push(4);
	// // test3.push(3);
	// // test3.push(2);
	// // test3.push(1);
	// // ft::vector<int> test2 = test;
	// // test.resize(2);
	// test.insert(test.begin()+1, test2.begin(), test2.end());
	// std::cout << "test2: \n";
	// for(ft::vector<int>::iterator its = test2.begin(); its < test2.end(); its++)
	// 	std::cout<< *its <<std::endl;
	// std::cout<<std::endl;
	// // std::cout << test3.top()<<std::endl;
	// // std::cout << test2.capacity() << std::endl;
	// std::cout<<std::endl;

	return (0);
}
