/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:02:27 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/20 03:39:08 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_TRAIT_H
#define ITERATOR_TRAIT_H

#include<cstddef>
# include <memory> //for the std:..._iterator_tag definitions and the ptrdiff_t

namespace ft{
	/*here i creat my class iterator_trait who will define the property
	of my iterator.
	https://cplusplus.com/reference/iterator/iterator_traits/*/



	/*that is the categories who i can have as iterator.
	input_iterator: can only read the containe who is pointed by the iterator
	output_iterator: can assign value to a sequence but can not acces or read it
	forward_iterator: it a combinaison of input and output_iterator and can only move forward
	bidirectional_iterator: similare to forward_iterator, except that can move backward also
	all this is in iterator_category.
	*/
	struct input_iterator_tag{};
	struct output_iterator_tag{};
	struct forward_iterator_tag: public input_iterator_tag {};
	struct bidirectional_iterator_tag: public forward_iterator_tag {};
	struct random_access_iterator_tag: public bidirectional_iterator_tag {};


	template <class Iterator> 
	class iterator_traits{
		public:
			//express the result of a substracting between 2 iterator.
			typedef typename Iterator::difference_type difference_type;
			//it the type who the iterator can point on
			typedef typename Iterator::value_type value_type;
			//the type of a pointer that the iterator can pointe to.
			typedef typename Iterator::pointer pointer;
			//the type of a reference that the iterator can pointe to.
			typedef typename Iterator::reference reference;
			//The iterator category. It can be one of category write above
			typedef typename Iterator::iterator_category iterator_category;
	};

	template <class T> 
	class iterator_traits<T*>{
		public:
			typedef ptrdiff_t difference_type;
			typedef T value_type;
			typedef T* pointer;
			typedef T& reference;
			typedef std::random_access_iterator_tag iterator_category;
	};

	template <class T> 
	class iterator_traits<const T*>{
		public:
			typedef ptrdiff_t difference_type;
			typedef T value_type;
			typedef const T* pointer;
			typedef const T& reference;
			typedef std::random_access_iterator_tag iterator_category;
	};


// template<> class iterator_traits<bool>{};
// 	template<> class iterator_traits<char>{};
// 	template<> class iterator_traits<char16_t>{};
// 	template<> class iterator_traits<char32_t>{};
// 	template<> class iterator_traits<wchar_t>{};
// 	template<> class iterator_traits<signed char>{};
// 	template<> class iterator_traits<short int>{};
// 	template<> class iterator_traits<int>{};
// 	template<> class iterator_traits<long>{};
// 	template<> class iterator_traits<long long>{};
// 	template<> class iterator_traits<unsigned char>{};
// 	template<> class iterator_traits<unsigned short int>{};
// 	template<> class iterator_traits<unsigned int>{};
// 	template<> class iterator_traits<unsigned long>{};
// 	template<> class iterator_traits<unsigned long long>{};



	

		template <typename InputIterator, typename Distance>
	void	
	distance(InputIterator first, const InputIterator &last, Distance &n, std::random_access_iterator_tag)
	{
		n = 0;
		while (last != first)
		{
			n++;
			++first;
		}
	}

	//specialisation for the other types of iterators.
	template <typename InputIterator, typename Distance>
	void	
	distance(InputIterator first, const InputIterator &last, Distance &n, std::forward_iterator_tag)
	{
		n = 0;
		while (last != first)
		{
			n++;
			++first;
		}
	}

	//specialisation for the other types of iterators.
	template <typename InputIterator, typename Distance>
	void	
	distance(InputIterator first, const InputIterator &last, Distance &n, std::bidirectional_iterator_tag)
	{
		n = 0;
		while (last != first)
		{
			n++;
			++first;
		}
	}

	//specialisation for the other types of iterators.
	template <typename InputIterator, typename Distance>
	void	
	distance(InputIterator first, const InputIterator &last, Distance &n, std::input_iterator_tag)
	{
		n = 0;
		while (last != first)
		{
			n++;
			++first;
		}
	}

	//base function before dispatching to calculate the distance between two
	//iterators
	template <typename InputIterator, typename Distance>
	void
	distance(InputIterator first, const InputIterator &last, Distance &n)
	{
		distance(first, last, n, typename iterator_traits<InputIterator>::iterator_category());
	}

}

#endif // !ITERATOR_TRAIT_H
