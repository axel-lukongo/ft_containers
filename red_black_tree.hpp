#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H
#include<iostream>
#include "iterator/iterator_traits.hpp"
#include"iterator/pair.hpp"
#include "iterator/red_black_tree_iterator.hpp"
#include"iterator/reverse_iterator.hpp"

template<class k, class v>
struct node{
	//this is my key and my value
	typedef  ft::pair<k, v> value_type;
	value_type _key;
	// v _value;
	// _is_leftchild is for know if the node are on the left or right to the parent
	// _black is just for know if the node is black else i considered this as red
	bool _black, _is_leftchild;
	//here i stock my nodes in the appropriet nodes;
	node<k,v> *_left, *_right, *_parent;

	public:
		node(k key, v val):_key(key, val){
			_left = _right = _parent = NULL;
			_black = _is_leftchild = false;
		}
};


namespace ft{

template<class k,
class v,
class Alloc = std::allocator<std::pair<const k, v> >,
class Node = node<k,v> >

class red_black_tree
{

	//count is for have the number of element in my tree
	size_t count;
public:
	typedef ft::pair<k, v>								value_type;
	typedef Alloc										allocator_type;
	typedef k key_type;
	typedef v val_type;
	// typedef typename allocator_type::reference			reference; 
	// typedef typename allocator_type::const_reference	const_reference;
	// typedef typename allocator_type::pointer			pointer;
	// typedef typename allocator_type::const_pointer		const_pointer;


	typedef Node								node_type;
	typedef node_type*							node_ptr ;
	typedef node_type&							node_ref;
	typedef typename ft::red_black_tree_iterator<Node>	iterator;
	typedef typename ft::const_red_black_tree_iterator<Node>	const_iterator;

private:
	node_ptr  _root;
	std::allocator<Node> alloc;
public:
	
	/************************************************************/
	/*                        constructor                       */
	/************************************************************/

	red_black_tree(): _root(NULL){
		count = 0;
	};

	/************************************************************/
	/*                        destructor                        */
	/************************************************************/
	~red_black_tree(){

	};

	v get_val(){return _root->_value;}
	v get_left(){return _root->_left->_value;}
	v get_right(){return _root->_right->_value;}
	/************************************************************/
	/*                        functions                         */
	/************************************************************/

	/*In this function i add a new value in my tree else
	i call the second function add */
	ft::pair<iterator, bool> add_one(const value_type &val){
		node_ptr  _node = alloc.allocate(1);
		alloc.construct(_node, val.first, val.second);
		if (_root == NULL){ //if my tree is empty
			_root = alloc.allocate(sizeof(Node));;
			alloc.construct(_root, val.first, val.second);
			_root->_black = true;
			count++;
			return ft::make_pair<iterator, bool>(iterator(_root, NULL), true);
		}
		else{
			add(_root, _node);
		}
		return ft::make_pair<iterator, bool>(iterator(_root, NULL), true);

	}

	int print_tree(int space){
		print_tree(_root, space);
		return(1);
	}





/*************************** correct violation *********************************/
	/*first i have to check the aunt of the node where we are*/
	void correct_violation(node_ptr my_node){
		
		/*for check the aunt: if parent are in left 
		of the grand parent i check the right of the grand parent else 
		i check the left of grand parent*/
		if(my_node->_parent->_is_leftchild == true){ //if the current parent is on the left on grand parent
			if (my_node->_parent->_parent->_right == NULL ||
				my_node->_parent->_parent->_right->_black == true){ //if the aunt is black or null
				rotate(my_node);//rotate
			}
			else{
				// i got to do a flip color
				if(my_node->_parent->_parent->_right != NULL)
					my_node->_parent->_parent->_right->_black = true;
				my_node->_parent->_parent->_black = false;
				my_node->_parent->_black = true;
			}
		}
		else{
			if (my_node->_parent->_parent->_left == NULL ||
				my_node->_parent->_parent->_left->_black == true){ //if the aunt is black or null
				rotate(my_node);//rotate
			}
			else{
				// i got to do a flip color
				if(my_node->_parent->_parent->_left != NULL)
					my_node->_parent->_parent->_left->_black = true;
				my_node->_parent->_parent->_black = false;
				my_node->_parent->_black = true;
			}

		}
		_root->_black = true;
	}



	int height(){
		if(_root == NULL)
			return 0;
		else
			return(height(_root) - 1);
	}

	int height(node<k,v> *my_node){
		if(my_node == NULL)
			return 0;
		int left_height = height(my_node->_left)+1;
		int right_height = height(my_node->_right)+1;

		if(left_height > right_height)
			return left_height;
		return right_height;
	}

	int black_node(){
		if(_root == NULL)
			return 0;
		return black_node(_root);
	}

	int black_node(node<k,v> *my_node){
		if(my_node == NULL)
			return 1;

		int blacknode1 = black_node(my_node->_left);
		int blacknode2 = black_node(my_node->_right);

		if (my_node->_black == true)
			blacknode1++;

		return blacknode1;
	}


	/************************************************************/
	/*                      rotation part                       */
	/************************************************************/

	/*************************** rotate *********************************/

