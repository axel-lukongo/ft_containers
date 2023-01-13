#ifndef RED_BLACK_TREE_ITERATOR_H
#define RED_BLACK_TREE_ITERATOR_H

#include"pair.hpp"
#include"iterator_traits.hpp"

namespace ft{
	template <class Iterator>
	class red_black_tree_iterator
	{
	public:

		typedef				Iterator*								iterator_type;
		typedef typename	Iterator::v					value_type;

		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category	iterator_category;
		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type	difference_type;
		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::pointer			pointer;
		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference			reference;

		/************************************************************/
		/*                        constructor                       */
		/************************************************************/
		red_black_tree_iterator(): _node(NULL), _end(NULL){}

		red_black_tree_iterator(iterator_type node, iterator_type end):
		_node(node), _end(end){}

		red_black_tree_iterator(const red_black_tree_iterator& src) : _node(src._node), _end(src._end) {
		}

		red_black_tree_iterator&	operator=(const red_black_tree_iterator& src) {
			_node = src._node;
			_end = src._end;
			return *this;
		}

		/************************************************************/
		/*                        destructor                        */
		/************************************************************/
		~red_black_tree_iterator(){}


		/************************************************************/
		/*                         operator                         */
		/************************************************************/
		reference	operator*(void) const {
			return _node->data;
		}

		pointer	operator->(void) const {
			return &(_node->data);
		}

		iterator_type	base(void) const {
			return _node;
		}

		iterator_type	end(void) const {
			return _end;
		}


		red_black_tree_iterator&	operator++(void) {
			_increment_iterator();
			return *this;
		}

		red_black_tree_iterator	operator++(int) {
			red_black_tree_iterator	tmp;

			tmp = *this;
			_increment_iterator();
			return	tmp;
		}

		red_black_tree_iterator&	operator--(void) {
			_decrement_iterator();
			return *this;
		}

		red_black_tree_iterator	operator--(int) {
			red_black_tree_iterator	tmp;

			tmp = *this;
			_decrement_iterator();
			return tmp;
		}

		bool	operator==(const red_black_tree_iterator& src) const {
			return _node == src._node;
		}

		bool	operator!=(const red_black_tree_iterator& src) const {
			return _node != src._node;
		}


	private:
		iterator_type _node;
		iterator_type _end;

		void _increment_iterator(){
			if (_node->left){
				_node = _node->left;
				while(_node->right)
					_node = _node->right;
			}
			else{
				if (_node->parent)
					_node = _node->parent;
			}
		}

		void _decrement_iterator(){
			if (_node->right){
				_node = _node->right;
				while(_node->left)
					_node = _node->left;
			}
			else{
				if (_node->parent)
					_node = _node->parent;
			}
		}
	};
}

#endif // !RED_BLACK_TREE_ITERATOR_H