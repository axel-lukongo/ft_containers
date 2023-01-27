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
		typedef red_black_tree<key_type, T, Compare>						my_tree;
		typedef typename allocator_type::reference							reference; 
		typedef typename allocator_type::const_reference					const_reference;
		//pointer:			the type "pointer to value_type"
		typedef typename allocator_type::pointer							pointer;
		//const_pointer:	the type "const pointer to value_type"
		typedef typename allocator_type::const_pointer						const_pointer;	
		typedef typename ft::reverse_iterator<iterator>						reverse_iterator;
		typedef typename ft::reverse_iterator<const_iterator>				const_reverse_iterator;
		typedef typename ft::red_black_tree<Key,T,Alloc>::size_type			size_type;

		// //OTHER
		private:
		my_tree _tree;
		key_compare	_cmp;

	/************************************************************/
	/*                      constructor                         */
	/************************************************************/
	public:
		class value_compare
		{
			friend class ft::map< Key, T, Compare, Alloc>;
			protected:
				key_compare comp;
				value_compare (key_compare c) : comp(c) {}
			public:

				typedef bool result_type;
				typedef value_type first_argument_type;
				typedef value_type second_argument_type;

				bool operator()(const value_type& x, const value_type& y) const {
					return comp(x.first, y.first);
				}
		};
	//empty (1)	
		explicit map (const key_compare& comp = key_compare(),
		const allocator_type& alloc = allocator_type()){
			(void) comp;
			(void) alloc;
		}


		//range (2)	
		// template <class InputIterator>
		// map (InputIterator first,
		// InputIterator last,
		// const key_compare& comp = key_compare(),
		// const allocator_type& alloc = allocator_type()){

		// }


		//copy (3)	
		map (const map& x){
			*this = x;
		}

		~map(){
			_tree.print_tree(5);
		}


	/************************************************************/
	/*                     element access                       */
	/************************************************************/

		mapped_type&	operator[](const key_type& k) {
			return	(*((insert(ft::make_pair(k, mapped_type()))).first)).second;
		}

		mapped_type&	at(const key_type& x) {
		iterator	it = find(x);
		if (it != end())
			return it->second;
		throw (std::out_of_range("map::at")); 
		}

		const mapped_type&	at(const key_type &x) const {
			const_iterator it = find(x);
			if (it != end())
				return it->second;
			throw (std::out_of_range("map::at"));
		}

	// mapped_type& at (const key_type& k){

	// }
	// const mapped_type& at (const key_type& k) const{
		
	// }



	/************************************************************/
	/*                        iterator                          */
	/************************************************************/

		//****************************** BEGIN *******************************
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

		//****************************** END *******************************
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
	/*                         capacity                         */
	/************************************************************/
		bool empty() const{
			return _tree.empty();
		}

		size_type size() const{
			return _tree.size();
		}

		size_type max_size() const{
			return _tree.max_size();
		}


	/************************************************************/
	/*                        observers                         */
	/************************************************************/
		key_compare key_comp() const{
			return _cmp;
		}

		value_compare value_comp() const{
			return	value_compare(_cmp);
		}

	/************************************************************/
	/*                         modifier                         */
	/************************************************************/
		pair<iterator,bool> insert(const value_type& val){
			return _tree.add_one(val);
		}

		// //with hint (2)	
		// iterator insert (iterator position, const value_type& val){

		// }

		//range (3)	
		template <class InputIterator>
		void	insert(InputIterator first, typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type last) {
			while (first != last) {
				insert(*first);
				first++;
			}
		}

		void erase (iterator position){
			erase(position->first);
		}
		
		size_type erase (const key_type& k){
			return _tree.erase(k);
		}
		void erase (iterator first, iterator last){
			iterator	tmp;
			while (first != last) {
				tmp = first;
				first++;
				erase(tmp->first);
			}

		}

		void clear(){
			_tree.clear_tree();
		}

		void swap (map& x){
			_tree.swap(x._tree);
		}

	/************************************************************/
	/*                        operation                         */
	/************************************************************/

		iterator find (const key_type& k){
			return _tree.find(k);
		}
		const_iterator find (const key_type& k) const{
			return _tree.find(k);
		}


		//****************************** lower_bound *******************************
		iterator lower_bound (const key_type& k){
			return _tree.lower_bound(k);
		}
		const_iterator lower_bound (const key_type& k) const{
			return _tree.lower_bound(k);
		}



		//****************************** upper_bound *******************************
		iterator upper_bound (const key_type& k){
			return _tree.upper_bound(k);
		}
		const_iterator upper_bound (const key_type& k) const{
			return _tree.upper_bound(k);
		}


		//****************************** equal_range ********************************
		ft::pair<iterator, iterator>	equal_range(const key_type& k) {
			return	ft::make_pair<iterator, iterator>(lower_bound(k), upper_bound(k));
		}

		ft::pair<const_iterator, const_iterator>	equal_range(const key_type& k) const {
			return	ft::make_pair<const_iterator, const_iterator>(lower_bound(k), upper_bound(k));
		}


		//********************************* count **********************************
		size_type count (const key_type& k) const{
			return _tree.count(k);
		}

	};
}

#endif // !MAP_H