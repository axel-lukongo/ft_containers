/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   red_black_tree.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:24:02 by alukongo          #+#    #+#             */
/*   Updated: 2023/02/01 17:41:44 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	// is_leftchild is for know if the node are on the left or right to the parent
	// _black is just for know if the node is black else i considered this as red
	bool _black;
	bool is_leftchild;
	
	//here i stock my nodes in the appropriet nodes;
	node<k,v> *right, *left;
	node<k,v> *_parent;

	public:
		node(k key, v val):_key(key, val){
			right = left = _parent = NULL;
			_black = is_leftchild = false;
		}
};


namespace ft{

	template<class k,
	class v,
	class compare >

	class red_black_tree
	{

		//_count is for have the number of element in my tree
	public:
		typedef node<k,v>												Node;
		typedef ft::pair<k, v>											value_type;
		typedef	std::allocator<ft::pair<const k, v> >					allocator_type;
		typedef value_type												val_type;
		typedef typename value_type::first_type							key_type;
		typedef typename value_type::second_type 						mapped_type;
		// typedef typename allocator_type::reference			reference; 
		// typedef typename allocator_type::const_reference	const_reference;
		// typedef typename allocator_type::pointer			pointer;
		// typedef typename allocator_type::const_pointer		const_pointer;


		typedef Node													node_type;
		typedef node_type*												node_ptr ;
		typedef node_type&												node_ref;
		typedef typename ft::red_black_tree_iterator<Node>				iterator;
		typedef typename ft::const_red_black_tree_iterator<Node>		const_iterator;
		typedef typename ft::reverse_iterator<const_iterator>			const_reverse_iterator;
		typedef typename allocator_type::template rebind<Node>::other	node_alloc;
		typedef typename allocator_type::size_type						size_type;
	private:
		size_type				_count;
		node_ptr				_root;
		std::allocator<Node>	_alloc;
		node_alloc				_alloc_node;
		compare					_cmp;
	public:
		
		/************************************************************/
		/*                        constructor                       */
		/************************************************************/

		red_black_tree(): _root(NULL){
			_count = 0;
		};

		/************************************************************/
		/*                          operator                        */
		/************************************************************/
		red_black_tree& operator=(red_black_tree& x){
			_count = x._count;
			_root = x._root;
			_alloc = x._alloc;
			_alloc_node = x._alloc_node;
			_cmp = x._cmp;
		}

		/************************************************************/
		/*                        destructor                        */
		/************************************************************/
		~red_black_tree(){
			clear_tree(_root);
		};

		v get_val(){return _root->_value;}
		v getright(){return _root->right->_value;}
		v getleft(){return _root->left->_value;}
		/************************************************************/
		/*                         capacity                         */
		/************************************************************/
		bool empty() const{
			if (_count > 0)
				return false;
			return true;
		}

		size_type size() const{
			return _count;
		}

		size_type max_size() const{
			return _alloc.max_size();
		}

		/************************************************************/
		/*                        function                          */
		/************************************************************/

	//*************************** add *********************************/
		/*In this function i add a new value in my tree else
		i call the second function add */
		ft::pair<iterator, bool> add_one(const value_type &val){
			if (_root == NULL){ //if my tree is empty
				_root = _alloc.allocate(sizeof(Node));
				_alloc.construct(_root,  Node(val.first, val.second));
				_root->_black = true;
				_count++;
				return ft::make_pair<iterator, bool>(iterator(_root, NULL), true);
			}
			else{
				node_ptr  _node = _alloc.allocate(1);
				_alloc.construct(_node,  Node(val.first, val.second));
				node_ptr ptr = find_node(_node->_key.first);
				if(_root->_key.first == _node->_key.first || ptr != NULL){ // if this key doesn't exist yet
					_alloc_node.destroy(_node);
					_alloc_node.deallocate(_node, 1);
					return ft::make_pair<iterator, bool>(iterator(ptr, NULL), false);
				}
				add(_root, _node);
				return ft::make_pair<iterator, bool>(iterator(_node, NULL), true);
			}
		}


		ft::pair<iterator, bool> add_one(iterator position, const value_type &val){
			if (_root == NULL){ //if my tree is empty
				_root = _alloc.allocate(sizeof(Node));;
				_alloc.construct(_root,  Node(val.first, val.second));
				_root->_black = true;
				_count++;
				return ft::make_pair<iterator, bool>(iterator(_root, NULL), true);
			}
			else{
				node_ptr  _node = _alloc.allocate(1);
				_alloc.construct(_node,  Node(val.first, val.second));
				if (position.base()){
					node_ptr ptr = position.base();
					while (!_cmp(_node->_key.first,ptr->_key.first) && ptr->_parent)
						ptr = ptr->_parent;
					add(ptr, _node);
				}
				else{
					if(_root->_key.first == _node->_key.first || find_node(_node->_key.first) != NULL){
						_alloc_node.destroy(_node);
						_alloc_node.deallocate(_node, 1);
						return ft::make_pair<iterator, bool>(iterator(_node, NULL), false);
					}
					add(_root, _node);
				}
				return ft::make_pair<iterator, bool>(iterator(_node, NULL), true);
			}
		}


	private:
	//*************************** private add *********************************/
			void add(node_ptr _parent, node_ptr new_node){
				size_type check_add = _count;
				if(_cmp(_parent->_key.first, new_node->_key.first)){
					if(_parent->right == NULL){
						_parent->right = new_node;
						new_node->_parent = _parent;
						new_node->is_leftchild = true;
						new_node->_black = false;
						_count++;
					}
					else
						return add(_parent->right, new_node);
				}
				else if ( _cmp(new_node->_key.first, _parent->_key.first)){
					if (_parent->left == NULL){
						_parent->left = new_node;
						new_node->_parent = _parent;
						new_node->is_leftchild = false;
						new_node->_black = false;
						_count++;
					}
					else
						return add(_parent->left, new_node);
				}
				if (check_add != _count)
					check_color(new_node);
				else{
					_alloc_node.destroy(new_node);
					_alloc_node.deallocate(new_node, 1);
				}
			}

	public:
		int print_tree(int space){
			print_tree(_root, space);
			return(1);
		}


		void	swap(red_black_tree& x) {
			node_ptr	tmp_node = _root;
			compare		tmp_key = _cmp;
			node_alloc	tmp_node_alloc = _alloc_node;
			size_type	tmp_count = _count;

			_root = x._root;
			_cmp = x._cmp;
			_alloc_node = x._alloc_node;
			_count = x._count;
			
			x._root = tmp_node;
			x._cmp = tmp_key;
			x._alloc_node = tmp_node_alloc;
			x._count = tmp_count;

		}



	//*************************** find *********************************/
			iterator	find(const key_type& my_key) {
				node_ptr ptr = _root;
				while (ptr) {
					if (_cmp(ptr->_key.first, my_key)) // if ptr->_key.first < my_key, _cmp will return true.
						ptr = ptr->right;
					else if (_cmp(my_key, ptr->_key.first))
						ptr = ptr->left;
					else
						return iterator(ptr, NULL);
				}
				return iterator(ptr, NULL);
			}

			const_iterator	find(const key_type& my_key) const {
				node_ptr ptr = _root;
				while (ptr) {
					if (_cmp(ptr->_key.first, my_key))
						ptr = ptr->right;
					else if (_cmp(my_key, ptr->_key.first))
						ptr = ptr->left;
					else
						return const_iterator(ptr, NULL);
				}
				return const_iterator(ptr, NULL);
			}



	//*************************** lower_bound *********************************/
			iterator	lower_bound (const key_type& my_key){
				iterator ptr = begin();
				iterator save = end();
				while (ptr != save){
					if (_cmp(ptr->first, my_key)){
						ptr++;
					}
					else
						return ptr;
				}
				return save;
			}

	//*****************************************************/
			const_iterator	lower_bound (const key_type& my_key) const{
				const_iterator ptr = cbegin();
				const_iterator save = cend();
				while (ptr != save){
					if (_cmp(ptr->first, my_key)){
						ptr++;
					}
					else
						return ptr;
				}
				return save;
			}





	//*************************** upper_bound *********************************/
			iterator	upper_bound (const key_type& my_key){
				iterator ptr = begin();
				iterator save = end();
				while (ptr != save){
					if (_cmp(ptr->first, my_key)){
						ptr++;
					}
					else if(!_cmp(ptr->first, my_key) && !_cmp(my_key, ptr->first))
						return ++ptr;
					else
						return ptr;
				}
				return save;
			}
	//*****************************************************/
			const_iterator	upper_bound (const key_type& my_key) const{
				const_iterator ptr = cbegin();
				const_iterator save = cend();
				while (ptr != save){
					if (_cmp(ptr->first, my_key)){
						ptr++;
					}
					else if(!_cmp(ptr->first, my_key) && !_cmp(my_key, ptr->first))
						return ++ptr;
					else
						return ptr;
				}
				return save;
			}






	//***************************** count **********************************/
			size_type	count(const key_type& my_key) const {
				node_ptr ptr;

				ptr = _root;
				while (ptr) {
					if (_cmp(ptr->_key.first, my_key))
						ptr = ptr->right;
					else if (_cmp(my_key, ptr->_key.first))
						ptr = ptr->left;
					else
						return 1;
				}
				return 0;
			}







	//***************************** erase **********************************/

			size_type erase(const key_type& my_key){
				node_ptr ptr = _root;
				//first i have to find the correct value to delete
				while (ptr){
					if (_cmp(ptr->_key.first, my_key))
						ptr = ptr->right;
					else if (_cmp(my_key, ptr->_key.first))
						ptr = ptr->left;
					else{
						remove_node(ptr);
						return 1;
					}
				}
				return 0;
			}
			private:
			void remove_node(node_ptr z){
				node_ptr x, y;
				bool original_color;

				y = z;
				original_color = y->_black;
				if (!z->left) {
					x = z->right;
					_transplant(z, z->right);
				}
				else if (!z->right) {
					x = z->left;
					_transplant(z, z->left);
				}
				else {
					y = _minimum(z->right);
					original_color = y->_black;
					x = y->right;

					if(x && y->_parent == z) {
						x->_parent = y;
					}
					else {
						_transplant(y, y->right);
						y->right = z->right;
						if (y->right) {
							y->right->_parent = y;
						}
					}
					_transplant(z, y);
					y->left = z->left;
					if (y->left) {
						y->left->_parent = y;
					}
					y->_black = z->_black;
				}
				_alloc_node.destroy(z);
				_alloc_node.deallocate(z, sizeof(node_ptr));
				_count--;
				if (original_color == true) //if the color of the node who i delete was black 
					fixe_delete(x);
			}

			private:
			void	_transplant(node_ptr u, node_ptr va) {
					if (!u->_parent) {
						_root = va;
					}
					else if (u == u->_parent->left) {
						u->_parent->left = va;
					}
					else 
						u->_parent->right = va;
					if (va)
						va->_parent = u->_parent;
				}


			node_ptr	_minimum(node_ptr x) const {
				if (!x)
					return NULL;
				if (x->left)
					return	_minimum(x->left);
				return x;
			}


			void fixe_delete(node_ptr x){
				while (x && x != _root && x->_black == true) {
							if (x == x->_parent->left) { // this condition is when 
								node_ptr w = x->_parent->right;
								if (w->_black == false) {
									w->_black = true;
									x->_parent->_black = false;
									left_rotation(x->_parent);
									w = x->_parent->right;
								}
								if ((!w->right || w->right->_black == true) && (!w->left || w->left->_black == true)) {
									w->_black = false;
									x = x->_parent;
								}
								else {
									if (!w->right || w->right->_black == true) {
										w->left->_black = true;
										w->_black = false;
										right_rotation(w);
										w = x->_parent->right;
									}
									w->_black = x->_parent->_black;
									if (x->_parent->_parent)
										x->_parent->_parent->_black = true;
									if (w->right)
										w->right->_black = true;
									left_rotation(x->_parent);
									x = _root;
								}
							}
							else {
								node_ptr w = x->_parent->left;
								if (w->_black == false) {
									w->_black = true;
									x->_parent->_black = false;
									right_rotation(x->_parent);
									w = x->_parent->left;
								}
								if ((!w->right || w->right->_black == true) && (!w->left || w->left->_black == true)) {
									w->_black = false;
									x = x->_parent;
								}
								else {
									if (!w->left || w->left->_black == true) {
										w->right->_black = true;
										w->_black = false;
										left_rotation(w);
										w = x->_parent->left;
									}
									w->_black = x->_parent->_black;
									if (x->_parent->_parent)
										x->_parent->_parent->_black = true;
									if (w->left)
										w->left->_black = true;
									right_rotation(x->_parent);
									x = _root;
								}
							}
						}
						if (x)
							x->_black = true;
			}
		public:


		/************************************************************/
		/*                    check violation                       */
		/************************************************************/

		/*first i have to check the aunt of the node where we are*/
		void correct_violation(node_ptr my_node){
			
			/*for check the aunt: if parent are in left 
			of the grand parent i check the right of the grand parent else 
			i check the left of grand parent*/
			if(my_node->_parent->is_leftchild == true){ //if the current parent is on the left on grand parent
				if (my_node->_parent->_parent->left == NULL ||
					my_node->_parent->_parent->left->_black == true){ //if the aunt is black or null
					rotate(my_node);//rotate
				}
				else{
					// i got to do a flip color
					if(my_node->_parent->_parent->left != NULL)
						my_node->_parent->_parent->left->_black = true;
					my_node->_parent->_parent->_black = false;
					my_node->_parent->_black = true;
				}
			}
			else{
				if (my_node->_parent->_parent->right == NULL ||
					my_node->_parent->_parent->right->_black == true){ //if the aunt is black or null
					rotate(my_node);//rotate
				}
				else{
					// i got to do a flip color
					if(my_node->_parent->_parent->right != NULL)
						my_node->_parent->_parent->right->_black = true;
					my_node->_parent->_parent->_black = false;
					my_node->_parent->_black = true;
				}

			}
			_root->_black = true;
		}


	//****************************************************************************

	// 	int height(){
	// 		if(_root == NULL)
	// 			return 0;
	// 		else
	// 			return(height(_root) - 1);
	// 	}
	// //****************************************************************************
	// 	int height(node<k,v> *my_node){
	// 		if(my_node == NULL)
	// 			return 0;
	// 		int left_height = height(my_node->right)+1;
	// 		int right_height = height(my_node->left)+1;

	// 		if(left_height > right_height)
	// 			return left_height;
	// 		return right_height;
	// 	}
	//****************************************************************************

	// 	int black_node(){
	// 		if(_root == NULL)
	// 			return 0;
	// 		return black_node(_root);
	// 	}
	// //****************************************************************************
	// 	int black_node(node<k,v> *my_node){
	// 		if(my_node == NULL)
	// 			return 1;

	// 		int blacknode1 = black_node(my_node->right);
	// 		// int blacknode2 = black_node(my_node->left);

	// 		if (my_node->_black == true)
	// 			blacknode1++;

	// 		return blacknode1;
	// 	}

		/************************************************************/
		/*                      rotation part                       */
		/************************************************************/

	//*************************** rotate *********************************
		void rotate(node_ptr my_node){
			if(my_node->is_leftchild == true){
				if(my_node->_parent->is_leftchild == true){
					left_rotation(my_node->_parent->_parent); //left rotation
					my_node->_black = false;
					my_node->_parent->_black = true;
					if (my_node->_parent->left != NULL)
						my_node->_parent->left->_black = false;
				}
				else{
					left_right_rotation(my_node->_parent->_parent); // left right rotation
					my_node->_black = true;
					if (my_node->_parent->right != NULL)
						my_node->right->_black = true;
					if (my_node->left != NULL)
						my_node->left->_black = false;

				}
			}
			else{ // it mean the current node is on the right
				if(my_node->_parent->is_leftchild == false){//if is on the right
					right_rotation(my_node->_parent->_parent); //right rotation
					my_node->_black = false;
					my_node->_parent->_black = true;
					if (my_node->_parent->right != NULL)
						my_node->_parent->right->_black = false;
				}
				else{
					right_left_rotation(my_node->_parent->_parent); //right left  rotation
					my_node->_black = true;
					if (my_node->right != NULL)
						my_node->right->_black = false;
					if (my_node->left != NULL)
						my_node->left->_black = false;

				}
			}
		}

	//*************************** right rotation *********************************
		void right_rotation(node_ptr my_node){
			node_ptr tmp_node = my_node->left;
			
			my_node->left = tmp_node->right;

			if (my_node->left != NULL){
				my_node->left->_parent = my_node;
				my_node->left->is_leftchild = false;
			}

			if (my_node->_parent == NULL){
				_root = tmp_node;
				tmp_node->_parent = NULL;
			}
			else{
				tmp_node->_parent = my_node->_parent;
				if(my_node->is_leftchild){
					tmp_node->is_leftchild = true;
					tmp_node->_parent->right = tmp_node;
				}
				else{
					tmp_node->is_leftchild = false;
					tmp_node->_parent->left = tmp_node;
				}
			}
			tmp_node->right = my_node;
			my_node->is_leftchild = true;
			my_node->_parent = tmp_node;

		}
		void right_left_rotation(node_ptr my_node){
			right_rotation(my_node->right);
			left_rotation(my_node);

		}

	//*************************** left rotation *********************************/
		void left_rotation(node_ptr my_node){
			node_ptr tmp_node = my_node->right;
			
			my_node->right = tmp_node->left;

			if (my_node->right != NULL){
				my_node->right->_parent = my_node;
				my_node->right->is_leftchild = true;
			}

			if (my_node->_parent == NULL){
				_root = tmp_node;
				tmp_node->_parent = NULL;
			}
			else{
				tmp_node->_parent = my_node->_parent;
				if(my_node->is_leftchild){
					tmp_node->is_leftchild = true;
					tmp_node->_parent->right = tmp_node;
				}
				else{
					tmp_node->is_leftchild = false;
					tmp_node->_parent->left = tmp_node;
				}
			}
			tmp_node->left = my_node;
			my_node->is_leftchild = false;
			my_node->_parent = tmp_node;
		}


		void left_right_rotation(node_ptr my_node){
			left_rotation(my_node->left);
			right_rotation(my_node);
		}

	//**************************** check colors *******************************/
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

	//***************************** BEGIN *********************************/
		node_ptr  find_begin() const{
			if(_root != NULL){
				node_ptr  ptr = _root;
				while(ptr->left)
					ptr = ptr->left;
				return ptr;
			}
			return(NULL);
		}

		iterator begin(){
			return iterator(find_begin(), NULL);
		}

		const_iterator cbegin() const{
			return const_iterator(find_begin(), NULL);
		}

	//****************************** END *********************************/
		node_ptr  find_end() const {
			if(_root != NULL){
				node_ptr  ptr = _root;
				while(ptr->right)
					ptr = ptr->right;
				return ptr;
			}
			return(NULL);
		}


		iterator crend(){
			return iterator(NULL, find_end());
		}

		iterator end(){
			return iterator(NULL, find_end());
		}

		const_iterator cend() const {
			return const_iterator(NULL, find_end());
		}

		void clear_tree(){
			_root = clear_tree(_root);
			_count = 0;
		}

	// private:
		/************************************************************/
		/*                          CLEAR                           */
		/************************************************************/
			node_ptr	clear_tree(node_ptr _root){
				if (!_root)
					return NULL;	
				if (_root->right)
					clear_tree(_root->right);
				if (_root->left)
					clear_tree(_root->left);
				_alloc_node.destroy(_root);
				_alloc_node.deallocate(_root, 1);
				_root = NULL;
				return NULL;
			}


		private:
		/*************************** print tree *********************************/
		// int determine_side_child(node_ptr _root){
		// 	if (!_root)
		// 		return (0);

		// 	determine_side_child(_root->left);
		// 	if(_root->_parent){
		// 		if(_root->_parent->left == _root)
		// 			_root->is_leftchild = true;
		// 		else
		// 			_root->is_leftchild = false;
		// 	}
		// 	determine_side_child(_root->right);

		// 	return (1);
		// }
		int	print_tree(node_ptr _root, int space)
		{
			if (!_root)
				return (0);
			space += 10;

			print_tree(_root->left, space);

			std::cout<<"\n\n";
			for (int i = 0; i < space; i++)
				std::cout <<" ";
			if (_root->_black == false){
				if (_root->is_leftchild == true)
					std::cout << "↖️";
				else
					std::cout << "↙️";
				std::cout << "\033[4;31m"<<_root->_key.first << "\033[0m";
			}
			else{
				if (_root->is_leftchild == true)
					std::cout << "↖️";
				else
					std::cout << "↙️";
				std::cout <<_root->_key.first;
			}
			print_tree(_root->right, space);

			return (1);
		}

		node_ptr find_node(key_type &my_key){
			node_ptr ptr = _root;
			if(my_key){
				while (ptr){
					if (_cmp(my_key, ptr->_key.first))
						ptr = ptr->left;
					else if (_cmp( ptr->_key.first, my_key))
						ptr = ptr->right;
					else
						return ptr;
				}
			}
			return NULL;
		}
	};
}
#endif // !RED_BLACK_TREE_H