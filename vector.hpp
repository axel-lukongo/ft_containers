#ifndef VECTOR_H
#define VECTOR_H

#include<iostream>

template<typename T>

class ft_vector
{
private:
	T *arr;
	int _size;
	int _capacity;
public:
	ft_vector(){_size = _capacity = 0;}
	ft_vector(int num){
		_size = _capacity = num;
		arr = new T[num];
	}
	~ft_vector(){}

	void new_allocation(){
		T *tmp = new T[_size + 5];
		_capacity = _size + 5;
		for (int i = 0; i < _size; i++){
			tmp[i] = arr[i];
		}
		arr = tmp;
		delete [] tmp;
	}

	void ft_push_back(T element){
		if (_capacity == _size){
			new_allocation();
		}
		arr[_size] = element;
		_size++;
	}

	void ft_pop_back(){
		if (_size <= 0){
			std::cout << "impossible to pop back" << std::endl;
			return ;
		}
		_size--;
	}
	
	// void insert(T element)

	T & operator[](int index){
		return arr[index];
	}

	// int size(){ return _size; }

	// int capacity(){ return _capacity;}
};



#endif // !VECTOR_H