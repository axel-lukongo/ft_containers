/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:33:58 by alukongo          #+#    #+#             */
/*   Updated: 2023/02/06 18:34:49 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
#define VECTOR_H
// #include "iterator/random_access_iterator.hpp"
#include <cstddef>
#include <iostream>
# include <memory>
#include <cmath>

#include "utils.hpp"
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
	typedef typename ft::reverse_iterator<iterator> reverse_iterator;
	typedef typename ft::reverse_iterator<const_iterator> const_reverse_iterator;
	typedef typename allocator_type::difference_type difference_type;

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


	// fill constructor
	explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
	: _start(NULL), _end(NULL), _vec_capacity(NULL), _alloc(alloc) {
		assign(n, val);
	}


	//range constructor
	template <class InputIterator>
	vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(), typename ft::enable_if<!ft::is_integral<InputIterator>::value,InputIterator >::type = InputIterator())
	:_start(NULL), _end(NULL), _vec_capacity(NULL), _alloc(alloc){
		assign(first, last);
	}



	vector(vector const & copy){
		_start = NULL;
		_end = NULL;
		_vec_capacity = copy._vec_capacity; //a la place de copy.vec_capacity je devrais mettre copy._vec_size();
		_alloc = copy._alloc;
		*this = copy;
	}


	/************************************************************/
	/*                         operator                         */
	/************************************************************/


	 vector& operator= (const vector& x){
		assign(x.begin(), x.end());
		return (*this);
	}


	/************************************************************/
	/*                        destructor                        */
	/************************************************************/
	~vector(){
		clear();
		// std::cout << capacity() <<"--------------------\n";
		_alloc.deallocate(_start, capacity());
	}




	/************************************************************/
	/*                        iterator                          */
	/************************************************************/

	iterator begin(){
		return _start;
	}

	const_iterator begin()const{
		return _start;
	}
	
	iterator end(){
		return _end;
		
	}
	
	const_iterator end()const {
		return _end; 
	}

	//************* reverse iterator *******************/

	reverse_iterator rbegin(){
		return reverse_iterator(_end);
	}
	const_reverse_iterator rbegin()const{
		return const_reverse_iterator(_end);
	}

	reverse_iterator rend(){
		return reverse_iterator(_start);
	}

	const_reverse_iterator rend() const{
		return const_reverse_iterator(_start);
	}




/************************************************************/
/*                        capacity                          */
/************************************************************/
	size_type size() const { return (_end - _start);}



	size_type max_size() const {return (allocator_type().max_size());}





	void resize (size_type n, value_type val = value_type()){
		if (n < size()){
			for(pointer ptr = _start + n ;ptr < _end; ptr++)
				_alloc.destroy(ptr);
			_end = _start + n;
		}
		if (n > size())
		{
			if (n > capacity())
				reserve(n);
			if (n != size())
				fill_memory(_end, val, n - size());
			_end = _start + n;
		}
	}




	size_type capacity() const { return (_vec_capacity - _start);}




	bool empty() const {return ( (_end - _start) == 0);}




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



	void push_back(value_type element){
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




	void pop_back(){
		if (size() <= 0){
			std::cout << "impossible to pop back" << std::endl;
			return ;
		}
		_alloc.destroy(_end - 1);
		_end--;
	}




/******************************** INSERT *********************************/

	iterator insert (iterator position, const value_type& val){

		size_t diff;

		/*i calculate the distance between begin and position,
		so i save this difference in diff*/
		distance(begin(), position, diff);
		
		if (size() == capacity()){
			if(!size())
				reserve(1);
			else
				reserve(size() * 2);
		}
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
			while(ptr && ((ptr-n) >= _start + diff_s_p)){
				_alloc.construct(ptr, *(ptr - n));
				ptr--;
			}
			while(ptr && ptr >= _start + diff_s_p){
				if(ptr < (_end - n))
					_alloc.destroy(ptr);
				_alloc.construct(ptr, val);
				ptr--;
			}
		}
	}

	template <class InputIterator>
	void insert (iterator position, InputIterator first, InputIterator last,typename enable_if<!is_integral<InputIterator>::value,InputIterator >::type = InputIterator()){
		/*this methode take 3 iterator:
		position,
		iterator of the begin of the other vector
		iterator of the end of the other vecto*/
		
		
		/*this methode will copy at position,
		the element og the other vector starting by 
		the first iterator until the last iterator.*/

		size_t diff_f_l; //diff between _start and _end of the other vector;
		size_t diff_s_p; // diff between _start and position;

		distance(first, last, diff_f_l);
		distance(begin() , position, diff_s_p);

		if (diff_f_l){
			if(!capacity())
				reserve(diff_f_l);
			else if (size() + diff_f_l > capacity())
				reserve(size() + diff_f_l);
			_end = _end + diff_f_l;
			pointer ptr = _end - 1;
			while(ptr && ((ptr - diff_f_l) >= (_start + diff_s_p))){
				_alloc.construct(ptr, *(ptr - diff_f_l));
				ptr--;
			}
			while(ptr && ptr >= _start + diff_s_p){
				if(ptr < (_end - diff_f_l))
					_alloc.destroy(ptr);
				last--;
				_alloc.construct(ptr, *last);
				ptr--;
			}
		}
	}



