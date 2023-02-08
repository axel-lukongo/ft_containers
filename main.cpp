/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:05:51 by alukongo          #+#    #+#             */
/*   Updated: 2023/02/08 16:04:23 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "stack.hpp"
#include <iostream>
// #include <vector>
#include "vector.hpp"
#include"map.hpp"
// #include "print_tree.hpp"
#include<map>
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

void check_correct(ft::vector<int> test, std::vector<int> reel){
	ft::vector<int>::iterator its = test.begin();
	std::vector<int>::iterator itr = reel.begin();
	size_t i = 0;
	if(test.empty() == reel.empty())
		std::cout << "✅";
	else
		std::cout << "❌";
	while(i < test.size()){
		if (*its != *itr){
			// std::cout << *its << " | "<< *itr << "\n";
			std::cout << "❌";
			break;
		}
		its++;
		itr++;
		i++;
	}
	if(test.capacity() == reel.capacity() && test.size() == reel.size())
		std::cout << "✅";
	else
		std::cout << "❌";
	// std::cout<<std::endl;
}


void check_correct(ft::map<int,std::string> test, std::map<int,std::string> reel){
	ft::map<int,std::string>::iterator its = test.begin();
	std::map<int,std::string>::iterator itr = reel.begin();
	size_t i = 0;
	if(test.empty() == reel.empty())
		std::cout << "✅";
	else
		std::cout << "❌";
	while(i < test.size()){
		if (its->first != itr->first){
			// std::cout << *its << " | "<< *itr << "\n";
			std::cout << "❌";
			break;
		}
		its++;
		itr++;
		i++;
	}
	if(test.size() == reel.size())
		std::cout << "✅";
	else
		std::cout << "❌";
	// std::cout<<std::endl;
}

int		main(void)
{

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





	std::cout << std::endl<< std::endl<< std::endl;
	std::cout << "************************** map ***************************";
	std::cout << std::endl;

{
		ft::map<int, std::string> test;
		test[42] = "fgzgxfn";
		test[25] = "funny";
		test[80] = "hey";
		test[12] = "no";
		test[27] = "bee";
		test[90] = "8";

		ft::map<int, std::string> teste2;
		teste2[2] = "fgzgxfn";
		teste2[4] = "funny";
		teste2[8] = "hey";
		teste2[1] = "no";
		teste2[7] = "bee";
		teste2[9] = "8";


		std::map<int, std::string> reel;
		reel[42] = "fgzgxfn";
		reel[25] = "funny";
		reel[80] = "hey";
		reel[12] = "no";
		reel[27] = "bee";
		reel[90] = "8";

		std::map<int, std::string> reel2;
		reel2[2] = "fgzgxfn";
		reel2[4] = "funny";
		reel2[8] = "hey";
		reel2[1] = "no";
		reel2[7] = "bee";
		reel2[9] = "8";

		test.swap(teste2);
		reel.swap(reel2);
		std::cout << "\nswap: ";
		check_correct(test, reel);
		// printSize(test);
		// ft::map<int, std::string> test2(test);
		// ft::map<int, std::string>::const_reverse_iterator it = test2.rbegin();
		// for(;it != test2.rend(); it++)
			// std::cout << it->first << std::endl;
		// test.the_printer();
		
	}


{
	// std::cout << std::endl<< std::endl<< std::endl;
	// std::cout << "************************** operator[] ***************************";
	// std::cout << std::endl;
	//my operator wasn't work because my insert doesn't return the correct pair
	ft::map<int, std::string> test;
	test[1] = "un";
	test[2] = "deux";
	test[3] = "trois";
	test[4] = "quatre";
	test[5] = "cinq";
	test[6] = "six";
	test[7] = "sept";
	test[8] = "huit";
	test[9] = "neuf";
	test[10] = "dix";
	// ft::map<int, std::string>::iterator it = test.begin();
	// for(;it != test.end(); it++)
		// std::cout << it->second << std::endl;

	std::map<int, std::string> reel;
	reel[1] = "un";
	reel[2] = "deux";
	reel[3] = "trois";
	reel[4] = "quatre";
	reel[5] = "cinq";
	reel[6] = "six";
	reel[7] = "sept";
	reel[8] = "huit";
	reel[9] = "neuf";
	reel[10] = "dix";
	std::cout << "\n operator[]: ";
	check_correct(test,reel);
}




{
	// std::cout << std::endl<< std::endl<< std::endl;
	// std::cout << "************************** erase ***************************";
	// std::cout << std::endl;
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
	ft::map<int, std::string>::iterator it = test.begin();
	ft::map<int, std::string>::iterator ite = test.end();
	// ite--;
	ite--;
	ite--;
	ite--;
	ite--;
	ite--;
	ite--;
	ite--;
	ite--;
	ite--;
	ite--;
	// std::cout << ite->first << "  ------------\n";
	test.erase(it, ite);
	test.erase(21);



	
	
	std::map<int, std::string> reel;
	reel.insert(std::pair<int,std::string>(2, "deux"));
	reel.insert(std::pair<int,std::string>(5,"cinq"));
	reel.insert(std::pair<int,std::string>(1,"un"));
	reel.insert(std::pair<int,std::string>(8,"huit"));
	reel.insert(std::pair<int,std::string>(3,"trois"));
	reel.insert(std::pair<int,std::string>(19,"trois"));
	reel.insert(std::pair<int,std::string>(34,"trois"));
	reel.insert(std::pair<int,std::string>(21,"trois"));
	reel.insert(std::pair<int,std::string>(51,"trois"));
	reel.insert(std::pair<int,std::string>(61,"trois"));
	reel.insert(std::pair<int,std::string>(91,"trois"));
	reel.insert(std::pair<int,std::string>(81,"trois"));
	reel.insert(std::pair<int,std::string>(161,"trois"));
	reel.insert(std::pair<int,std::string>(61,"trois"));
	reel.insert(std::pair<int,std::string>(32,"trois"));
	reel.insert(std::pair<int,std::string>(101,"trois"));
	reel.insert(std::pair<int,std::string>(71,"trois"));
	reel.insert(std::pair<int,std::string>(7,"trois"));
	reel.insert(std::pair<int,std::string>(9,"trois"));
	std::map<int, std::string>::iterator itr = reel.begin();
	std::map<int, std::string>::iterator itre = reel.end();
	// ite--;
	itre--;
	itre--;
	itre--;
	itre--;
	itre--;
	itre--;
	itre--;
	itre--;
	itre--;
	itre--;
	reel.erase(itr, itre);
	reel.erase(21);
	std::cout << "\nerase: ";
	check_correct(test, reel);

}



	{
		// std::cout << std::endl<< std::endl<< std::endl;
		// std::cout << "************************** count ***************************";
		// std::cout << std::endl;
		ft::map<int, std::string> test;
		test.insert(ft::pair<int,std::string>(2, "deux"));
		test.insert(ft::pair<int,std::string>(5,"cinq"));
		test.insert(ft::pair<int,std::string>(1,"un"));
		test.insert(ft::pair<int,std::string>(8,"huit"));
		test.insert(ft::pair<int,std::string>(3,"trois"));
		test.insert(ft::pair<int,std::string>(19,"trois"));
		test.insert(ft::pair<int,std::string>(34,"trois"));
		test.insert(ft::pair<int,std::string>(21,"trois"));
		test.insert(ft::pair<int,std::string>(9,"trois"));


		std::map<int, std::string> reel;
		reel.insert(std::pair<int,std::string>(2, "deux"));
		reel.insert(std::pair<int,std::string>(5,"cinq"));
		reel.insert(std::pair<int,std::string>(1,"un"));
		reel.insert(std::pair<int,std::string>(8,"huit"));
		reel.insert(std::pair<int,std::string>(3,"trois"));
		reel.insert(std::pair<int,std::string>(19,"trois"));
		reel.insert(std::pair<int,std::string>(34,"trois"));
		reel.insert(std::pair<int,std::string>(21,"trois"));
		reel.insert(std::pair<int,std::string>(9,"trois"));
		int count = test.count(2);
		int reel_count = reel.count(2);
		
		std::cout << "\ncount: ";
		if(count == reel_count)
			std::cout << "✅";
		else
			std::cout << "❌";



		// std::cout << count;



	}


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
	

	
	{
	// 	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** lower_bound ***************************";
	// 	std::cout << std::endl;
		ft::map<int, std::string> test;
		test.insert(ft::pair<int,std::string>(2, "deux"));
		test.insert(ft::pair<int,std::string>(5,"cinq"));
		test.insert(ft::pair<int,std::string>(1,"un"));
		test.insert(ft::pair<int,std::string>(8,"huit"));
		test.insert(ft::pair<int,std::string>(3,"trois"));
		test.insert(ft::pair<int,std::string>(19,"trois"));
		test.insert(ft::pair<int,std::string>(34,"trois"));
		test.insert(ft::pair<int,std::string>(21,"trois"));
		test.insert(ft::pair<int,std::string>(9,"trois"));
		ft::map<int, std::string>::iterator it = test.lower_bound(30);
	// 	std::cout << it->first;
	

		std::map<int, std::string> reel;
		reel.insert(std::pair<int,std::string>(2, "deux"));
		reel.insert(std::pair<int,std::string>(5,"cinq"));
		reel.insert(std::pair<int,std::string>(1,"un"));
		reel.insert(std::pair<int,std::string>(8,"huit"));
		reel.insert(std::pair<int,std::string>(3,"trois"));
		reel.insert(std::pair<int,std::string>(19,"trois"));
		reel.insert(std::pair<int,std::string>(34,"trois"));
		reel.insert(std::pair<int,std::string>(21,"trois"));
		reel.insert(std::pair<int,std::string>(9,"trois"));
		std::map<int, std::string>::iterator itr = reel.lower_bound(30);
		// std::cout << itr->first;

		std::cout << "\nlower_bound: ";
		if(it->first == itr->first)
			std::cout << "✅";
		else
			std::cout << "❌";
	
	}



	{
	// 	std::cout << std::endl<< std::endl<< std::endl;
	// 	std::cout << "************************** find ***************************";
	// 	std::cout << std::endl;
		ft::map<int, std::string> test;
		test.insert(ft::pair<int,std::string>(2, "deux"));
		test.insert(ft::pair<int,std::string>(5,"cinq"));
		test.insert(ft::pair<int,std::string>(1,"un"));
		test.insert(ft::pair<int,std::string>(8,"huit"));
		test.insert(ft::pair<int,std::string>(3,"trois"));
		test.insert(ft::pair<int,std::string>(19,"trois"));
		test.insert(ft::pair<int,std::string>(34,"trois"));
		test.insert(ft::pair<int,std::string>(21,"trois"));
		test.insert(ft::pair<int,std::string>(9,"trois"));
		ft::map<int, std::string>::iterator it = test.find(19);
		// std::cout << it->first;
	
	
	
		std::map<int, std::string> reel;
		reel.insert(std::pair<int,std::string>(2, "deux"));
		reel.insert(std::pair<int,std::string>(5,"cinq"));
		reel.insert(std::pair<int,std::string>(1,"un"));
		reel.insert(std::pair<int,std::string>(8,"huit"));
		reel.insert(std::pair<int,std::string>(3,"trois"));
		reel.insert(std::pair<int,std::string>(19,"trois"));
		reel.insert(std::pair<int,std::string>(34,"trois"));
		reel.insert(std::pair<int,std::string>(21,"trois"));
		reel.insert(std::pair<int,std::string>(9,"trois"));
		std::map<int, std::string>::iterator itr = reel.find(19);
		// std::cout << itr->first;

		std::cout << "\nfind: ";
		if(it->first == itr->first)
			std::cout << "✅";
		else
			std::cout << "❌";
	}




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




	{
	// std::cout << std::endl<< std::endl<< std::endl;
	// std::cout << "************************** insert one ************************";
	std::cout << std::endl;
	ft::map<int, std::string> test2;
	test2.insert(ft::pair<int,std::string>(2,"le deuxieme mini"));
	test2.insert(ft::pair<int,std::string>(33,"le 3eme mini"));
	test2.insert(ft::pair<int,std::string>(24,"le 4eme "));
	test2.insert(ft::pair<int,std::string>(76,"le 6eme "));
	test2.insert(ft::pair<int,std::string>(15,"le 3eme"));
	test2.insert(ft::pair<int,std::string>(15,"le 5eme"));
	test2.insert(ft::pair<int,std::string>(53,"le 4eme"));
	test2.insert(ft::pair<int,std::string>(1,"le 1er"));
	test2.insert(ft::pair<int,std::string>(4,"le 1er"));


	std::map<int, std::string> reel;
	reel.insert(std::pair<int,std::string>(2,"le deuxieme mini"));
	reel.insert(std::pair<int,std::string>(33,"le 3eme mini"));
	reel.insert(std::pair<int,std::string>(24,"le 4eme "));
	reel.insert(std::pair<int,std::string>(76,"le 6eme "));
	reel.insert(std::pair<int,std::string>(15,"le 3eme"));
	reel.insert(std::pair<int,std::string>(15,"le 5eme"));
	reel.insert(std::pair<int,std::string>(53,"le 4eme"));
	reel.insert(std::pair<int,std::string>(1,"le 1er"));
	reel.insert(std::pair<int,std::string>(4,"le 1er"));
	std::cout << "insert: ";
	check_correct(test2, reel);
	std::cout << "\niterator: ";
	check_correct(test2, reel);
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
	}









std::cout << std::endl<< std::endl<< std::endl;
std::cout << "************************** vector ***************************";
std::cout << std::endl;


{

	const int start_size = 7;
	ft::vector<int> vct(start_size, 20);
	ft::vector<int> vct2;
	ft::vector<int>::iterator it = vct.begin();

	std::vector<int> reel(start_size, 20);
	std::vector<int> reel2;
	std::vector<int>::iterator itr = reel.begin();

	std::cout << "empty: ";
	check_correct(vct, reel);

	for (int i = 2; i < start_size; ++i){
		it[i] = (start_size - i) * 3;
		itr[i] = (start_size - i) * 3;
		
	}
	// //printSize(vct, true);

	vct.resize(10, 42);
	reel.resize(10, 42);
	check_correct(vct, reel);
	// //printSize(vct, true);

	std::cout << "\nresize: ";
	vct.resize(18, 43);
	reel.resize(18, 43);
	check_correct(vct, reel);
	// //printSize(vct, true);
	
	vct.resize(10);
	reel.resize(10);
	check_correct(vct, reel);
	// //printSize(vct, true);
	
	vct.resize(23, 44);
	reel.resize(23, 44);
	check_correct(vct, reel);
	// //printSize(vct, true);
	
	vct.resize(5);
	reel.resize(5);
	check_correct(vct, reel);
	// //printSize(vct, true);
	std::cout << "\nreserve: ";
	vct.reserve(5);
	reel.reserve(5);
	vct.reserve(3);
	reel.reserve(3);
	check_correct(vct, reel);


	vct.resize(87);
	reel.resize(87);
	vct.resize(5);
	reel.resize(5);
	check_correct(vct, reel);


	vct2 = vct;
	reel2 = reel;
	check_correct(vct, reel);
	
	vct.reserve(vct.capacity() + 1);
	check_correct(vct, reel);



	vct2.resize(0);
	check_correct(vct, reel);
	std::cout << std::endl;

	std::cout << "assign constuct: ";
	vct2 = vct;
	reel2 = reel;
	check_correct(vct2, reel2);
	std::cout << std::endl;

	std::cout << "swap: ";
	ft::vector<int> test(12, 23);
	ft::vector<int> test2(5, 10);
	std::vector<int> sec(12, 23);
	std::vector<int> sec2(5, 10);
	test.swap(test2);
	sec.swap(sec2);
	check_correct(test, sec);
	check_correct(test2, sec2);
	std::cout << std::endl;
}


	{
	std::cout << "copy construct/ riverse_it: ";
	ft::vector<int> test(5);
	ft::vector<int>::reverse_iterator it = test.rbegin();
	ft::vector<int>::reverse_iterator ita(it);

	
	std::vector<int> reel(5);
	std::vector<int>::reverse_iterator itr = reel.rbegin();
	std::vector<int>::reverse_iterator cpy(itr);
	check_correct(test, reel);
	
	for (size_t i = 0; i < test.size(); ++i){
		it[0] = (test.size() - 0) * 5;
		itr[0] = (reel.size() - 0) * 5;
		
	}

	it = it + 5;
	itr = itr + 5;
	
	it = 1 + it;
	itr = 1 + itr;
	
	it = it - 4;
	itr = itr - 4;

	*(it -= 2) = 42;
	*(itr -= 2) = 42;
	
	*(it += 2) = 21;
	*(itr += 2) = 21;

	check_correct(test, reel);
	std::cout<<std::endl;

	//-------------------------------------iterator-------------------------------------/
	std::cout << "iterators: ";


	check_correct(test, reel);
	std::cout<<std::endl;
	// usleep(500000);
	}



	{
		std::cout<<"push_back: ";
		ft::vector<int> test;
		test.push_back(1);
		test.push_back(11);
		test.push_back(111);
		test.push_back(1111);
		ft::vector<int> test2;
		test2.push_back(0);
		test2.push_back(1);
		test2.push_back(2);
		test2.push_back(3);
		test2.insert(test2.begin()+1, test.begin(), test.end());
		

		std::vector<int> reel;
		reel.push_back(1);
		reel.push_back(11);
		reel.push_back(111);
		reel.push_back(1111);
		std::vector<int> reel2;
		reel2.push_back(0);
		reel2.push_back(1);
		reel2.push_back(2);
		reel2.push_back(3);
		reel2.insert(reel2.begin()+1, reel.begin(), reel.end());
		check_correct(test, reel);
		std::cout<<"\ninsert: ";
		check_correct(test2, reel2);
	
		std::cout<<std::endl;
	}
	return (0);
}
