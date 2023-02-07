/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:33:58 by alukongo          #+#    #+#             */
/*   Updated: 2023/02/07 15:34:11 by alukongo         ###   ########.fr       */
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

namespace ft
{
	template <class T, class Allocator = std::allocator<T> >
	class vector
	{
	public:

//		MEMBER_TYPE
		typedef 			T										value_type;	

		typedef 			Allocator								allocator_type;	
		
		typedef	typename	allocator_type::reference				reference;
		typedef	typename	allocator_type::const_reference			const_reference;	

		typedef	typename	allocator_type::pointer					pointer;
		typedef typename	allocator_type::const_pointer			const_pointer;

		typedef				T*											iterator;
		typedef	const		T*											const_iterator;

		typedef typename	ft::reverse_iterator<iterator>			reverse_iterator;
		typedef typename	ft::reverse_iterator<const_iterator>	const_reverse_iterator;

		typedef	typename	allocator_type::size_type						size_type;
		typedef typename 	ft::iterator_traits<iterator>::difference_type	difference_type;

		
		

	private:
		allocator_type	_alloc;
		pointer			_ptr; // is the index of my vector
		size_type		_size; //size of my vector
		size_type		_capacity; // capacity allocat in my vector

	public:
		/************************************************************/
		/*                        constructor                       */
		/************************************************************/

		explicit vector(const allocator_type& alloc = allocator_type()) 
		: _alloc(alloc),
		_ptr(NULL),
		_size(0),
		_capacity(0)
		{};
		
