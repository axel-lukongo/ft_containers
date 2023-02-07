/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2023/02/07 14:03:56 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stack.hpp"
#include <iostream>
// #include <vector>
#include "vector.hpp"
#include"map.hpp"
// #include "print_tree.hpp"
// #include<map>
// #include"containers_test/srcs/map/common.hpp"
#include <vector>
#include <list>
#include "set.hpp"
#include <unistd.h>


// #define _pair ft::pair

// template <typename T>
// std::string	printPair(const T &iterator, bool nl = true, std::ostream &o = std::cout)
// {
// 	o << "key: " << iterator->first << " | value: " << iterator->second;
// 	if (nl)
// 		o << std::endl;
// 	return ("");
// }

// template <typename T_MAP>
// void	printSize(T_MAP const &mp, bool print_content = 1)
// {
// 	std::cout << "size: " << mp.size() << std::endl;
// 	std::cout << "max_size: " << mp.max_size() << std::endl;
// 	if (print_content)
// 	{
// 		typename T_MAP::const_iterator it = mp.begin(), ite = mp.end();
// 		std::cout << std::endl << "Content is:" << std::endl;
// 		for (; it != ite; ++it)
// 			std::cout << "- " << printPair(it, false) << std::endl;
// 	}
// 	std::cout << "###############################################" << std::endl;
// }

// template <typename T1, typename T2>
// void	printReverse(ft::map<T1, T2> &mp)
// {
// 	typename ft::map<T1, T2>::iterator it = mp.end(), ite = mp.begin();

// 	std::cout << "printReverse:" << std::endl;
// 	while (it != ite) {
// 		it--;
// 		std::cout << "-> " << printPair(it, false) << std::endl;
// 	}
// 	std::cout << "_______________________________________________" << std::endl;
// }

// #define T1 char
// #define T2 int
// typedef _pair<const T1, T2> T3;
// // static int iter = 0;

// template <typename MAP, typename U>
// void	ft_insert(MAP &mp, U param)
// {
// 	_pair<iterator, bool> tmp;

// 	std::cout << "\t-- [" << iter++ << "] --" << std::endl;
// 	tmp = mp.insert(param);
// 	std::cout << "insert return: " << printPair(tmp.first);
// 	std::cout << "Created new node: " << tmp.second << std::endl;
// 	printSize(mp);
// }

// template <typename MAP, typename U, typename V>
// void	ft_insert(MAP &mp, U param, V param2)
// {
// 	iterator tmp;

// 	std::cout << "\t-- [" << iter++ << "] --" << std::endl;
// 	tmp = mp.insert(param, param2);
// 	std::cout << "insert return: " << printPair(tmp);
// 	printSize(mp);
// }

// #define T1 int
// #define T2 std::string

// struct ft_more {
// 	bool	operator()(const T1 &first, const T1 &second) const {
// 		return (first > second);
// 	}
// };

// typedef ft::map<T1, T2, ft_more> ft_mp;
// typedef ft::map<T1, T2, ft_more>::iterator ft_mp_it;

// void check_correct(ft::vector<int> test, std::vector<int> reel){
// 	ft::vector<int>::iterator its = test.begin();
// 	std::vector<int>::iterator itr = reel.begin();
// 	size_t i = 0;
// 	if(test.empty() == reel.empty())
// 		std::cout << "✅";
// 	else
// 		std::cout << "❌";
// 	while(i < test.size()){
// 		if (*its != *itr){
// 			// std::cout << *its << " | "<< *itr << "\n";
// 			std::cout << "❌";
// 			break;
// 		}
// 		its++;
// 		itr++;
// 		i++;
// 	}
// 	if(test.capacity() == reel.capacity() && test.size() == reel.size())
// 		std::cout << "✅";
// 	else
// 		std::cout << "❌";
// 	// std::cout<<std::endl;
// }


// int		main(void)
// {

// {
// 	ft::map<char,int> mymap;

//   mymap['a']=10;
//   mymap['b']=20;
//   mymap['c']=30;

//   while (!mymap.empty())
//   {
//     std::cout << mymap.begin()->first << " => " << mymap.begin()->second << '\n';
//     mymap.erase(mymap.begin());
//   }

//   return 0;
// }

// {
// 		std::cout << std::endl<< std::endl<< std::endl;
// 		std::cout << "************************** copy construct ***************************";
// 		std::cout << std::endl;
// 	std::list<std::string> lst;
// 	unsigned int lst_size = 10;
// 	for (unsigned int i = 0; i < lst_size; ++i)
// 		lst.push_back(std::string((lst_size - i), i + 65));
// 	ft::set<std::string> st(lst.begin(), lst.end());
// 	// printSize(st);
// 	st.print_tree();
// 	st.erase(++st.begin());

// 	st.erase(st.begin());
// 	st.erase(--st.end());

// 	st.erase(st.begin(), ++(++(++st.begin())));
// 	st.erase(--(--(--st.end())), --st.end());
// 	st.print_tree();

// 	st.insert("Hello");
// 	st.print_tree();
// 	st.insert("Hi there");
// 	// printSize(st);
// 	st.print_tree();

// 	st.erase(--(--(--st.end())), st.end());
// 	st.print_tree();

// 	st.insert("ONE");
// 	st.print_tree();
	
// 	st.insert("TWO");
// 	st.print_tree();
	
// 	st.insert("THREE");
// 	st.print_tree();
	
// 	st.insert("FOUR");
// 	st.print_tree();
	
// 	// printSize(st);
// 	st.erase(st.begin(), st.end());
// 	st.print_tree();

// 	return (0);
// }

// {
// 	ft::set<int> const st;
// 	ft::set<int>::iterator it = st.begin(); // <-- no error, actually ! set allows for const_iterator => iterator conversion

// 	(void)it;
// 	return (0);

// }

// {
// 	ft::set<std::string> st, st2;

// 	st.insert("lol");
// 	st.print_tree();

// 	st.insert("mdr");
// 	st.print_tree();

// 	st.insert("mdr");
// 	st.print_tree();

// 	st.insert("funny");
// 	st.print_tree();

// 	st.insert("bunny");
// 	st.print_tree();

// 	st.insert("fizz");
// 	st.print_tree();

// 	st.insert("buzz");
// 	st.print_tree();

