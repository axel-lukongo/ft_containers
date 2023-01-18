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
		typedef typename	Iterator::value_type					value_type;

		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category	iterator_category;
		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type	difference_type;
		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::pointer			pointer;
		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference			reference;

	private:
		iterator_type _node;
		iterator_type _end;
		/************************************************************/
		/*                        constructor                       */
		/************************************************************/
	public:
		red_black_tree_iterator(): _node(NULL), _end(NULL){}

		red_black_tree_iterator(iterator_type node, iterator_type end):
		_node(node), _end(end){}

		red_black_tree_iterator(const red_black_tree_iterator& src) : _node(src._node), _end(src._end) {
		}


		/************************************************************/
		/*                        destructor                        */
		/************************************************************/
		~red_black_tree_iterator(){}


		/************************************************************/
		/*                         operator                         */
		/************************************************************/
		red_black_tree_iterator&	operator=(const red_black_tree_iterator& src) {
			_node = src._node;
			_end = src._end;
			return *this;
		}

		reference	operator*(void) const {
			return _node->_key;
		}

		pointer	operator->(void) const {
			return &(_node->_key);
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
		void	_increment_iterator(void) {
			if (_node) {
				_end = _node;
				if (_node->_left) {
					_node = _node->_left;
					while (_node && _node->_left)
						_node = _node->_left;
				}
				else {
					while (_node->_parent && _node->_parent->_left == _node)
						_node = _node->_parent;
					_node = _node->_parent;
				}
			}
		}


		void	_decrement_iterator(void) {
				if (_node) {
					if (_node->_right) {
						_node = _node->_right;
						while (_node && _node->_right)
							_node = _node->_right;
					}
					else {
						while (_node->_parent && _node->_parent->_right == _node)
							_node = _node->_parent;
						_node = _node->_parent;
					}
				}
				else
					_node = _end;
			}
	};

	template <class Iterator>
	class const_red_black_tree_iterator {

		public:

			typedef				const Iterator*							iterator_type;
			typedef typename	Iterator::value_type					const value_type;

			typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category	iterator_category;
			typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type	difference_type;
			typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::pointer			pointer;
			typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference			reference;
		private:
				iterator_type	_node;
				iterator_type	_end;
		public:
		/************************************************************/
		/*                        constructor                       */
		/************************************************************/
			 const_red_black_tree_iterator(void): _node(NULL), _end(NULL) {}

			 const_red_black_tree_iterator(iterator_type node, iterator_type end)
				: _node(node), _end(end) {}

		/************************************************************/
		/*                           copy                           */
		/************************************************************/
			 const_red_black_tree_iterator(const const_red_black_tree_iterator<Iterator>& cpy)
			 : _node(cpy.base()), _end(cpy.end()) {} 

		/************************************************************/
		/*                        destructor                        */
		/************************************************************/
			~ const_red_black_tree_iterator(void) {}

		/************************************************************/
		/*                         operator                         */
		/************************************************************/
			 const_red_black_tree_iterator&	operator=(const  const_red_black_tree_iterator& src) {
				_node = src._node;
				_end = src._end;
				return *this;
			}

			reference	operator*(void) const {
				return _node->_key;
			}

			pointer	operator->(void) const {
				return &(_node->_key);
			}

			iterator_type	base(void) const {
				return _node;
			}

			iterator_type	end(void) const {
				return _end;
			}

			 const_red_black_tree_iterator&	operator++(void) {
				_increment_iterator();
				return *this;
			}

			 const_red_black_tree_iterator	operator++(int) {
				 const_red_black_tree_iterator	tmp;

				tmp = *this;
				_increment_iterator();
				return	tmp;
			}

			 const_red_black_tree_iterator&	operator--(void) {
				_decrement_iterator();
				return *this;
			}

			 const_red_black_tree_iterator	operator--(int) {
				 const_red_black_tree_iterator	tmp;

				tmp = *this;
				_decrement_iterator();
				return tmp;
			}

			bool	operator==(const  const_red_black_tree_iterator& src) const {
				return _node == src._node;
			}

			bool	operator!=(const  const_red_black_tree_iterator& src) const {
				return _node != src._node;
			}

		private:
			void	_increment_iterator(void) {
				if (_node) {
					_end = _node;
					if (_node->_left) {
						_node = _node->_left;
						while (_node && _node->_left)
							_node = _node->_left;
					}
					else {
						while (_node->_parent && _node->_parent->_left == _node)
							_node = _node->_parent;
						_node = _node->_parent;
					}
				}
			}


			void	_decrement_iterator(void) {
					if (_node) {
						if (_node->_right) {
							_node = _node->_right;
							while (_node && _node->_right)
								_node = _node->_right;
						}
						else {
							while (_node->_parent && _node->_parent->_right == _node)
								_node = _node->_parent;
							_node = _node->_parent;
						}
					}
					else
						_node = _end;
				}
	};

}

#endif // !RED_BLACK_TREE_ITERATOR_H