		explicit vector(size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
		: _alloc(alloc),
		_size(0),
		_capacity(n)
		{
			this->_ptr = _alloc.allocate(_capacity);
			while (_size < n)
			{
				_alloc.construct(_ptr + _size, val);
				++_size;
			}

		};

		template <class InputIterator>
        vector(InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(),
		typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type* = NULL)
		: _alloc(alloc), 
		_size(size_type(std::distance<InputIterator>(first, last))),
		 _capacity(_size)
		{
			size_type i = 0;
			this->_ptr = _alloc.allocate(_capacity);
			
			while (i < _size)
			{
				_alloc.construct(_ptr + i, *first++);
				++i;
			}
		};


		/************************************************************/
		/*                    copy constructor                      */
		/************************************************************/

		vector(const vector& x)
		: _alloc(x._alloc), 
		_size(x._size),
		 _capacity(x._size)
		{
			
			this->_ptr = this->_alloc.allocate(this->_capacity);
			for (size_type i = 0; i < x._size; ++i)
				_alloc.construct(_ptr + i, *(x._ptr + i));
		};


		/************************************************************/
		/*                   assigne constructor                    */
		/************************************************************/

		vector& operator=(const vector& rhs)
		{
			if (&rhs != this)
			{
				this->clear();
				this->reserve(rhs._size);
				_size = rhs._size;
				for (difference_type i = 0; i < difference_type(_size); ++i)
				{
					_alloc.construct(_ptr + i, *(rhs.begin() + i));
				}
			}
			return (*this);
		};

		/************************************************************/
		/*                         destructor                       */
		/************************************************************/
		~vector()
		{			
			for (size_type i = 0; i < _size && _ptr; i++)
				_alloc.destroy(_ptr + i);
			_alloc.deallocate(_ptr, _capacity);
			_ptr = NULL;
		};


		/************************************************************/
		/*                         iterator                         */
		/************************************************************/
		iterator 		begin() 		{ return (this->_ptr); };
		//************  const  **************
		const_iterator	begin() const	{ return (this->_ptr); };
		
		iterator		end()
		{
			if (this->empty())
				return (_ptr);
			return (_ptr + _size);
		};

		//************  const  **************
		const_iterator	end() const
		{
			if (this->empty())
				return ( _ptr);
			return (_ptr + _size);
		};


		//**************************   reverse   ******************************
		reverse_iterator		rbegin()
		{
			return (reverse_iterator(this->end()));
		};

		//************  const  **************
		const_reverse_iterator	rbegin() const
		{
			return (const_reverse_iterator(this->end()));
		};

		reverse_iterator		rend()
		{
			return (reverse_iterator(this->begin() ));
		};

		//************  const  **************
		const_reverse_iterator	rend() const
		{
			return (const_reverse_iterator( this->begin() ));
		};


//		ALLOCATOR
		allocator_type	get_allocator(void) const { return (_alloc); };





		/************************************************************/
		/*                         accessor                         */
		/************************************************************/
		reference		at(size_type n)
		{
			if (n >= _size)
				throw std::out_of_range("Exception: vector::at() out of range\n");
			return (*(_ptr + n ));
		};
		const_reference	at(size_type n) const
		{
			if (n >= _size)
				throw std::out_of_range("Exception: const vector::at() out of range\n");
			return (*(_ptr + n ));	
		};

		//out of range undefined behavior
		reference		front()			{ return (*_ptr); };
		//************  const  **************
		const_reference	front() const	{ return (*_ptr); };



		reference		back()			{ return (*(_ptr + _size - 1)); };
		//************  const  **************
		const_reference	back() const	{ return (*(_ptr + _size - 1)); };



		reference		operator[] (size_type n)		{ return (*(_ptr + n)); };
		//************  const  **************
		const_reference	operator[] (size_type n) const	{ return (*(_ptr + n)); };


		/************************************************************/
		/*                         capacity                         */
		/************************************************************/
		size_type	size()		const	{ return (_size); };
		size_type	max_size() 	const	{ return (_alloc.max_size()); };
		size_type	capacity() 	const	{ return (_capacity); };
		bool		empty() 	const	{ return ((_size == 0) ? true : false); };

/**
 * @brief this function allow us to allocate a new memory space if necessary
 * 
 * if the new capacity(n) to allocate is bigger than the old capacity
 * 1)i alloc a new memory space and i save it in tmp,
 * 2) i copy the content of my actual vector in my tmp
 * 3)i destroy and deallocate the actual vector
 * 4)i initialize my actual vector to tmp
 * 
 * @param n the new capacity
 */
		void	reserve(size_type n)
		{
			if (n > _alloc.max_size())
				throw (std::length_error("vector::reserve"));
			if (n > _capacity)
			{
				pointer		tmp = _alloc.allocate(n);

				for (size_type i = 0; i < _size ; ++i)
					_alloc.construct(tmp + i, *(_ptr + i));


				for (size_type i = 0; i < _size; ++i)
					_alloc.destroy(_ptr + i);
				_alloc.deallocate(_ptr, _capacity);
				
				_ptr = tmp;
				_capacity = n;
			}
		};

/**
 * @brief this function allow us to redefine the size of the vector
 * when the new size(n) is smaller than the previous size,
 * we destroy the content from the end until n
 * 
 * if n is bigger than the size we reserve the correct quantity of memory
 * and we add val in all new memory case
 * 
 * @param n the new size of the vector
 * @param val is the value
 */
		void resize(size_type n, value_type val = value_type())
		{
			if (n > _alloc.max_size())
					throw (std::length_error("vector::resize"));

			while (n < _size)
				_alloc.destroy(_ptr + --_size);

			if ((n && !_capacity) || n >= _capacity * 2)
				reserve(n);
			if (n > _capacity)
				while (n > _capacity)
					reserve(_capacity * 2);

			for (size_type i = 0; i < n - _size; ++i)
				_alloc.construct(_ptr + _size + i, val);

			_size = n;
		};

		/************************************************************/
		/*                         modifier                         */
		/************************************************************/

		void	push_back(const value_type& val)
		{
			this->resize(_size + 1, val);
		};
		void	pop_back(void)
		{
			if (_size)
				_alloc.destroy(_ptr + (--_size));
		};

		/**
		 * @brief swap the vector with an other vector
		 * 
		 * @param x vector to swap with
		 */
		void	swap(vector& x)
		{
			pointer			tmp_ptr = _ptr;
			size_type		tmp_size = _size;
			size_type		tmp_capacity = _capacity;

			_ptr = x._ptr;
			_size = x._size;
			_capacity = x._capacity;

			x._ptr = tmp_ptr;
			x._size = tmp_size;
			x._capacity = tmp_capacity;
		};

		void	clear(void)
		{
			for (size_type i = 0; i < _size; i++)
				_alloc.destroy(_ptr + i);
			_size = 0;
		};

	/**
	 * @brief clear every thing in vector and add only the value
	 * 
	 * @param n size
	 * @param val value
	 */
		void	assign(size_type n, const value_type& val)
		{
			this->clear();
			this->resize(n, val);
		};
		
		template<typename InputIterator>
		void assign(InputIterator first, InputIterator last,
		typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type* = NULL)
		{
			if (static_cast<size_type>(std::distance<InputIterator>(first, last)) > _alloc.max_size())
				throw (std::length_error("cannot create ft::vector larger than max_size()"));
			this->clear();
			while (first != last)
				this->push_back(*first++);
		};

//****************************  insert  ************************
		//insert one val in a specific position
		iterator insert(iterator position, const value_type &val)
		{
			difference_type pos = position - _ptr;
			
			insert(position, 1, val);
			
			return (_ptr + pos);
		}

		//insert n val in a specific position
		void insert(iterator position, size_type n, const value_type &val)
		{
			difference_type pos = position - _ptr;
			
			if (!n)
				return;
			
			if (_size + size_type(n) >= _capacity * 2)
				reserve(_size + size_type(n));
			else if (_size + size_type(n) > _capacity)
				reserve(_size * 2);



			for (difference_type i = difference_type(_size) - 1; i >= pos; i--)
			{
				_alloc.construct(_ptr + i + n, *(_ptr + i));
				_alloc.destroy(_ptr + i);
			}

			for (difference_type i = pos; i < pos + difference_type(n); i++)
				_alloc.construct(_ptr + i, val);

			_size += n;
		}



		template <typename InputIterator>
		void insert(iterator position, InputIterator first, InputIterator last,
		typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type* = NULL)
		{
			difference_type pos = position - _ptr;
			difference_type diff = std::distance(first, last);
			
			if (!diff)
				return;
			
			reserve(_size + size_type(diff));

			for (difference_type i = difference_type(_size) - 1; i >= (difference_type)pos; --i)
			{
				_alloc.construct(_ptr + i + diff, *(_ptr + i));
				_alloc.destroy(_ptr + i);
			}

			for (InputIterator it = first; it != last; ++it)
				_alloc.construct(_ptr + pos++, *it);

			_size += size_type(diff);
		}



		//suppress one element
		iterator erase(iterator pos)
		{
			return (erase(pos, pos + 1));
		}



		//suppress element from first to lasr
		iterator erase(iterator first, iterator last)
		{
			difference_type diff = last - first;
			
			if (diff <= 0)
				return last;

			difference_type pos = first - _ptr;

			for (difference_type i = pos; i < pos + diff; ++i)
				_alloc.destroy(_ptr + i);

			for (difference_type i = pos + diff; i < difference_type(_size); ++i)
			{
				_alloc.construct(_ptr + i - diff, *(_ptr + i));
				_alloc.destroy(_ptr + i);
			}

			_size -= size_type(diff);
			return (first);
		}





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