// 	st.insert(st.begin(),"mdr");
// 	st.print_tree();

// 	st2.insert(st2.begin(), "beauty");
// 	st2.print_tree();

// 	st2.insert(st2.end(), "Hello");
// 	st2.print_tree();
	
// 	st2.insert( "World");
// 	st2.print_tree();

// 	return (0);
// }


// {
// 		std::cout << std::endl<< std::endl<< std::endl;
// 		std::cout << "************************** copy construct ***************************";
// 		std::cout << std::endl;

// 		ft::set<int> test;
// 		test.insert(5);
// 		test.insert(3);
// 		test.insert(1);
// 		test.insert(7);
// 		test.insert(8);
// 		test.insert(4);
// 		test.insert(7);
// 		ft::set<int> test2(test);
		
// 		ft::set<int>::iterator it = test.upper_bound(7);
// 		std::cout << *it << "\n";
// }

// {
// 		std::cout << std::endl<< std::endl<< std::endl;
// 		std::cout << "************************** upper bound ***************************";
// 		std::cout << std::endl;

// 		ft::set<int> test;
// 		test.insert(5);
// 		test.insert(3);
// 		test.insert(1);
// 		test.insert(7);
// 		test.insert(8);
// 		test.insert(4);
// 		test.insert(7);
// 		ft::set<int>::iterator it = test.upper_bound(7);
// 		std::cout << *it << "\n";
// }



// {
// 		std::cout << std::endl<< std::endl<< std::endl;
// 		std::cout << "************************** swap ***************************";
// 		std::cout << std::endl;

// 		ft::set<int> test;
// 		test.insert(5);
// 		test.insert(3);
// 		test.insert(1);
// 		test.insert(7);
// 		test.insert(2);
// 		test.insert(8);
// 		test.insert(4);
// 		test.insert(7);
// 		ft::set<int> test2;
// 		test2.insert(144);
// 		test2.insert(233);
// 		test2.insert(100);
// 		test2.insert(1908);
// 		ft::set<int>::iterator it = test.begin();
// 		std::cout << "\n ------test-----\n";
// 		for(;it != test.end(); it++)
// 			std::cout << *it << "\n";
// 		std::cout << "\n ------test2-----\n";
// 		for(it = test2.begin();it != test2.end(); it++)
// 			std::cout << *it << "\n";

// 		std::cout << "\n--------------swap------------\n\n";
// 		test.swap(test2);

// 		std::cout << "\n ------test-----\n";
// 		for(it = test.begin();it != test.end(); it++)
// 			std::cout << *it << "\n";

// 		std::cout << "\n ------test2-----\n";
// 		for(it = test2.begin();it != test2.end(); it++)
// 			std::cout << *it << "\n";
// }

// {
// 		std::cout << std::endl<< std::endl<< std::endl;
// 		std::cout << "************************** erase ***************************";
// 		std::cout << std::endl;

// 		ft::set<int> test;
// 		test.insert(5);
// 		test.insert(3);
// 		test.insert(1);
// 		test.insert(7);
// 		test.insert(2);
// 		test.insert(8);
// 		test.insert(4);
// 		test.insert(7);
// 		ft::set<int>::iterator it = test.begin();

// 		for(;it != test.end(); it++)
// 			std::cout << *it << "\n";

// 		std::cout << "\n--------------erase------------\n\n";
// 		test.erase(5);
// 		for(it = test.begin();it != test.end(); it++)
// 			std::cout << *it << "\n";
// }

	
	// {
	// 	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** insert ***************************";
	// 	std::cout << std::endl;

	// ft::set<std::string> st, st2;

	// st.insert("lol");
	// st.print_tree();
	
	// st.insert("mdr");
	// st.print_tree();

	// st.insert("mdr");
	// st.print_tree();

	// st.insert("funny");
	// st.print_tree();

	// st.insert("bunny");
	// st.print_tree();

	// st.insert("fizz");
	// st.print_tree();

	// st.insert("buzz");
	// st.print_tree();

	// st.insert(st.begin(), "fuzzy");
	// st.print_tree();

	// st2.insert( st2.begin(), "beauty");
	// st.print_tree();

	// st2.insert( st2.end(), "Hello");
	// st.print_tree();

	// std::cout << "\n\n-------------------------------------------------\n\n";
	// st2.insert( st2.end(), "World");
	// st.print_tree();

	// return (0);
	// }







// {
// 		ft::map<int, std::string> test;
// 		test[42] = "fgzgxfn";
// 		test[25] = "funny";
// 		test[80] = "hey";
// 		test[12] = "no";
// 		test[27] = "bee";
// 		test[90] = "8";
// 		printSize(test);
// 		// ft::map<int, std::string> test2(test);
// 		// ft::map<int, std::string>::const_reverse_iterator it = test2.rbegin();
// 		// for(;it != test2.rend(); it++)
// 			// std::cout << it->first << std::endl;
// 		test.the_printer();
		
// 	}
	// {
	// 		std::list<T3> lst;

	// unsigned int lst_size = 7;
	// for (unsigned int i = 0; i < lst_size; ++i)
	// 	lst.push_back(T3('a' + i, lst_size - i));
	// ft::map<T1, T2> foo(lst.begin(), lst.end());

	// lst.clear(); lst_size = 4;
	// for (unsigned int i = 0; i < lst_size; ++i)
	// 	lst.push_back(T3('z' - i, i * 5));
	// ft::map<T1, T2> bar(lst.begin(), lst.end());

	// ft::map<T1, T2>::const_iterator it_foo = foo.begin();
	// ft::map<T1, T2>::const_iterator it_bar = bar.begin();

	// std::cout << "BEFORE SWAP" << std::endl;

	// std::cout << "foo contains:" << std::endl;
	// printSize(foo);
	// std::cout << "bar contains:" << std::endl;
	// printSize(bar);

	// foo.swap(bar);

	// std::cout << "AFTER SWAP" << std::endl;

	// std::cout << "foo contains:" << std::endl;
	// printSize(foo);
	// std::cout << "bar contains:" << std::endl;
	// printSize(bar);

	// std::cout << "Iterator validity:" << std::endl;
	// std::cout << (it_foo == bar.begin()) << std::endl;
	// std::cout << (it_bar == foo.begin()) << std::endl;

	// return (0);
	// }
	// ft::map<T1, T2> mp, mp2;

	// ft_insert(mp, T3(42, "lol"));
	// //mp.the_printer();
	// ft_insert(mp, T3(42, "mdr"));
	// //mp.the_printer();
	// ft_insert(mp, T3(50, "mdr"));
	// //mp.the_printer();
	// ft_insert(mp, T3(35, "funny"));
	// //mp.the_printer();
	// ft_insert(mp, T3(45, "bunny"));
	// //mp.the_printer();
	// ft_insert(mp, T3(21, "fizz"));
	// //mp.the_printer();
	// ft_insert(mp, T3(38, "buzz"));
	// //mp.the_printer();
	// ft_insert(mp, mp.begin(), T3(55, "fuzzy"));
	// //mp.the_printer();
	// ft_insert(mp2, mp2.begin(), T3(1337, "beauty"));
	// std::cout << "--------------------mp2--------------------\n\n";
	// //mp2.the_printer();
	// ft_insert(mp2, mp2.end(), T3(1000, "Hello"));
	// //mp2.the_printer();
	// ft_insert(mp2, mp2.end(), T3(1500, "World"));
	// //mp2.the_printer();
	// return (0);


