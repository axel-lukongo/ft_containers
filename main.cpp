/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/28 23:22:09 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.hpp"

int main(){
	ft::vector<int> test;
	test.push_back(1);
	test.push_back(11);
	test.push_back(111);
	test.push_back(1111);
	test.push_back(11111);
	test.push_back(111111);
	// ft::stack<int> test3;
	ft::vector<int> test2 = test;

	std::cout << "test2: \n";
	for(ft::vector<int>::iterator its = test2.begin(); its < test2.end(); its++)
		std::cout<< *its <<std::endl;
	std::cout<<std::endl;

	return (0);
}
