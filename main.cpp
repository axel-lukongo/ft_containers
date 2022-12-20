/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/20 17:24:07 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

int main(){
	// ft::vector<int> test;
	// ft::vector<int>::iterator it;
	// test.ft_push_back(3);
	// test.ft_push_back(2);
	// test.ft_push_back(1);
	// test.ft_pop_back();
	// test.ft_pop_back();
	// it = test.begin();
	
	// for (ft::vector<int>::iterator ite = test.begin(); ite != test.end(); ite++){
	// std::cout << *ite <<std::endl<<std::endl;
		
	// }
	// std::cout << std::endl;
	// std::cout << std::endl;
	// std::cout << *it++ <<std::endl<<std::endl;
	// std::cout << *it++ <<std::endl<<std::endl;
	// std::cout << *it <<std::endl<<std::endl;

	// std::cout << "size: "<<test.size() << std::endl;
	// std::cout << "capacity: "<<test.capacity() << std::endl;
	// std::cout << "size: "<<test.size() << std::endl;
	// std::cout << "capacity: "<<test.capacity() << std::endl;

	ft::vector<int> test;
	ft::vector<int>::iterator it;
	test.ft_push_back(3);
	test.ft_push_back(2);
	test.ft_push_back(1);
	it = test.begin();
	it++;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;

	test.insert(it, 5);

	for(ft::vector<int>::iterator its = test.begin(); its < test.end(); its++)
		std::cout<< *its << std::endl;

	std::cout<<std::endl;

	test.insert(it, 9);
	// test.insert(it, 5);
	// test.insert(it, 5);
	for(ft::vector<int>::iterator its = test.begin(); its < test.end(); its++)
		std::cout<< *its << std::endl;
	std::cout<<std::endl;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	return (0);
}