// {
// 		std::cout << std::endl<< std::endl<< std::endl;
// 		std::cout << "************************** is empty ***************************";
// 		std::cout << std::endl;
// 	std::list<T3> lst;
// 	unsigned int lst_size = 7;
// 	for (unsigned int i = 0; i < lst_size; ++i)
// 		lst.push_back(T3('a' + i, lst_size - i));

// 	ft::map<T1, T2> mp(lst.begin(), lst.end()), mp2;
// 	ft::map<T1, T2>::iterator it;

// 	lst.clear();
// 	is_empty(mp);
// 	printSize(mp);

// 	is_empty(mp2);
// 	mp2 = mp;
// 	is_empty(mp2);

// 	it = mp.begin();
// 	for (unsigned long int i = 3; i < mp.size(); ++i)
// 		it++->second = i * 7;

// 	printSize(mp);
// 	printSize(mp2);

// 	mp2.clear();
// 	is_empty(mp2);
// 	printSize(mp2);
// 	return (0);
// }

// 	std::list<T3> lst;
// 	unsigned int lst_size = 7;
// 	for (unsigned int i = 0; i < lst_size; ++i)
// 		lst.push_back(T3(lst_size - i, i));

// 	ft::map<T1, T2> mp(lst.begin(), lst.end());
// 	ft::map<T1, T2>::iterator it = mp.begin(), ite = mp.end();

// 	ft::map<T1, T2> mp_range(it, --(--ite));
// 	for (int i = 0; it != ite; ++it)
// 		it->second = ++i * 5;

// 	it = mp.begin(); ite = --(--mp.end());
// 	ft::map<T1, T2> mp_copy(mp);
// 	for (int i = 0; it != ite; ++it)
// 		it->second = ++i * 7;

// 	std::cout << "\t-- PART ONE --" << std::endl;

// 	std::cout << "\nmp\n";
// 	printSize(mp);
// 	// mp.the_printer();

// 	std::cout << "\nmp_range\n";
// 	printSize(mp_range);
// 	// mp_range.the_printer();

// 	std::cout << "\nmp_copy\n";
// 	printSize(mp_copy);
// 	// mp_copy.the_printer();

// 	mp = mp_copy;
// 	mp_copy = mp_range;
// 	mp_range.clear();
// // std::cout << "--------------------------------------------------------------------\n";

// 	std::cout << "\t-- PART TWO --" << std::endl;
// 	printSize(mp);
// 	printSize(mp_range);
// 	printSize(mp_copy);
// {
// 	ft::vector<int> test(5);
// 	ft::vector<int>::iterator it = test.begin();
// 	// ft::vector<int>::iterator ite = test.begin();
// 	std::cout << it;
// }

	

// {
// 	std::list<T3> lst;
// 	unsigned int lst_size = 10;
// 	for (unsigned int i = 0; i < lst_size; ++i)
// 		lst.push_back(T3(i, std::string((lst_size - i), i + 65)));
// 	ft::map<T1, T2> mp(lst.begin(), lst.end());
// 	printSize(mp);
// }

// {
// 	std::cout << std::endl<< std::endl<< std::endl;
// 	std::cout << "************************** constructor range ***************************";
// 	std::cout << std::endl;
	
// 	ft::map<int, std::string> test;
// 	test[1] = "un";
// 	test[2] = "deux";
// 	test[3] = "trois";
// 	test[4] = "quatre";
// 	test[5] = "cinq";
// 	test[6] = "six";
// 	test[7] = "sept";
// 	test[8] = "huit";
// 	test[9] = "neuf";
// 	test[10] = "dix";
	
// 	ft::map<int, std::string> test2(test.begin(), test.end());
// 	ft::map<int, std::string>::iterator it = test2.begin();
// 	for (;it != test2.end(); it++)
// 		std::cout << it->first << "  |  " << it->second << std::endl;
	

// }


// {
// 	std::cout << std::endl<< std::endl<< std::endl;
// 	std::cout << "************************** operator[] ***************************";
// 	std::cout << std::endl;
// 	//my operator wasn't work because my insert doesn't return the correct pair
// 	ft::map<int, std::string> test;
// 	test[1] = "un";
// 	test[2] = "deux";
// 	test[3] = "trois";
// 	test[4] = "quatre";
// 	test[5] = "cinq";
// 	test[6] = "six";
// 	test[7] = "sept";
// 	test[8] = "huit";
// 	test[9] = "neuf";
// 	test[10] = "dix";
// 	ft::map<int, std::string>::iterator it = test.begin();
// 	for(;it != test.end(); it++)
// 		std::cout << it->second << std::endl;
// }


