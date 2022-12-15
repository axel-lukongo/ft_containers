#ifndef ITERATOR_HPP
#include <iostream>
#include "../vector.hpp"
#include <cstddef>
// #include"iterator.hpp"

template <typename Vector>
class Iterator{

public:
	typedef typename Vector ValueType;
	typedef Vector* PointerType;
	typedef Vector& ReferenceType;


private:
	PointerType _ptr;

public:




/************************************************************/
/*                        constructor                       */
/************************************************************/
	Iterator(PointerType ptr): _ptr(ptr){}


	Iterator(void){}
	

	Iterator(Iterator & copy){
		_ptr = copy._ptr;
		*this = copy;
	}


/************************************************************/
/*                        operators                         */
/************************************************************/
	Iterator& operator=(Iterator & copy){
		_ptr = copy._ptr;
		return *this;
	}


	Iterator& operator++(){
		_ptr++;
		return(*this);
	}


	// iterator operator++(int){
	// 	iterator it = *this;
	// 	++*this;
	// 	return(it);
	// }

	Iterator& operator--(){
		_ptr--;
		return(*this);
	}

	// iterator operator--(int){
	// 	iterator it = *this;
	// 	--*this;
	// 	return(it);
	// }
	// iterator operator[](int i){return *_ptr + i;}

	ReferenceType operator*(){return (*_ptr);}


	PointerType operator->(){return &(*_ptr);}


	bool operator==(Iterator & other) const{
		return(other._ptr == _ptr);
	}


	bool operator!=(Iterator & other) const{
		return(other._ptr != _ptr);
	}


/************************************************************/
/*                        destructor                        */
/************************************************************/
	~Iterator(){}

};

#endif // !ITERATOR_HPP