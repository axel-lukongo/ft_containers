/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:33:58 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/14 13:40:43 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
#define VECTOR_H
#include "iterator/iterator.hpp"

template<typename T>

class ft_vector
{
private:
	T *_arr;
	int _size;
	int _capacity;
public:
	using Valuetype = T;
	using iterator = iterator<ft_vector<T>>;
public:

/************************************************************/
/*                        constructor                       */
/************************************************************/
	ft_vector(){_size = _capacity = 0;}
	ft_vector(int num){
		_size = _capacity = num;
		_arr = new T[num];
	}

	ft_vector(ft_vector & copy){
		_arr = copy._arr;
		_size = copy._size;
		_capacity = copy._capacity;
	}



/************************************************************/
/*                        operators                         */
/************************************************************/

	T & operator[](int index){
		return _arr[index];
	}

	ft_vector& operator=(ft_vector & copy){
		_arr = copy._arr;
		_size = copy._size;
		_capacity = copy._capacity;
		return *this;
	}



/************************************************************/
/*                        destructor                        */
/************************************************************/
	~ft_vector(){}



/************************************************************/
/*                        modifiers                         */
/************************************************************/
	void new_allocation(){
		T *tmp = new T[_size + 5];
		_capacity = _size + 5;
		for (int i = 0; i < _size; i++){
			tmp[i] = _arr[i];
		}
		_arr = tmp;
		delete [] tmp;
	}

	void ft_push_back(T element){
		if (_capacity == _size){
			new_allocation();
		}
		_arr[_size] = element;
		_size++;
	}

	void ft_pop_back(){
		if (_size <= 0){
			std::cout << "impossible to pop back" << std::endl;
			return ;
		}
		_size--;
	}
	
	// void insert(iterator position){}
	
	//void erase(iterator position){}
	//void swap(ft_vector & x){}
	//void clear(){}
	//iterator emplace(){}
	//emplace_back(){}

	
	/************************************************************/
	/*                        capacity                          */
	/************************************************************/
	// int size(){ return _size; }
	// int size_maxe(){}
	// void resize(int){}
	// int capacity(){ return _capacity;}
	// bool empty(){}
	// void reserve(int){}
	// void shrink_to_fit(){}




	/************************************************************/
	/*                        iterator                          */
	/************************************************************/
	iterator begin(){return iterator(_arr);}
	iterator end(){ return iterator(_arr + _size);}
	// reverse_iterator rbegin(){}
	// reverse_iterator rend(){}
	// const_iterator cbegin(){}
	// const_iterator cend(){}
	//const_reverse_iterator crbegin(){}
	//const_reverse_iterator crend(){}
};



#endif // !VECTOR_H