// {
// 	std::cout << std::endl<< std::endl<< std::endl;
// 	std::cout << "************************** insert ***************************";
// 	std::cout << std::endl;
// 	ft::map<int, std::string> test;
// 	test.insert(ft::pair<int,std::string>(2, "deux"));
// 	test.insert(ft::pair<int,std::string>(5,"cinq"));
// 	test.insert(ft::pair<int,std::string>(1,"un"));
// 	test.insert(ft::pair<int,std::string>(8,"huit"));
// 	test.insert(ft::pair<int,std::string>(3,"trois"));
// 	test.insert(ft::pair<int,std::string>(4,"trois"));
// 	test.insert(ft::pair<int,std::string>(19,"trois"));
// 	test.insert(ft::pair<int,std::string>(34,"trois"));
// 	test.insert(ft::pair<int,std::string>(21,"trois"));
// 	test.insert(ft::pair<int,std::string>(51,"trois"));
// 	test.insert(ft::pair<int,std::string>(61,"trois"));
// 	test.insert(ft::pair<int,std::string>(91,"trois"));
// 	test.insert(ft::pair<int,std::string>(81,"trois"));
// 	test.insert(ft::pair<int,std::string>(161,"trois"));
// 	test.insert(ft::pair<int,std::string>(61,"trois"));
// 	test.insert(ft::pair<int,std::string>(32,"trois"));
// 	test.insert(ft::pair<int,std::string>(101,"trois"));
// 	test.insert(ft::pair<int,std::string>(71,"trois"));
// 	test.insert(ft::pair<int,std::string>(7,"trois"));
// 	test.insert(ft::pair<int,std::string>(9,"trois"));
	
// 	ft::map<int, std::string>::iterator it = test.begin();
// 	ft::map<int, std::string>::iterator ite = test.end();
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	test.insert(ite, ft::pair<int,std::string>(129,"trois"));

// 	ft::map<int, std::string> test2;
// 	test2.insert(it, ite);
	
// }



// {
// 	std::cout << std::endl<< std::endl<< std::endl;
// 	std::cout << "************************** erase ***************************";
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
// 	test.insert(ft::pair<int,std::string>(51,"trois"));
// 	test.insert(ft::pair<int,std::string>(61,"trois"));
// 	test.insert(ft::pair<int,std::string>(91,"trois"));
// 	test.insert(ft::pair<int,std::string>(81,"trois"));
// 	test.insert(ft::pair<int,std::string>(161,"trois"));
// 	test.insert(ft::pair<int,std::string>(61,"trois"));
// 	test.insert(ft::pair<int,std::string>(32,"trois"));
// 	test.insert(ft::pair<int,std::string>(101,"trois"));
// 	test.insert(ft::pair<int,std::string>(71,"trois"));
// 	test.insert(ft::pair<int,std::string>(7,"trois"));
// 	test.insert(ft::pair<int,std::string>(9,"trois"));
// 	ft::map<int, std::string>::iterator it = test.begin();
// 	ft::map<int, std::string>::iterator ite = test.end();
// 	// ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	ite--;
// 	std::cout << ite->first << "  ------------\n";
// 	test.erase(it, ite);
// 	test.erase(21);
	
// 	// std::cout << "erase: " << test.erase(1) << std::endl;
// 	// std::cout << "erase: " << test.erase(81) << std::endl;
// 	// std::cout << "erase: " << test.erase(1) << std::endl;
// 	// std::cout << "erase: " << test.erase(2) << std::endl;
// 	// std::cout << "erase: " << test.erase(7) << std::endl;
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




















// std::cout << std::endl<< std::endl<< std::endl;
// std::cout << "************************** vector ***************************";
// std::cout << std::endl;


// {

// 	const int start_size = 7;
// 	ft::vector<int> vct(start_size, 20);
// 	ft::vector<int> vct2;
// 	ft::vector<int>::iterator it = vct.begin();

// 	std::vector<int> reel(start_size, 20);
// 	std::vector<int> reel2;
// 	std::vector<int>::iterator itr = reel.begin();

// 	std::cout << "empty: ";
// 	check_correct(vct, reel);

// 	for (int i = 2; i < start_size; ++i){
// 		it[i] = (start_size - i) * 3;
// 		itr[i] = (start_size - i) * 3;
		
// 	}
// 	// //printSize(vct, true);

// 	vct.resize(10, 42);
// 	reel.resize(10, 42);
// 	check_correct(vct, reel);
// 	// //printSize(vct, true);

// 	vct.resize(18, 43);
// 	reel.resize(18, 43);
// 	check_correct(vct, reel);
// 	// //printSize(vct, true);
	
// 	vct.resize(10);
// 	reel.resize(10);
// 	check_correct(vct, reel);
// 	// //printSize(vct, true);
	
// 	vct.resize(23, 44);
// 	reel.resize(23, 44);
// 	check_correct(vct, reel);
// 	// //printSize(vct, true);
	
// 	vct.resize(5);
// 	reel.resize(5);
// 	check_correct(vct, reel);
// 	// //printSize(vct, true);
	
// 	vct.reserve(5);
// 	reel.reserve(5);
// 	vct.reserve(3);
// 	reel.reserve(3);
// 	check_correct(vct, reel);


// 	vct.resize(87);
// 	reel.resize(87);
// 	vct.resize(5);
// 	reel.resize(5);
// 	check_correct(vct, reel);


// 	vct2 = vct;
// 	reel2 = reel;
// 	check_correct(vct, reel);
	
// 	vct.reserve(vct.capacity() + 1);
// 	check_correct(vct, reel);



// 	vct2.resize(0);
// 	check_correct(vct, reel);
// 	std::cout << std::endl;
// }


// 	{
// 	std::cout << "copy construct/ riverse_it: ";
// 	ft::vector<int> test(5);
// 	ft::vector<int>::reverse_iterator it = test.rbegin();
// 	ft::vector<int>::reverse_iterator ita(it);

	
// 	std::vector<int> reel(5);
// 	std::vector<int>::reverse_iterator itr = reel.rbegin();
// 	std::vector<int>::reverse_iterator cpy(itr);
// 	check_correct(test, reel);
	
// 	for (size_t i = 0; i < test.size(); ++i){
// 		it[0] = (test.size() - 0) * 5;
// 		itr[0] = (reel.size() - 0) * 5;
		
// 	}

// 	it = it + 5;
// 	itr = itr + 5;
	
// 	it = 1 + it;
// 	itr = 1 + itr;
	
// 	it = it - 4;
// 	itr = itr - 4;

// 	*(it -= 2) = 42;
// 	*(itr -= 2) = 42;
	
// 	*(it += 2) = 21;
// 	*(itr += 2) = 21;

