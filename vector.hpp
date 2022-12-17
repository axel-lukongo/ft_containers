/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:33:58 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/18 00:04:35 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
#define VECTOR_H
// #include "iterator/random_access_iterator.hpp"
#include <cstddef>
#include <iostream>
# include <memory>
#include"iterator/reverse_iterator.hpp"

namespace ft{
template<typename T, class Alloc = std::allocator<T> >
class vector
{
public:
	typedef T* iterator;
	typedef const T* const_iterator;
	typedef T value_type;
	typedef Alloc allocator_type;
	typedef typename allocator_type::pointer pointer;
	typedef typename allocator_type::reference reference;
	typedef typename allocator_type::const_reference const_reference;
	typedef typename allocator_type::const_pointer const_pointer;
	typedef typename allocator_type::size_type size_type;
	typedef typename  ft::reverse_iterator<iterator> reverse_iterator;
	typedef typename  ft::reverse_iterator<const_iterator> const_reverse_iterator;

private:
	pointer _start;
	pointer _end;
	pointer _vec_capacity;
	allocator_type _alloc;

public:

	/************************************************************/
	/*                        constructor                       */
	/************************************************************/


	explicit vector(const allocator_type& alloc = allocator_type()):
	_start(NULL),
	_end(NULL),
	_vec_capacity(NULL),
	_alloc(alloc){
	}



	explicit vector (size_type n, const value_type& val = value_type(),
	const allocator_type& alloc = allocator_type()):
	_alloc(alloc){
		_start = alloc.allocate(n);
		_end = _start + n;
		_vec_capacity = _end;
		while (n > 0)
			_alloc.allocate(_start + n--, val);
	}

	// template <class InputIterator>
	// vector (InputIterator first, InputIterator last,
	// const allocator_type& alloc = allocator_type()):_alloc(alloc){
		
	// }



	vector(vector & copy){
		_start = copy._start;
		_end = copy._end;
		_vec_capacity = copy._vec_capacity;
	}



	/************************************************************/
	/*                        operators                         */
	/************************************************************/

	// T & operator[](int index){
	// }

	// vector& operator=(vector & copy){
	// 	return *this;
	// }



	/************************************************************/
	/*                        destructor                        */
	/************************************************************/
	~vector(){}




	/************************************************************/
	/*                        iterator                          */
	/************************************************************/

	iterator begin(){
		return _start;
	}

	iterator end(){
		return _end;
	}

	//************* const iterator *******************/

	const_iterator cbegin()const{
		return _start;
	}
	const_iterator cend()const {
		return _end; 
	}

	//************* reverse iterator *******************/

	reverse_iterator rbegin(){
		return _end;
	}
	reverse_iterator rend(){
		return _start;
	}

	//*********** const reverse iterator ***************/

	const_reverse_iterator crbegin()const{
		return _end;
	}
	const_reverse_iterator crend(){
		return _start;
	}




/************************************************************/
/*                        capacity                          */
/************************************************************/
	int size(){ return (_end - _start); }
	int size_maxe(){return (allocator_type().max_size());}
	
	// void fill_memory(pointer end, value_type val, size_type n){
	// 	for (size_type i = 0; i < n; i++){
	// 		_alloc.construct(end, val);
	// 		end++;
	// 	}
	// }
	// void resize (size_type n, value_type val = value_type()){
	// 	if (n < size()){
	// 		for(pointer ptr = _start + n ;ptr < _end; ptr++)
	// 			_alloc.destroy(ptr);
	// 	}
	// 	if (n > size())
	// 	{
	// 		if (n < _vec_capacity)
	// 			//i will reserve for n
	// 		if (n != size())
	// 			fill_memory(_end, n - size(), val);
	// 		_end = _start + n;
	// 	}
	// }

	size_type capacity(){ return _vec_capacity - _start;}
	
	bool empty(){return ( (_end - _start) == 0);}
	

/******************************** reserve *********************************/
	
	void reserve (size_type n){
		if (n > capacity()){
			pointer new_vec;
			new_vec = _alloc.allocate(n);
			pointer ptr1 = new_vec;
			pointer ptr2 = _start;
			if (size())
				while (ptr1 != _end)
				{
					_alloc.construct(ptr1, *ptr2);
					ptr1++;
					ptr2++;
				}
			for (pointer tmp = _start ;tmp != _end; tmp++)
				_alloc.destroy(tmp);
			_alloc.deallocate(_start, capacity());
			_start = new_vec;
			_end = ptr1;
			_vec_capacity = _start + n;
		}
		else
			_end = _start + n;
	}


	// void shrink_to_fit(){}




/************************************************************/
/*                        modifiers                         */
/************************************************************/
	// void new_allocation(){
	// 	T *tmp = new T[_size + 5];
	// 	_capacity = _size + 5;
	// 	for (int i = 0; i < _size; i++){
	// 		tmp[i] = _arr[i];
	// 	}
	// 	_arr = tmp;
	// 	delete [] tmp;
	// }

	void ft_push_back(value_type element){
		if (_vec_capacity == size()){
			// i reserve for 1
		}
		_alloc.construct(_end, element);
		_end++;
	}

	// void ft_pop_back(){
	// 	if (size() <= 0){
	// 		std::cout << "impossible to pop back" << std::endl;
	// 		return ;
	// 	}
	// 	_alloc.destroy(_end - 1);
	// 	_end--;
	// }
	
	// void insert(iterator position, const value_type & val){}
	
	// template <class InputIterator>
	// void assign (InputIterator first, InputIterator last){
		
	// }
	
	//void assign (size_type n, const value_type& val){}
	
	//void erase(iterator position){}
	
	//void swap(vector & x){}
	
	// void clear(){
	// 	while (_end != _start){
	// 		_end--;
	// 		_alloc.destroy(_end);
	// 	}
	// }

	//iterator emplace(){}
	
	//emplace_back(){}


};



}

#endif // !vector_H