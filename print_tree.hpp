#include "red_black_tree.hpp"

/*************************** print tree *********************************/
template<class Key, class T>

//put this function in your red_black_tree class
//you probably have to modify the type of the root
//you can call this function in yout destructor before to free your tree
int	print_tree(node<Key, T> _root, int space)
	{
		if (!_root)
			return (0);
		space += 10;

		print_tree(_root->_left, space);

		std::cout<<"\n\n";
		for (int i = 0; i < space; i++)
			std::cout <<" ";
		if (_root->_black == false){
			std::cout << "\033[4;31m"<<_root->_key.first << "\033[0m";
		}
		else
			std::cout <<_root->_key.first;
		print_tree(_root->_right, space);
		return (1);
	}