// 	check_correct(test, reel);
// 	std::cout<<std::endl;

// 	//-------------------------------------iterator-------------------------------------/
// 	std::cout << "iterators: ";


// 	check_correct(test, reel);
// 	std::cout<<std::endl;
// 	usleep(500000);
// 	}



// 	{
// 		std::cout<<"insert/push_back: ";
// 		ft::vector<int> test;
// 		test.push_back(1);
// 		test.push_back(11);
// 		test.push_back(111);
// 		test.push_back(1111);
// 		ft::vector<int> test2;
// 		test2.push_back(0);
// 		test2.push_back(1);
// 		test2.push_back(2);
// 		test2.push_back(3);
// 		test2.insert(test2.begin()+1, test.begin(), test.end());
		

// 		std::vector<int> reel;
// 		reel.push_back(1);
// 		reel.push_back(11);
// 		reel.push_back(111);
// 		reel.push_back(1111);
// 		std::vector<int> reel2;
// 		reel2.push_back(0);
// 		reel2.push_back(1);
// 		reel2.push_back(2);
// 		reel2.push_back(3);
// 		reel2.insert(reel2.begin()+1, reel.begin(), reel.end());
// 		check_correct(test, reel);
// 		check_correct(test2, reel2);
	
// 		std::cout<<std::endl;
// 	}
// 	return (0);
// }

























#ifndef STD
# define NAMESPACE ft
#else
# define NAMESPACE std
#endif

using namespace NAMESPACE;

// int main()
// {
// 	vector<int>			test(3, 3);

// 	std::cout << "self assignation test\n";
// 	vector<vector<int> >	self_assign;
// 	vector<vector<int> >	*ptr = &self_assign;
// 	vector<vector<int> >	*ptr2 = &self_assign;

// 	self_assign.assign(4, test);
// 	*ptr = *ptr2;

// 	std::cout << std::boolalpha << (*ptr == *ptr2) << '\n';
// //	self_assign = self_assign; //compiler doesn't like it!



// 	vector<vector<int> > JOHN;
// 	vector<vector<int> > BOB(5, test);
// 	std::cout << "BOB(5, test(test, 5)) : \n";
// 	for (size_t i = 0; i < BOB.size(); i++)
// 	{
// 		for (size_t j = 0; j < BOB[i].size(); j++)
// 			std::cout << BOB[i][j] << ' ';
// 		std::cout << '\n';
// 	}
// 	vector<vector<int> > MIKE(BOB);

// 	// CTORs
// 	std::cout << "\nCTORS\n";
// 	std::cout << "Empty is empty ? " << std::boolalpha << JOHN.empty() << '\n';
// 	std::cout << "BOB is empty? " << BOB.empty() << '\n';

// 	std::cout << "Size of JOHN " << JOHN.size() << std::endl;
// 	std::cout << "Size of BOB " << BOB.size() << std::endl;
// 	std::cout << "Size of MIKE " << MIKE.size() << std::endl;

// 	// RESIZE
// 	size_t	bob_resize = 2;
// 	std::cout << "\nRESIZE\n";
// 	BOB.resize(bob_resize);
// 	std::cout << "Size of JOHN " << JOHN.size() << std::endl;
// 	if (JOHN.capacity() >= JOHN.size())
// 		std::cout << "Capacity of JOHN is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 53\n";
// 	std::cout << "Size of BOB " << BOB.size() << std::endl;
// 	if (BOB.capacity() >= bob_resize)
// 		std::cout << "Capacity of BOB is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 58\n";
// 	std::cout << "Size of MIKE " << MIKE.size() << std::endl;
// 	if (MIKE.capacity() >= MIKE.size())
// 		std::cout << "Capacity of MIKE is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 63\n";

// 	size_t	mike_resize = 9;
// 	bob_resize = 0;
	
// 	BOB.resize(bob_resize);
// 	std::cout << "BOB is empty now ? " << BOB.empty() << '\n';
// 	MIKE.resize(mike_resize, test);
// 	std::cout << "Size of JOHN " << JOHN.size() << std::endl;
// 	if (JOHN.capacity() >= JOHN.size())
// 		std::cout << "Capacity of JOHN is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 86\n";
// 	std::cout << "Size of BOB " << BOB.size() << std::endl;
// 	if (BOB.capacity() >= bob_resize)
// 		std::cout << "Capacity of BOB is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 91\n";
// 	std::cout << "Size of MIKE " << MIKE.size() << std::endl;
// 	if (MIKE.capacity() >= mike_resize)
// 		std::cout << "Capacity of MIKE is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 96\n";
// 	for (size_t i = 0; i < MIKE.size(); i++)
// 	{
// 		for (size_t j = 0; j < MIKE[i].size(); j++)
// 		{
// 			std::cout << MIKE[i][j] << ' ';
// 		}
// 	std::cout << std::endl;
// 	}
// 	// RESERVE
// 	std::cout << "\nRESERVE\n";

// 	size_t	john_reserve = 0;
// 	size_t	bob_reserve = 3;
// 	size_t	mike_reserve = 4;

// 	JOHN.reserve(john_reserve);
// 	BOB.reserve(bob_reserve);
// 	MIKE.reserve(mike_reserve);
// 	std::cout << "Size of JOHN " << JOHN.size() << std::endl;
// 	if (JOHN.capacity() >= john_reserve)
// 		std::cout << "Capacity of JOHN is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 120\n";
// 	std::cout << "Size of BOB " << BOB.size() << std::endl;
// 	if (BOB.capacity() >= bob_reserve)
// 		std::cout << "Capacity of BOB is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 125\n";
// 	std::cout << "Size of MIKE " << MIKE.size() << std::endl;
// 	if (MIKE.capacity() >= mike_reserve)
// 		std::cout << "Capacity of MIKE is sufficient\n";
// 	else
// 		std::cerr << "THERE IS A PROBLEM ON LINE 130\n";
// 	for (size_t i = 0; i < MIKE.size(); i++)
// 	{
// 		for (size_t j = 0; j < MIKE[i].size(); j++)
// 			std::cout << MIKE[i][j] << ' ';
// 	std::cout << std::endl;
// 	}

