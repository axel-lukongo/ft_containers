#ifndef MAP_H
#define MAP_H

#include"red_black_tree.hpp"
#include "iterator/iterator_traits.hpp"
#include "iterator/pair.hpp"
#include"iterator/red_black_tree_iterator.hpp"
#include"iterator/reverse_iterator.hpp"

// #include"iterator/red_black_tree_iterator.hpp"

namespace ft{
	template<	class Key, \
				class T, \
				class Compare = std::less<Key>, \
				class Alloc = std::allocator<std::pair<const Key, T> > >
	class map{

		public:

		//key_type:			the type of the key in the key value pair.
		typedef Key															key_type;
		//mapped_type:		the type of the value in the key value pair.
		typedef T															mapped_type;
		//value_type:		the type of elements contained in the Node
		typedef	ft::pair< Key, T>											value_type;
		typedef typename ft::red_black_tree<Key,T,Alloc>::iterator			iterator;
		typedef typename ft::red_black_tree<Key,T,Alloc>::const_iterator	const_iterator;
		//key_compare:		The third parameter, it allows us to copmare keys.
		typedef Compare														key_compare;
		// allocator_type:	the allocator used to allocate memory.
		typedef Alloc														allocator_type;
		typedef red_black_tree<key_type, T>									my_tree;
		typedef typename allocator_type::reference							reference; 
		typedef typename allocator_type::const_reference					const_reference;
		//pointer:			the type "pointer to value_type"
		typedef typename allocator_type::pointer							pointer;
		//const_pointer:	the type "const pointer to value_type"
		typedef typename allocator_type::const_pointer						const_pointer;	
		typedef typename ft::reverse_iterator<iterator>						reverse_iterator;
		typedef typename ft::reverse_iterator<const_iterator>				const_reverse_iterator;

		// //OTHER
		private:
		my_tree _tree;

		public:
	/************************************************************/
	/*                      constructor                         */
	/************************************************************/
		//empty (1)	
		explicit map (const key_compare& comp = key_compare(),
		const allocator_type& alloc = allocator_type()){

		}


		//range (2)	
		template <class InputIterator>
		map (InputIterator first,
		InputIterator last,
		const key_compare& comp = key_compare(),
		const allocator_type& alloc = allocator_type()){

		}


		//copy (3)	
		map (const map& x){

		}

		~map(){

		}


	/************************************************************/
	/*                        operator                          */
	/************************************************************/
	mapped_type&	operator[](const key_type& k) {
		return	(*((insert(ft::make_pair(k, mapped_type()))).first)).second;
	}

	/************************************************************/
	/*                        iterator                          */
	/************************************************************/

		/****************************** BEGIN *******************************/
		iterator begin(void){
			return _tree.begin();
		}

		const_iterator cbegin(void){
			return _tree.cbegin();
		}

		//********revers**********
		reverse_iterator	rbegin(void) {
			return reverse_iterator(_tree.end());
		}

		const_reverse_iterator	rbegin(void) const {
			return const_reverse_iterator(_tree.crend());
		}

		/****************************** END *******************************/
		iterator end(){
			return _tree.end();
		}
		const_iterator cend(){
			return _tree.cend();
		}

		//********revers**********
		reverse_iterator	rend(void) {
			return reverse_iterator(_tree.begin());
		}

		const_reverse_iterator	rend(void) const {
			return const_reverse_iterator(_tree.cbegin());
		}


	/************************************************************/
	/*                         modifier                         */
	/************************************************************/
	pair<iterator,bool> insert(const value_type& val){
		ft::pair<iterator, bool>	tmp;
		
		tmp = _tree.add_one(val);
		// _tree.print_tree(5);
		return tmp;
	}

	};
}

#endif // !MAP_H