	void rotate(node_ptr my_node){
		if(my_node->_is_leftchild == true){
			if(my_node->_parent->_is_leftchild == true){
				right_rotation(my_node->_parent->_parent); //right rotation
				my_node->_black = false;
				my_node->_parent->_black = true;
				if (my_node->_parent->_right != NULL)
					my_node->_parent->_right->_black = false;
			}
			else{
				right_left_rotation(my_node->_parent->_parent); //right left rotation
				my_node->_black = true;
				if (my_node->_parent->_left != NULL)
					my_node->_left->_black = true;
				if (my_node->_right != NULL)
					my_node->_right->_black = false;

			}
		}
		else{ // it mean the current node is on the right
			if(my_node->_parent->_is_leftchild == false){//if is on the right
				left_rotation(my_node->_parent->_parent); //left rotation
				my_node->_black = false;
				my_node->_parent->_black = true;
				if (my_node->_parent->_left != NULL)
					my_node->_parent->_left->_black = false;
			}
			else{
				left_right_rotation(my_node->_parent->_parent); //left right rotation
				my_node->_black = true;
				if (my_node->_left != NULL)
					my_node->_left->_black = false;
				if (my_node->_right != NULL)
					my_node->_right->_black = false;

			}
		}
	}




	/*************************** left rotation *********************************/
	void left_rotation(node_ptr my_node){
		node_ptr tmp_node = my_node->_right;
		
		my_node->_right = tmp_node->_left;

		if (my_node->_right != NULL){
			my_node->_right->_parent = my_node;
			my_node->_right->_is_leftchild = false;
		}

		if (my_node->_parent == NULL){
			_root = tmp_node;
			tmp_node->_parent = NULL;
		}
		else{
			tmp_node->_parent = my_node->_parent;
			if(my_node->_is_leftchild){
				tmp_node->_is_leftchild = true;
				tmp_node->_parent->_left = tmp_node;
			}
			else{
				tmp_node->_is_leftchild = false;
				tmp_node->_parent->_right = tmp_node;
			}
		}
		tmp_node->_left = my_node;
		my_node->_is_leftchild = true;
		my_node->_parent = tmp_node;

	}
	void left_right_rotation(node_ptr my_node){
		left_rotation(my_node->_left);
		right_rotation(my_node);

	}




	/*************************** right rotation *********************************/
	void right_rotation(node_ptr my_node){
		node_ptr tmp_node = my_node->_left;
		
		my_node->_left = tmp_node->_right;

		if (my_node->_left != NULL){
			my_node->_left->_parent = my_node;
			my_node->_left->_is_leftchild = false;
		}

		if (my_node->_parent == NULL){
			_root = tmp_node;
			tmp_node->_parent = NULL;
		}
		else{
			tmp_node->_parent = my_node->_parent;
			if(my_node->_is_leftchild){
				tmp_node->_is_leftchild = true;
				tmp_node->_parent->_left = tmp_node;
			}
			else{
				tmp_node->_is_leftchild = false;
				tmp_node->_parent->_right = tmp_node;
			}
		}
		tmp_node->_right = my_node;
		my_node->_is_leftchild = false;
		my_node->_parent = tmp_node;
	}
	void right_left_rotation(node_ptr my_node){
		right_rotation(my_node->_right);
		left_rotation(my_node);
	}







	/**************************** check colors *******************************/

	void check_color(node_ptr  my_node){
		if(my_node == _root || !my_node){

			return;
		}
		if (!my_node->_black && !my_node->_parent->_black){
			correct_violation(my_node);
		}
		check_color(my_node->_parent);
	}


	/************************************************************/
	/*                         capacity                         */
	/************************************************************/

	node_ptr  find_begin() const{
		if(_root != NULL){
			node_ptr  ptr = _root;
			while(ptr->_right)
				ptr = ptr->_right;
			return ptr;
		}
		return(NULL);
	}

	iterator begin(){
		return iterator(find_begin(), NULL);
	}

	const_iterator cbegin(){
		return const_iterator(find_begin(), NULL);
	}


	node_ptr  find_end() const {
		if(_root != NULL){
			node_ptr  ptr = _root;
			while(ptr->_left)
				ptr = ptr->_left;
			return ptr;
		}
		return(NULL);
	}

	typedef typename ft::reverse_iterator<const_iterator>				const_reverse_iterator;

	iterator crend(){
		return iterator(NULL, find_end());
	}

	iterator end(){
		return iterator(NULL, find_end());
	}

	const_iterator cend() const {
		return const_iterator(NULL, find_end());
	}

private:


	/*************************** private add *********************************/
		void add(node_ptr _parent, node_ptr new_node){
			int check_add = count;
			if(_parent->_key.first < new_node->_key.first){
				if(_parent->_left == NULL){
					_parent->_left = new_node;
					new_node->_parent = _parent;
					new_node->_is_leftchild = true;
					new_node->_black = false;
					count++;
				}
				else
					return add(_parent->_left, new_node);
			}
			else if (_parent->_key.first > new_node->_key.first){
				if (_parent->_right == NULL){
					_parent->_right = new_node;
					new_node->_parent = _parent;
					new_node->_is_leftchild = false;
					new_node->_black = false;
					count++;
				}
				else
					return add(_parent->_right, new_node);
			}
			if (check_add != count)
				check_color(new_node);
		}


	public:
	/*************************** print tree *********************************/
	int	print_tree(node<k,v> *_root, int space)
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


};

}
#endif // !RED_BLACK_TREE_H