// 	// //AT
// 	std::cout << "\nAT\n";
// 	try
// 	{
// 		std::cout << MIKE.at(2).front() << '\n';
// 		std::cout << MIKE.at(87).back() << '\n';
// 	}
// 	catch (std::out_of_range& oor)
// 	{
// 		(void)oor;
// 		std::cout << "OOR error caught\n";
// 	}

// 	// FRONT / BACK
// 	std::cout << "\nFRONT / BACK\n";
// 	std::cout << "front() of MIKE : " << MIKE.front().front() << '\n';
// 	std::cout << "back() of MIKE : " << MIKE.back().back() << '\n';

// 	//ASSIGN
// 	std::cout << "\nASSIGN\n";
// 	test.assign(3, 17);
// 	BOB.assign(3, test);

// 	//ASSIGN RANGE
// 	std::cout << "\nASSIGN RANGE\n";
// 	vector<vector<int> >	assign_range;
// 	assign_range.assign(8, test);
// 	assign_range.assign(BOB.begin() + 1, BOB.end() - 2);

// 	//EMPTY
// 	std::cout << "\nEMPTY\n";
// 	std::cout << "BOB is empty ? " << BOB.empty() << '\n';
// 	std::cout << "BOB at(1) : " << BOB.at(1).front() << '\n';

// 	//PUSH/POP_BACK
// 	std::cout << "\nPUSH/POP_BACK\n";
// 	test.assign(2, 42);
// 	BOB.push_back(test);
// 	std::cout << "last elem of BOB : " << BOB.back().back() << '\n';
// 	BOB.pop_back();
// 	std::cout << "last elem of BOB : " << BOB.back().back() << '\n';

	// //INSERT
	// std::cout << "\nINSERT\n";
	// vector<vector<int> >	insert_in_me;
	// for (int i = 0; i < 13; i++)
	// {
	// 	vector<int>	j(2, i);
	// 	insert_in_me.push_back(j);
	// }
	// for (size_t i = 0; i < insert_in_me.size(); i++)
	// {
	// 	for (size_t j = 0; j < insert_in_me.at(i).size(); j++)
	// 		std::cout << insert_in_me.at(i).at(j) << ' ';
	// 	std::cout << '\n';
	// }

	// vector<vector<int> >::iterator	tmp;
	// test.assign(23, 19);
	// tmp = insert_in_me.begin() + 4;
	// insert_in_me.insert(tmp, 8, test);// ---------------------------------ici----------------
	// std::cout << "cap de mon vec: "<<insert_in_me.capacity();
	
	// for (size_t i = 0; i < insert_in_me.size(); i++)
	// {
	// 	for (size_t j = 0; j < insert_in_me.at(i).size(); j++)
	// 		std::cout << insert_in_me.at(i).at(j) << ' ';
	// 	std::cout << '\n';
	// }

	// vector<vector<int> >::const_iterator const_it(insert_in_me.begin());
	// std::cout << "Const it.front() : " << std::endl;
	// std::cout << (*const_it).front() << '\n';


	// //INSERT
	// std::cout << "\nINSERT\n";
	// vector<vector<int> >	std_insert_in_me;
	// for (int i = 0; i < 15; i++)
	// 	std_insert_in_me.push_back(test);
	// for (size_t i = 0; i < std_insert_in_me.size(); i++)
	// 	std::cout << std_insert_in_me.at(i).front() << ' ';
	// std::cout << '\n';

	// vector<vector<int> >::iterator	std_tmp;
	// std_tmp = std_insert_in_me.begin() + 4;
	// std_insert_in_me.insert(std_tmp, 8, test);
	// for (size_t i = 0; i < std_insert_in_me.size(); i++)
	// 	std::cout << std_insert_in_me.at(i).back() << ' ';
	// std::cout << '\n';


	// //INSERT RANGE
	// std::cout << "\nINSERT RANGE\n";
	// vector<vector<int> >	insert_bis;
	// for (int i = 0; i < 7; i++)
	// {
	// 	vector<int>	j(2, i * 3);
	// 	insert_bis.push_back(j);
	// }
	// for (size_t i = 0; i < insert_bis.size(); i++)
	// 	std::cout << insert_bis[i].back() << ' ';
	// std::cout << '\n';

	// insert_bis.insert(insert_bis.begin() + 5, insert_in_me.begin(), insert_in_me.end());
	// for (size_t i = 0; i < insert_bis.size(); i++)
	// 	std::cout << insert_bis[i].back() << ' ';
	// std::cout << '\n';


	// //ERASE
	// std::cout << "\nERASE\n";
	// vector<vector<int> >	erase_in_me;
	// for (int i = 0; i < 15; i++)
	// {
	// 	vector<int>	j(1, i);
	// 	erase_in_me.push_back(j);
	// }
	// for (size_t i = 0; i < erase_in_me.size(); i++)
	// 	std::cout << erase_in_me.at(i).front() << ' ';
	// std::cout << '\n';

	// erase_in_me.erase(erase_in_me.begin() + 7);
	// for (size_t i = 0; i < erase_in_me.size(); i++)
	// 	std::cout << erase_in_me.at(i).front() << ' ';
	// std::cout << '\n';
	// erase_in_me.erase(erase_in_me.begin() + 2, erase_in_me.begin() + 6);
	// for (size_t i = 0; i < erase_in_me.size(); i++)
	// 	std::cout << erase_in_me.at(i).front() << ' ';
	// std::cout << '\n';

	// //SWAP
	// std::cout << "\nSWAP\n";
	// john_reserve = 4;
	// JOHN.reserve(john_reserve);
	// BOB.swap(MIKE);
	// std::cout << "Size of JOHN " << JOHN.size() << std::endl;
	// if (JOHN.capacity() >= JOHN.size())
	// 	std::cout << "Capacity of JOHN is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 272\n";
	// std::cout << "Size of BOB " << BOB.size() << std::endl;
	// if (BOB.capacity() >= BOB.size())
	// 	std::cout << "Capacity of BOB is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 277\n";
	// std::cout << "Size of MIKE " << MIKE.size() << std::endl;
	// if (MIKE.capacity() >= MIKE.size())
	// 	std::cout << "Capacity of MIKE is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 282\n";
	// for (size_t i = 0; i < MIKE.size(); i++)
	// {
	// 	for (size_t j = 0; j < MIKE[i].size(); j++)
	// 		std::cout << MIKE[i][j] << ' ';
	// std::cout << std::endl;
	// }

	// MIKE.swap(JOHN);
	// std::cout << "Size of JOHN " << JOHN.size() << std::endl;
	// if (JOHN.capacity() >= JOHN.size())
	// 	std::cout << "Capacity of JOHN is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 298\n";
	// std::cout << "Size of BOB " << BOB.size() << std::endl;
	// if (BOB.capacity() >= BOB.size())
	// 	std::cout << "Capacity of BOB is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 303\n";
	// std::cout << "Size of MIKE " << MIKE.size() << std::endl;
	// if (MIKE.capacity() >= MIKE.size())
	// 	std::cout << "Capacity of MIKE is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 308\n";
	// for (size_t i = 0; i < MIKE.size(); i++)
	// {
	// 	for (size_t j = 0; j < MIKE[i].size(); j++)
	// 		std::cout << MIKE[i][j] << ' ';
	// std::cout << std::endl;
	// }

	// //CLEAR
	// std::cout << "\nCLEAR\n";
	// JOHN.clear();
	// MIKE.clear();
	// std::cout << "Size of JOHN " << JOHN.size() << std::endl;
	// if (JOHN.capacity() >= JOHN.size())
	// 	std::cout << "Capacity of JOHN is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 327\n";
	// std::cout << "Size of BOB " << BOB.size() << std::endl;
	// if (BOB.capacity() >= BOB.size())
	// 	std::cout << "Capacity of BOB is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 332\n";
	// std::cout << "Size of MIKE " << MIKE.size() << std::endl;
	// if (MIKE.capacity() >= MIKE.size())
	// 	std::cout << "Capacity of MIKE is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 337\n";
	// for (size_t i = 0; i < MIKE.size(); i++)
	// {
	// 	for (size_t j = 0; j < MIKE[i].size(); j++)
	// 		std::cout << MIKE[i][j] << ' ';
	// std::cout << std::endl;
	// }

	// //NON MEMBER Functions
	// std::cout << "\nNON MEMBER functions\n";
	// swap(BOB, MIKE);
	// std::cout << "Size of JOHN " << JOHN.size() << std::endl;
	// if (JOHN.capacity() >= JOHN.size())
	// 	std::cout << "Capacity of JOHN is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 355\n";
	// std::cout << "Size of BOB " << BOB.size() << std::endl;
	// if (BOB.capacity() >= BOB.size())
	// 	std::cout << "Capacity of BOB is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 360\n";
	// std::cout << "Size of MIKE " << MIKE.size() << std::endl;
	// if (MIKE.capacity() >= MIKE.size())
	// 	std::cout << "Capacity of MIKE is sufficient\n";
	// else
	// 	std::cerr << "THERE IS A PROBLEM ON LINE 365\n";
	// for (size_t i = 0; i < MIKE.size(); i++)
	// {
	// 	for (size_t j = 0; j < MIKE[i].size(); j++)
	// 		std::cout << MIKE[i][j] << ' ';
	// std::cout << std::endl;
	// }
	
	// //RELATIONAL OPERATORS
	// std::cout << "\nRELATIONAL OPERATORS\n";
	// vector<vector<int> > MIKE_2(MIKE);
	// std::cout << "MIKE and BOB are equal ? " << (MIKE == BOB) << '\n';
	// std::cout << "MIKE and MIKE_2 are equal ? " << (MIKE == MIKE_2) << '\n';

	// std::cout << "\nReal Vector\n";
	// vector<vector<int> > real;
	// real.assign(5, test);
	// for (vector<vector<int> >::iterator it = real.begin(); it != real.end(); it++)
	// 	std::cout << (*it).front() << " ";
	// std::cout << '\n';

	// std::cout << std::endl;
	// return (0);
