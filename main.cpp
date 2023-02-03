/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2023/02/03 12:32:25 by alukongo         ###   ########.fr       */
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
#include "vector.hpp"
#include <list>
#include "set.hpp"


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

int		main(void)
{

{
	ft::set<int> const st;
	ft::set<int>::iterator it = st.begin(); // <-- no error, actually ! set allows for const_iterator => iterator conversion

	(void)it;
	return (0);

}

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

	
// 	{
// 		std::cout << std::endl<< std::endl<< std::endl;
// 		std::cout << "************************** insert ***************************";
// 		std::cout << std::endl;

// 		ft::set<int> test;
// 		test.insert(5);
// 		test.insert(3);
// 		test.insert(1);
// 		test.insert(7);
// 		ft::set<int>::iterator it = test.begin();
// 		std::cout << *it << "\n";
// 		it++;
// 		std::cout << *it << "\n";
// 	}







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
