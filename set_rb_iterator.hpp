#ifndef SET_RB_H
#define SET_RB_H


// #include"iterator/pair.hpp"
#include"iterator/iterator_traits.hpp"


namespace ft{
	template <class Iterator>
	class const_set_rb_iterator;

	template <class Iterator>
	class set_rb_iterator
	{
	public:

		typedef				Iterator*								iterator_type;
		typedef typename	Iterator::value_type					value_type;
		typedef const 		value_type *							pointer;
		typedef const 		value_type &							reference;

		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category	iterator_category;
		typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type	difference_type;
		// typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::pointer			pointer;
		// typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference			reference;

	private:
		iterator_type _node;
		iterator_type _end;
		/************************************************************/
		/*                        constructor                       */
		/************************************************************/
	public:
		set_rb_iterator(): _node(NULL), _end(NULL){}

		set_rb_iterator(iterator_type node, iterator_type end):
		_node(node), _end(end){}

		set_rb_iterator(const set_rb_iterator& cpy) : _node(cpy._node), _end(cpy._end) {
		}

		set_rb_iterator(const const_set_rb_iterator<Iterator> &src)
			: _node(src.base()), _end(src.end()) {}


		/************************************************************/
		/*                        destructor                        */
		/************************************************************/
		~set_rb_iterator(){}


		/************************************************************/
		/*                         operator                         */
		/************************************************************/
		set_rb_iterator&	operator=(const set_rb_iterator& cpy) {
			_node = cpy._node;
			_end = cpy._end;
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


		set_rb_iterator&	operator++(void) {
			_increment_iterator();
			return *this;
		}

		set_rb_iterator	operator++(int) {
			set_rb_iterator	tmp;

			tmp = *this;
			_increment_iterator();
			return	tmp;
		}

		set_rb_iterator&	operator--(void) {
			_decrement_iterator();
			return *this;
		}

		set_rb_iterator	operator--(int) {
			set_rb_iterator	tmp;

			tmp = *this;
			_decrement_iterator();
			return tmp;
		}

		bool	operator==(const set_rb_iterator& cpy) const {
			return _node == cpy._node;
		}

		bool	operator!=(const set_rb_iterator& cpy) const {
			return _node != cpy._node;
		}

	private:
		void	_increment_iterator(void) {
				if (_node) {
					_end = _node;
					if (_node->right) {
						_node = _node->right;
						while (_node && _node->left)
							_node = _node->left;
					}
					else {
						while (_node->_parent && _node->_parent->right == _node)
							_node = _node->_parent;
						_node = _node->_parent;
					}
				}
			}


			void	_decrement_iterator(void) {
					if (_node) {
						if (_node->left) {
							_node = _node->left;
							while (_node && _node->right)
								_node = _node->right;
						}
						else {
							while (_node->_parent && _node->_parent->left == _node)
								_node = _node->_parent;
							_node = _node->_parent;
						}
					}
					else
						_node = _end;
				}
	};







	template <class Iterator>
	class const_set_rb_iterator {

		public:

			typedef				Iterator*								iterator_type;
			typedef typename	Iterator::value_type					const value_type;
			typedef const 		value_type *							pointer;
			typedef const 		value_type &							reference;

			typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::iterator_category	iterator_category;
			typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::difference_type	difference_type;
			
			// typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::pointer			pointer;
			// typedef typename	ft::iterator<ft::bidirectional_iterator_tag, value_type>::reference			reference;
		private:
				iterator_type	_node;
				iterator_type	_end;
		public:
		/************************************************************/
		/*                        constructor                       */
		/************************************************************/
			 const_set_rb_iterator(void): _node(NULL), _end(NULL) {}

			 const_set_rb_iterator(iterator_type node, iterator_type end)
				: _node(node), _end(end) {}

		/************************************************************/
		/*                           copy                           */
		/************************************************************/

			const_set_rb_iterator(const const_set_rb_iterator& cpy)
				: _node(cpy.base()), _end(cpy._end) {
				} 

			const_set_rb_iterator(const set_rb_iterator<Iterator>& cpy)
				: _node(cpy.base()), _end(cpy.end()) {
				} 

		/************************************************************/
		/*                        destructor                        */
		/************************************************************/
			~ const_set_rb_iterator(void) {}

		/************************************************************/
		/*                         operator                         */
		/************************************************************/
			 const_set_rb_iterator&	operator=(const  const_set_rb_iterator& cpy) {
				_node = cpy._node;
				_end = cpy._end;
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

			 const_set_rb_iterator&	operator++(void) {
				_increment_iterator();
				return *this;
			}

			 const_set_rb_iterator	operator++(int) {
				 const_set_rb_iterator	tmp;

				tmp = *this;
				_increment_iterator();
				return	tmp;
			}

			 const_set_rb_iterator&	operator--(void) {
				_decrement_iterator();
				return *this;
			}

			 const_set_rb_iterator	operator--(int) {
				 const_set_rb_iterator	tmp;

				tmp = *this;
				_decrement_iterator();
				return tmp;
			}

			bool	operator==(const  const_set_rb_iterator& cpy) const {
				return _node == cpy._node;
			}

			bool	operator!=(const  const_set_rb_iterator& cpy) const {
				return _node != cpy._node;
			}

		private:
			void	_increment_iterator(void) {
				if (_node) {
					_end = _node;
					if (_node->right) {
						_node = _node->right;
						while (_node && _node->left)
							_node = _node->left;
					}
					else {
						while (_node->_parent && _node->_parent->right == _node)
							_node = _node->_parent;
						_node = _node->_parent;
					}
				}
			}


			void	_decrement_iterator(void) {
					if (_node) {
						if (_node->left) {
							_node = _node->left;
							while (_node && _node->right)
								_node = _node->right;
						}
						else {
							while (_node->_parent && _node->_parent->left == _node)
								_node = _node->_parent;
							_node = _node->_parent;
						}
					}
					else
						_node = _end;
				}
	};


}

#endif // !SET_RB_H