/******************************** Assign *********************************/


	void assign (size_type n, const value_type& val){
		if(capacity()){
			clear();
			// _alloc.deallocate(_start, capacity());
		}
		if (n){
			reserve(n);
			while(n){
				_alloc.construct(_end, val);
				n--;
				_end++;
			}
		}
		else{
			_start = NULL;
			_end = NULL;
		}
	}
	template <class InputIterator>
	void assign (InputIterator first, InputIterator last, typename enable_if<!ft::is_integral<InputIterator>::value,InputIterator >::type = InputIterator()){

		size_t diff;
		distance(first, last, diff);
		if(capacity()){
			clear();
			_alloc.deallocate(_start, capacity());
		}
		if (diff){
			_start = _alloc.allocate(sizeof(value_type) * diff);
			_end = _start;
			reserve(diff);
			while(first != last){
				_alloc.construct(_end, *first);
				first++;
				_end++;
			}
			_vec_capacity = _end;
		}
		else{
			_start = NULL;
			_end = NULL;
		}
	}





/******************************** erase *********************************/

	iterator erase(iterator position){
		iterator save;

		save = position;
		_alloc.destroy(save);
		while (save + 1 < _end) {
			_alloc.construct(save, *(save + 1));
			_alloc.destroy(save + 1);
			save++;
		}
		_end--;
		return position;
	}
	iterator erase (iterator first, iterator last){
		size_t diff;
		iterator ptr = first;
		iterator ptr2 = first;
		distance(first, last, diff);
		while(ptr < last){
			_alloc.destroy(ptr);
			ptr++;
		}
		while (ptr < _end){
			_alloc.construct(ptr2, *ptr);
			_alloc.destroy(ptr);
			ptr++;
			ptr2++;
		}
		_end = _end - diff;
		return first;
	}



/******************************** swap *********************************/

	void swap (vector& x){
			pointer tmp;
			allocator_type tmp_alloc;
			tmp_alloc = _alloc;
			_alloc = x._alloc;
			x._alloc = tmp_alloc;
			tmp = _end;
			_end = x._end;
			x._end = tmp;
			tmp = _start;
			_start = x._start;
			x._start = tmp;
			tmp = _vec_capacity;
			_vec_capacity = x._vec_capacity;
			x._vec_capacity = tmp;
	}



/************************************************************/
/*                      Element acces                       */
/************************************************************/

		reference	operator[] (size_type n) { return _start[n]; }
		const_reference	operator[] (size_type n) const { return _start[n]; }

		reference		at(size_type n)
		{
			if (n >= size())
				throw (std::out_of_range("vector"));
			return (_start[n]);
		}
		const_reference	at(size_type n) const
		{
			if (n >= size())
				throw (std::out_of_range("vector"));
			return (_start[n]);
		}



		reference	front() {return (*_start); }
		const_reference	front() const { return (*_start); }
		reference	back() { return *(_end - 1); }
		const_reference	back() const { return *(_end - 1); }



/************************************************************/
/*                          utils                           */
/************************************************************/


	/*here i destroy every thing from the end to the begin */
	void _destroy(pointer first, pointer last){
		for (;first != last; ++first)
			_alloc.destroy(first);
	}
	
	void clear()
	{
		while (_end != _start)
		{
			--_end;
			_alloc.destroy(_end);
		}
	}

	// template <typename InputIterator>
	// 	pointer
	// 	_uninitialized_copy(InputIterator begin, InputIterator end, iterator start)
	// 	{
	// 		while (begin != end)	
	// 		{
	// 			_alloc.construct(start++, *begin++);
	// 		}
	// 		return (start);
	// 	}

	/*this function is for fill my memory with a speecific value*/
	
	void fill_memory(pointer end, value_type val, size_type n){
		for (size_type i = 0; i < n; i++){
			_alloc.construct(end, val);
			end++;
		}
	}

	// template <bool Cond, class T = void>
	// struct	enable_if {
	// };

};


/************************************************************/
/*              Non-member function overloads               */
/************************************************************/

	template <class T, class Alloc>
	bool operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs){
		if (lhs.size() != rhs.size())
			return (false);
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
	}

	template <class T, class Alloc>
	bool operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs){
		return (!operator==(lhs, rhs));
	}

	template <class T, class Alloc>
	bool operator< (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs){
		return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));		
	}

	template <class T, class Alloc>
	bool operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs){
		return (!operator<(rhs, lhs));
	}

	template <class T, class Alloc>
	bool operator> (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs){
		return (rhs < lhs);
	}

	template <class T, class Alloc>
	bool operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs){
		return (!operator<(lhs, rhs));
	}

	//swap function overload
	template <class T, class Alloc>
	void swap (vector<T,Alloc>& x, vector<T,Alloc>& y){
		x.swap(y);
	}

}
#endif // !vector_H