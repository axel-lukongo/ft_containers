#ifndef ITERATOR_HPP
#include <iostream>
#include "../vector.hpp"

template <typename Vector>
class iterator
{
public:
	using ValuType = typename Vector::Valuetype;
	using PointerType = typename Vector::ValueType*;
	using ReferenceType = typename Vector::ValueType&;
public:
/************************************************************/
/*                        constructor                       */
/************************************************************/
	iterator(PointerType ptr): _ptr(ptr){}
	iterator(iterator & copy){
		_ptr = copy._ptr;
		*this = copy;
	}
/************************************************************/
/*                        operators                         */
/************************************************************/
	iterator& operator=(iterator & copy){
		_ptr = copy._ptr;
		return *this;
	}

	iterator& operator++(){
		_ptr++;
		return(*this);
	}

	iterator operator++(int){
		iterator it = *this;
		++*this;
		return(it);
	}

	iterator& operator--(){
		_ptr--;
		return(*this);
	}

	iterator operator--(int){
		iterator it = *this;
		--*this;
		return(it);
	}
	iterator operator[](int i){return *_ptr + i;}

	PointerType operator->(){return _ptr;}

	ReferenceType operator*(){return *_ptr;}

	bool operator==(iterator & other) const{
		return(other._ptr == _ptr);
	}

	bool operator!=(iterator & other) const{
		return(other._ptr != _ptr);
	}


/************************************************************/
/*                        destructor                        */
/************************************************************/
	~iterator(){}

private:
	PointerType _ptr;
};

#endif // !ITERATOR_HPP