// }


#ifndef STD
# define NAMESPACE ft
#else
# define NAMESPACE std
#endif

using namespace NAMESPACE;

template <class T>
void	print(vector<vector<T> >& lst)
{
	for (typename vector<vector<T> >::iterator it = lst.begin(); it != lst.end(); it++)
	{
		for (typename vector<T>::iterator it2 = it->begin(); it2 != it->end(); it2++)
			std::cout << *it2 << ' ';
		std::cout << '\n';
	}
}

template <class T>
void	print(vector<T>& lst)
{
	for (typename vector<T>::iterator it = lst.begin(); it != lst.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n';
}
class Awesome {

	public:

		Awesome( void ) : _n( 42 ) { std::cout << "Default constructor" << std::endl; } //should not happen too often or else there is a wrong use of allocator (which calls the copy constructor)
		Awesome( int n ) : _n( n ) { std::cout << "Int constructor" << std::endl; (void)n; }
		Awesome( Awesome const &rhs ) : _n( 42 ) { *this = rhs;}
		virtual ~Awesome(void) {}

		Awesome &operator=( Awesome const & rhs ) { this->_n = rhs._n; return (*this); }
		bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
		void operator+=(int rhs){ _n += rhs; }
		int get( void ) const { return this->_n; }

	private:

		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template <class T>
void	print_vector(vector<T> &test)
{
	typename vector<T>::iterator		beg = test.begin();
	typename vector<T>::iterator		end = test.end();
	std::cout << "size : " << test.size() << ", capacity : " << test.capacity() << std::endl;
	for (typename vector<T>::iterator it = beg; it != end; it++)
	{
		std::cout << *it << " ";
		if (((it - beg) % 10 == 9) && it > beg)
			std::cout << std::endl;
	}
	std::cout << std::endl;
}

template <class T>
void	push_pop_back_tests(void)
{
	std::cout << std::endl << "PUSH BACK & POP BACK TESTS" << std::endl;
	vector<T> test;

	std::cout << "Empty ? " << test.empty() << " / Capacity : " << test.capacity() << " / Size : " << test.size() << std::endl;
	for (size_t i = 0; i < 51; i++)
	{
		test.push_back(i);
		std::cout << test.size() << ": " << test.capacity() << " - ";
		if (!(i % 10) && i != 0)
			std::cout << std::endl;
	}
	print_vector<T>(test);
	test.pop_back();
	test.pop_back();
	test.pop_back();
	test.pop_back();
	print_vector<T>(test);
}

template <class T>
void	resize_tests(void)
{
	std::cout << std::endl << "RESIZE TESTS" << std::endl;
	vector<T> test(12, 12);

	test.resize(72);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.resize(100);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.resize(4170);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.resize(171, 12);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.resize(62);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
}

template <class T>
void	insert_tests()
{
	std::cout << std::endl << "INSERT TESTS" << std::endl;
	vector<T> test(1, 1);
	vector<T> test2(5, 5);

	test.insert(test.begin(), 200, 12);
	print_vector<T>(test);
	test.insert(test.begin() + 12, 200, 30);
	print_vector<T>(test);
	test.insert(test.end(), 12, 50);
	print_vector<T>(test);
	test.insert(test.end() - 1, 0, 60);
	print_vector<T>(test);
	test.insert(test.end() - 1, 1, 70);
	print_vector<T>(test);
	test.insert(test.begin() + 412, test2.begin(), test2.end());
	print_vector<T>(test);
	test.insert(test.begin() + 6, test2.begin(), test2.end());
	print_vector<T>(test);
	test.insert(test.end(), test2.begin(), test2.end());
	print_vector<T>(test);
}

template <class T>
void	reserve_tests(void)
{
	std::cout << std::endl << "RESERVE TESTS" << std::endl;
	vector<T> test(65, 7);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.reserve(12);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.reserve(66);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.reserve(128);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.reserve(1023);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	test.reserve(10252);
	std::cout << "s: " << test.size() << ", c: " << test.capacity() << std::endl;
	try
	{
		test.reserve(test.max_size() + 1);
	}
	catch(std::length_error &le)
	{
		std::cout << "length error" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "error : " << e.what() << std::endl;
	}
	print_vector<T>(test);
}

template <class T>
void	copy_swap_tests(void)
{
	std::cout << std::endl << "COPY && SWAP TESTS" << std::endl;
	std::cout << "------------------ici";
	vector<T> test;
	for (size_t i = 0; i < 50; i++) { test.push_back(i); }
	vector<T> test_copy(test);
	for (size_t i = 0; i < test_copy.size(); i++) { test_copy[i] += 100; }
	print_vector<T>(test_copy);
	vector<T> test_range(test.begin() + 20, test.begin() + 30);
	print_vector<T>(test_range);
	test_copy.swap(test);
	print_vector<T>(test);
	print_vector<T>(test_copy);
	test_copy.swap(test_range);
	print_vector<T>(test_range);
	print_vector<T>(test_copy);
	test.swap(test_copy);
	print_vector<T>(test);
	print_vector<T>(test_copy);
}

template <class T>
void	reverse_it_tests(void)
{
	std::cout << std::endl << "REVERSE IT TESTS" << std::endl;
	vector<T> test;
	for (size_t i = 0; i < 12; i++) { test.push_back(i); }
	typename vector<T>::reverse_iterator		revbeg = test.rbegin();
	for (typename vector<T>::reverse_iterator it = revbeg; it != test.rend(); it++)
	{
		std::cout << *it << " ";
		if (!((revbeg - it) % 10) && it != revbeg)
			std::cout << std::endl;
	}
	std::cout << *(test.rbegin() + 2) << std::endl;
	std::cout << *(test.rend() - 8) << std::endl;
	std::cout << (test.rbegin() == revbeg) << std::endl;
	revbeg++;
	std::cout << *revbeg << std::endl;
	std::cout << (test.rbegin() == test.rend()) << std::endl;
	std::cout << (test.rbegin() <= test.rbegin()) << std::endl;
	std::cout << (test.rbegin() < test.rend()) << std::endl;
	std::cout << (test.rbegin() >= test.rend()) << std::endl;
	revbeg += 3;
	std::cout << *revbeg << std::endl;
	std::cout << std::endl;
}

template <class T>
void	erase_clear_tests(void)
{
	std::cout << std::endl << "ERASE && CLEAR TESTS" << std::endl;
	vector<T> test(31, 12);
	test.erase(test.begin(), test.begin() + 5);
	print_vector<T>(test);
	test.erase(test.begin() + 12, test.begin() + 16);
	print_vector<T>(test);
	test.clear();
	print_vector<T>(test);
}

void	max_size_tests(void)
{
	std::cout << std::endl << "MAX SIZE TESTS" << std::endl;
	vector<int> test(31, 12);
	vector<std::string> test2;
	vector<long long int> test3;
	vector<Awesome> test4;
	vector<unsigned int> test5(12, 340);
	std::cout << test.max_size() << std::endl;
	std::cout << test2.max_size() << std::endl;
	std::cout << test3.max_size() << std::endl;
	std::cout << test4.max_size() << std::endl;
	std::cout << test5.max_size() << std::endl;
}

void	awesome_tests(void)
{
	std::cout << std::endl << "AWESOME TESTS" << std::endl;
	vector<Awesome> test(21, 12);
	print_vector<Awesome>(test);
	vector<Awesome> test2;
	print_vector<Awesome>(test2);
	test2.push_back(12);
	test2.push_back(8);
	test2.push_back(16);
	print_vector<Awesome>(test2);
	std::cout << "SAME ?" << (test.begin() + 1 == test2.begin() + 1) << std::endl;
	test.assign(test2.begin(), test2.end());
	print_vector<Awesome>(test);
	test = test2;
	print_vector<Awesome>(test);
	std::cout << "SAME ?" << (test.begin() + 1 == test2.begin() + 1) << std::endl;
	test.insert(test.end(), test2.begin(), test2.end());
	print_vector<Awesome>(test);
	test.insert(test.begin(), test2.begin(), test2.end());
	test2 = test;
	print_vector<Awesome>(test);
	std::cout << "end awesome test" << std::endl;
}

int main()
{
	push_pop_back_tests<int>();
	resize_tests<int>();
	insert_tests<int>();
	reserve_tests<int>();
	copy_swap_tests<int>();
	reverse_it_tests<int>();
	erase_clear_tests<int>();
	max_size_tests();
	awesome_tests();
	push_pop_back_tests<Awesome>();
	resize_tests<Awesome>();
	insert_tests<Awesome>();
	reserve_tests<Awesome>();
	copy_swap_tests<Awesome>();
	reverse_it_tests<Awesome>();
	erase_clear_tests<Awesome>();
}


