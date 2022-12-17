/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/18 00:00:14 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

int main(){
	ft::vector<int> test;
	// ft::vector<int>::iterator it;
	// test.ft_push_back(3);
	// test.ft_push_back(2);
	// test.ft_push_back(1);
	// it = test.begin();
	// std::cout << *it <<std::endl;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	test.reserve(3);
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
}