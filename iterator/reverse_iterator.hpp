/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:00:06 by alukongo          #+#    #+#             */
/*   Updated: 2023/01/18 22:08:35 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERS_ITERATOR_H
#define REVERS_ITERATOR_H

#include <iterator>
#include "iterator_traits.hpp"
#include "red_black_tree_iterator.hpp"

namespace ft{
	template<class Iterator>
	class reverse_iterator
	{
		public:
			typedef Iterator iterator_type;
			typedef typename ft::iterator_traits<Iterator>::value_type value_type;
			typedef typename ft::iterator_traits<Iterator>::difference_type difference_type;
			typedef typename ft::iterator_traits<Iterator>::pointer pointer;
			typedef typename ft::iterator_traits<Iterator>::reference reference;
			typedef typename ft::iterator_traits<Iterator>::iterator_category iterator_category;

		private:
			Iterator _it;
		public:
			/************************************************************/
			/*                        constructor                       */
			/************************************************************/


			reverse_iterator(): _it(){}
			// explicit reverse_iterator (iterator_type it): _it(it){}


			/****************** Copy *******************/
			explicit reverse_iterator(iterator_type it) {
				_it = it;
			}

			

			iterator_type get_it() const{
				return _it;
			}



			/************************************************************/
			/*                        destructor                        */
			/************************************************************/


			~reverse_iterator(){}


			/************************************************************/
			/*                        operators                         */
			/************************************************************/

			template <class Iter>
			reverse_iterator (const reverse_iterator<Iter>& rev_it){
				_it = rev_it.get_it();
			}


			reverse_iterator operator- (difference_type n) const{
				return(reverse_iterator(_it + n));
			}

			reverse_iterator& operator--(){
				_it++;
				return *this;
			}
			reverse_iterator  operator--(int){
				reverse_iterator tmp = *this;
				++_it;
				return tmp;
			}



			reverse_iterator& operator-= (difference_type n){
				_it = _it + n;
				return *this;
			}



			pointer operator->() {
				return &(operator*());
			}



			reference operator[] (difference_type n) const{
				return *(*this + n);
			}


			reference  operator*(void) {
				Iterator it;

				it = _it;
				return *(--it);
			}

			
			reverse_iterator operator+ (difference_type n) const{
				return reverse_iterator(_it - n);
			}

			reverse_iterator& operator++(){
				_it--;
				return *this;
			}
			reverse_iterator  operator++(int){
				reverse_iterator tmp = *this;
				--_it;
				return tmp;
			}



			reverse_iterator& operator+= (difference_type n){
				_it = _it - n;
				return *this;
			}



			// template <class Iter>
			// reverse_iterator& operator= (const reverse_iterator<Iter>& rev_it){
			// 	_it = (rev_it.get_it());
			// 	return *this;
			// }


	};


	/************************************************************/
	/*              non member function overloead               */
	/************************************************************/
	//is not in the revers_iterator class
	//otherwise i wouldd have to use the keyword "friend"

	template <class Iterator>
	typename reverse_iterator<Iterator>::difference_type
	operator- (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs){
		return (lhs.get_it() - rhs.get_it());
	}



	template <class Iterator>
	reverse_iterator<Iterator> operator+ (typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& rev_it){
		return reverse_iterator<Iterator>(rev_it.get_it() - n);
	}


	template <class Iterator>
	bool operator== (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs){
		return (lhs.get_it() == rhs.get_it());
	}



	template <class Iterator>
	bool operator!= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs){
		return (lhs.get_it() != rhs.get_it());
	}



	template <class Iterator>  
	bool operator<  (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs){
		return (lhs.get_it() > rhs.get_it());
	}



	template <class Iterator>  
	bool operator<= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs){
		return (lhs.get_it() >= rhs.get_it());
	}



	template <class Iterator>
	bool operator>  (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs){
		return (lhs.get_it() < rhs.get_it());
	}



	template <class Iterator>
	bool operator >=(const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs){
		return (lhs.get_it() <= rhs.get_it());
	}
}

#endif // !REVERS_ITERATOR_H
