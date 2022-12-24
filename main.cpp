/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/24 18:36:57 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

int main(){
	// ft::vector<std::string> test;
	// ft::vector<std::string>::iterator it;
	// test.ft_push_back(3);
	// test.ft_push_back(2);
	// test.ft_push_back(1);
	// test.ft_pop_back();
	// test.ft_pop_back();
	// it = test.begin();
	
	// for (ft::vector<std::string>::iterator ite = test.begin(); ite != test.end(); ite++){
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

	ft::vector<std::string> test;
	test.ft_push_back("ici ");
	test.ft_push_back("je ");
	test.ft_push_back("test ");
	test.ft_push_back("un ");
	test.ft_push_back("truc ");
	test.ft_push_back("ici");
	// test.ft_push_back(4);
	// test.ft_push_back(5);
	ft::vector<std::string>::iterator it = test.begin();
	ft::vector<std::string> test2;
	test2.ft_push_back("ls bas");
	test2.ft_push_back("ls bas");
	test2.ft_push_back("ls bas");
	test2.ft_push_back("ls bas");
	test2.ft_push_back("ls bas");
	test2.ft_push_back("ls bas");
	test2.ft_push_back("ls bas");
	test2.ft_push_back("ls bas");
	test2.ft_push_back("ls bas");

	// it = test.begin();
	// // it++;
	std::cout << "size: "<< test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	std::cout<<std::endl<<std::endl;

	// std::cout<<std::endl<<std::endl;
	// std::cout<<std::endl<<std::endl;
	std::cout<<std::endl<<std::endl;
	// std::cout << "----------------: "<<*(test2.begin() + 4) << std::endl;
	// test.insert(it, test2.begin(), test2.end());
	std::cout << "test: ";
	for(ft::vector<std::string>::iterator its = test.begin(); its < test.end(); its++)
		std::cout<< *its << " |";
	
	std::cout<<std::endl<<std::endl;
	
	std::cout << "test2: ";
	for(ft::vector<std::string>::iterator its = test2.begin(); its < test2.end(); its++)
		std::cout<< *its << " |";
	
	test.erase(it+2, it+6);
	// test.erase(it);

	std::cout<<std::endl<<std::endl;
	// std::cout<<std::endl<<std::endl;
	// std::cout<<std::endl<<std::endl;

	std::cout << "test: ";
	for(ft::vector<std::string>::iterator its = test.begin(); its < test.end(); its++)
		std::cout<< *its << " |";
	
	std::cout<<std::endl<<std::endl;
	
	std::cout << "test2: ";
	for(ft::vector<std::string>::iterator its = test2.begin(); its < test2.end(); its++)
		std::cout<< *its << " |";

	// test.insert(it, 5);
	// test.insert(it, 5);
	// for(ft::vector<std::string>::iterator its = test.begin(); its < test.end(); its++)
	// 	std::cout<< *its << std::endl;
	std::cout<<std::endl<<std::endl;
	std::cout << "size: "<<test.size() << std::endl;
	std::cout << "capacity: "<<test.capacity() << std::endl;
	return (0);
}
