#include "red_black_tree.hpp"

/*************************** print tree *********************************/
template<class k, class v>
int	print_tree(ft::map<k, v> _root, int space) //you might be modifier your parameter name
{
	if (!_root)
		return (0);
	space += 10;

	print_tree(_root->_left, space);

	std::cout<<"\n\n";
	for (int i = 0; i < space; i++)
		std::cout <<" ";
	if (_root->_black == false)
		std::cout << "\033[4;31m"<<_root->_key << "\033[0m";
	else
		std::cout << _root->_key;
	print_tree(_root->_right, space);
	return (1);
}