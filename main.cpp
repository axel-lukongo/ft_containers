/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/15 16:40:13 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

int main(){
	ft_vector<int> test;
	test.ft_push_back(3);
	test.ft_push_back(2);
	test.ft_push_back(1);
	ft_vector<int>::Iterator it;
	it = test.begin();
	// test.begin();
	// std::cout <<"-----------" << *it <<std::endl;
	// std::cout << test[0] << std::endl;
}