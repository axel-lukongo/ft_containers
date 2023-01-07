#ifndef RED_BLACK_TREE_H
#define RED_BLACK_TREE_H
#include<iostream>

template<typename k, typename v>
struct node{
	//this is my key and my value
	k _key;
	v _value;
	// _leftchild is for know if the node are on the left or right to the parent
	// _black is just for know if the node is black else i considered this as red
	bool _black, _leftchild;
	//here i stock my nodes in the appropriet nodes;
	node<k,v> *_left, *_right, *_parent;
	
	public:
		node(k key, v val):_key(key), _value(val){
			_left = _right = _parent = NULL;
			_black = _leftchild = false;
		}
};




template<typename k, typename v>
class red_black_tree
{
private:
	node<k, v> *_root;

	//count is for have the number of element in my tree
	size_t count;
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
	/*                        function                          */
	/************************************************************/

	/*In this function i add a new value in my tree else
	i call the second function add */
	void add(k key, v value){
		node<k, v> *_node = new node<k, v>(key, value);
		if (_root == NULL){
			_root = _node;
			_root->_black = true;
			count++;
		}
		else{
			add(_root, _node);
			count++;
		}
	}

	int print_tree(int space){
		print_tree(_root, space);
		return(1);
	}

	/*first i have to check the aunt of the node where we are*/
	
	void correct_violation(node<k, v> *tmp_node){
		
		/*for check the aunt: if parent are in left 
		of the grand parent i check the right of the grand parent else 
		i check the left of grand parent*/

		if(tmp_node->_parent->_leftchild == true){ //if the parent is on the left on grand parent
			if (tmp_node->_parent->_parent->_right->_black == true ||
			tmp_node->_parent->_parent->_right == NULL ){ //if the aunt is black
				//rotate
			}
			else{
				//flip color
			}
		}
		else{
			if (tmp_node->_parent->_parent->_left->_black == true || 
			tmp_node->_parent->_parent->_left == NULL){ //if the aunt is black
				//rotate
			}
			else{
				//flip color
			}

		}
	}

	void check_color(node<k, v> *tmp_node){
		if(tmp_node == _root)
			return;
		if (!tmp_node->_black && !tmp_node->_parent->_black){
			correct_violation(tmp_node);
		}
		check_color(tmp_node->_parent);
	}

private:
		void add(node<k, v> *_parent, node<k, v> *new_node){
			if(_parent->_key >= new_node->_key){
				if(_parent->_left == NULL){
					_parent->_left = new_node;
					new_node->_parent = _parent;
					new_node->_leftchild = true;
					new_node->_black = false;
				}
				else
					return add(_parent->_left, new_node);
			}
			else{
				if (_parent->_right == NULL){
					_parent->_right = new_node;
					new_node->_parent = _parent;
					new_node->_leftchild = false;
					new_node->_black = false;
				}
				else
					return add(_parent->_right, new_node);
			}
			check_color();
		}

	int	print_tree(node<k,v> *_root, int space)
	{
		if (!_root)
			return (0);
		space += 10;

		print_tree(_root->_right, space);

		std::cout<<"\n\n";
		for (int i = 0; i < space; i++)
			std::cout <<" ";
		if (_root->_black == false)
			std::cout << "\033[4;31m"<<_root->_value << "\033[0m";
		else
			std::cout << _root->_value;
		print_tree(_root->_left, space);
		return (1);
	}


};


#endif // !RED_BLACK_TREE_H