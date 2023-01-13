#ifndef MAP_H
#define MAP_H

#include"red_black_tree.hpp"
#include "iterator/iterator_traits.hpp"
#include "iterator/pair.hpp"
#include"iterator/red_black_tree_iterator.hpp"
// #include"iterator/red_black_tree_iterator.hpp"

namespace ft{
	template<	class Key, \
				class T, \
				class Compare = std::less<Key>, \
				class Alloc = std::allocator<std::pair<const Key, T> > >
	class map{

		public:
		//key_type:			the type of the key in the key value pair.
		typedef Key											key_type;

		//mapped_type:		the type of the value in the key value pair.
		typedef T											mapped_type;
		
		//value_type:		the type of elements contained in the Node
		typedef	ft::pair<const key_type, mapped_type>		value_type;

	
		typedef typename ft::red_black_tree<Key,T,Alloc>::iterator iterator;
		// typedef typename ft::red_black_tree_iterator<typename ft::red_black_tree<Key,T,Alloc>::node_ty> iterator;
	
	
		// typedef node<k,v> iterator;

		// //the underlying tree storing the data.
		public:
		// //value_compare:	a function object that allows to compare 2 value_type
		// typedef typename map_tree::value_compare			value_compare;
		// //key_compare:		The third parameter, it allows us to copmare keys.
		typedef Compare										key_compare;
		// allocator_type:	the allocator used to allocate memory.
		typedef Alloc										allocator_type;
		// //reference:		the type "reference to value_type"
		typedef typename allocator_type::reference			reference; 
		// //const_reference:	the type "const reference to value_type"
		typedef typename allocator_type::const_reference	const_reference;
		// //pointer:			the type "pointer to value_type"
		typedef typename allocator_type::pointer			pointer;
		// //const_pointer:	the type "const pointer to value_type"
		typedef typename allocator_type::const_pointer		const_pointer;	

		// //ITERATORS
		// typedef typename map_tree::iterator					iterator;
		// typedef typename map_tree::const_iterator			const_iterator;
		// typedef typename map_tree::reverse_iterator			reverse_iterator;
		// typedef typename map_tree::const_reverse_iterator	const_reverse_iterator;

		// //OTHER
		// typedef typename iterator_traits<iterator>::difference_type \
		// 													difference_type;
		// typedef typename node_allocator_type::size_type		size_type;
	




			red_black_tree<key_type, mapped_type> _tree;
		
		public:
	/************************************************************/
	/*                        iterator                          */
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
	/*                        iterator                          */
	/************************************************************/

		iterator begin(void){
			return _tree.begin();
		}

	/************************************************************/
	/*                         modifier                         */
	/************************************************************/
	void insert(Key k, T v){
		_tree.add(k,v);
	}

	};
}

#endif // !MAP_H