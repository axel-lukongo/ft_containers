/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:33:58 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/21 22:03:52 by alukongo         ###   ########.fr       */
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
            typedef typename  allocator_type::difference_type difference_type;

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
	~vector(){
		clear();
		_alloc.deallocate(_start, capacity());
	}




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
	size_type size(){ return (_end - _start);}



	size_type size_maxe(){return (allocator_type().max_size());}





	void resize (size_type n, value_type val = value_type()){
		if (n < size()){
			for(pointer ptr = _start + n ;ptr < _end; ptr++)
				_alloc.destroy(ptr);
		}
		if (n > size())
		{
			if (n < _vec_capacity)
				reserve(n);
			if (n != size())
				fill_memory(_end, n - size(), val);
			_end = _start + n;
		}
	}




	size_type capacity(){ return _vec_capacity - _start;}




	bool empty(){return ( (_end - _start) == 0);}




/******************************** reserve *********************************/
	
	void reserve (size_type n){
		if (n > capacity()){
			pointer new_vec;
			new_vec = _alloc.allocate(sizeof(value_type) * n);
			pointer ptr1 = new_vec;
			if (size()){
				for (pointer ptr2 = _start ;ptr2 != _end; ptr2++)
				{
					_alloc.construct(ptr1, *ptr2);
					ptr1++;
				}
				clear();
				_alloc.deallocate(_start, capacity());
				_start = new_vec;
				_end = ptr1;
				_vec_capacity = _start + n;
			}
			else{
				if(capacity())
					_alloc.deallocate(_start, capacity());
				_start = new_vec;
				_end = _start;
				_vec_capacity = _start + n;
			}
		}
	}





/************************************************************/
/*                        modifiers                         */
/************************************************************/



	void ft_push_back(value_type element){
		if (size() + 1 > capacity()){
			if(!capacity()){
				reserve(1);
			}
			else{
				reserve(size() * 2);
			}
		}
		_alloc.construct(_end, element);
		_end++;
	}




	void ft_pop_back(){
		if (size() <= 0){
			std::cout << "impossible to pop back" << std::endl;
			return ;
		}
		_alloc.destroy(_end - 1);
		_end--;
	}




	iterator insert (iterator position, const value_type& val){

		size_t diff;

		/*i calculate the distance between begin and position,
		so i save this difference in diff*/
		distance(begin(), position, diff);
		
		if (size() + 1 > capacity())
			reserve(size() * 2);
		/* /!\/!\: don't initialize new_pos before the reserve function,
		because reserve will put _start and _end in a new memorie zone
		that mean, new_pos will be on the old memorie zone of _end if
		we anitialize before reserve */
		pointer new_pos = _end;

		while (new_pos != (_start + diff)){
			_alloc.construct(new_pos, *(new_pos - 1));
			_alloc.destroy(new_pos - 1);
			new_pos--;
		}
		if(!empty())
			_alloc.destroy(new_pos);

		_alloc.construct(new_pos, val);
		_end++;
		return new_pos;
	}

void insert (iterator position, size_type n, const value_type& val){
	// diff_s_p it mean difference between _start and position
	size_t diff_s_p;
	distance(begin() , position, diff_s_p);
	if (n){
		if(!capacity())
			reserve(n);
		else if (size() + n > capacity()) 
			reserve(capacity() + ((size() + n ) - capacity()));
		_end = _end + n;
		pointer ptr = _end - 1;
		size_type tmp = n;
		while(ptr && ((ptr-n) >= _start + diff_s_p)){
			_alloc.construct(ptr, *(ptr - n));
			ptr--;
			tmp--;
		}
		while(ptr && ptr >= _start + diff_s_p){
			if(*ptr)
				_alloc.destroy(ptr);
			_alloc.construct(ptr, val);
			ptr--;
			n--;
		}
	}
}

// template <class InputIterator>
// void insert (iterator position, InputIterator first, InputIterator last){
	//if size > capacity: i reserve
	
// }
	// template <class InputIterator>
	// void assign (InputIterator first, InputIterator last){
		
	// }
	
	//void assign (size_type n, const value_type& val){}
	
	//void erase(iterator position){}
	
	//void swap(vector & x){}

	//iterator emplace(){}
	
	//emplace_back(){}


/************************************************************/
/*                          utils                           */
/************************************************************/


	/*here i destroy every thing from the end to the begin */
	void clear()
	{
		while (_end != _start)
		{
			--_end;
			_alloc.destroy(_end);
		}
	}


	/*this function is for fill my memory with a speecific value*/
	
	void fill_memory(pointer end, value_type val, size_type n){
		for (size_type i = 0; i < n; i++){
			_alloc.construct(end, val);
			end++;
		}
	}


};
}
#endif // !vector_H