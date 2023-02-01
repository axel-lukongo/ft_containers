#ifndef MAP_H
#define MAP_H

#include"red_black_tree.hpp"
#include "iterator/iterator_traits.hpp"
#include "iterator/pair.hpp"
#include"iterator/red_black_tree_iterator.hpp"
#include"iterator/reverse_iterator.hpp"
#include "utils.hpp"

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
			allocator_type	_alloc;


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
		const allocator_type& alloc = allocator_type()): _cmp(comp), _alloc(alloc){
			// (void) comp;
			// (void) alloc;
		}



		//range (2)	
		template <class InputIterator>
			map(InputIterator first, typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
			: _cmp(comp){
				(void) alloc;
				while (first != last) {
					insert(ft::pair<Key,T>(first->first, first->second));
					first++;
				}
		}


		//copy (3)	
		map (const map& x){
			*this = x;
		}

		map& operator=(const map& x){
			if(*this != x){
				_cmp = x._cmp;
				_alloc = x._alloc;
				_tree.clear_tree();
				insert(x.begin(), x.end());
			}
			return *this;
		}

	/************************************************************/
	/*                       destructor                         */
	/************************************************************/
		~map(){
			// std::cout << "\n\n----------------------------------\n\n";
			// _tree.print_tree(5);
		}


		void the_printer(){
			std::cout << "\n\n----------------------------------\n\n";
			_tree.print_tree(5);
			std::cout << "\n\n\n\n";
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


	/************************************************************/
	/*                        iterator                          */
	/************************************************************/

		//****************************** BEGIN *******************************
		iterator begin(void) {
			return _tree.begin();
		}

		const_iterator begin(void) const{
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
		iterator end() {
			return _tree.end();
		}
		const_iterator end() const {
			return _tree.cend();
		}
//pas de cend
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

		allocator_type	get_allocator(void) const {
			return _alloc;
		}

		my_tree	get_root(void) const {
			return _tree;
		}

	/************************************************************/
	/*                         modifier                         */
	/************************************************************/
		
		//(1)	
		pair<iterator,bool> insert(const value_type& val){
			ft::pair<iterator, bool> tmp;
			tmp = _tree.add_one(val);
			return tmp;
		}

		//with hint (2)	
		iterator insert (iterator position, const value_type& val){
			ft::pair<iterator, bool>	tmp = _tree.add_one(position, val);
			if (!tmp.second){
				return insert(val).first;
			}
			return tmp.first;
		}

		//range (3)	
		template <class InputIterator>
		void	insert(InputIterator first, typename ft::enable_if<!ft::is_integral<InputIterator>::value, InputIterator>::type last) {
			while (first != last) {
				insert(ft::pair<Key,T>(first->first, first->second));
				first++;
			}
		}



	//****************************** erase *******************************
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


	template <class Key, class T, class Compare, class Alloc>
	bool	operator==(const ft::map<Key, T, Compare, Alloc>& lhs, const ft::map<Key, T, Compare, Alloc>& rhs) {
		if ( lhs.size() != rhs.size() )
			return false;
		typename map<Key, T, Compare, Alloc>::const_iterator it = lhs.begin();
		typename map<Key, T, Compare, Alloc>::const_iterator ite = lhs.end();
		typename map<Key, T, Compare, Alloc>::const_iterator rit = rhs.begin();

		while (it != ite && rit != rhs.end()) {
			if ( it->first != rit->first || it->second != rit->second )
				return false;
			it++;
			rit++;
		}
		if (it != ite || rit != rhs.end())
			return false;
		return true;
	}


	template <class Key, class T, class Compare, class Alloc>
	bool	operator!=(const ft::map<Key, T, Compare, Alloc>& lhs, const ft::map<Key, T, Compare, Alloc>& rhs) {
		return	!(lhs == rhs);
	}
	template <class Key, class T, class Compare, class Alloc>
		bool	operator<(const ft::map<Key, T, Compare, Alloc>& lhs, const ft::map<Key, T, Compare, Alloc>& rhs) {
			return ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
		}
	template <class Key, class T, class Compare, class Alloc>
		bool	operator<=(const ft::map<Key, T, Compare, Alloc>& lhs, const ft::map<Key, T, Compare, Alloc>& rhs) {
			return !(rhs < lhs);
		}
	template <class Key, class T, class Compare, class Alloc>
		bool	operator>(const ft::map<Key, T, Compare, Alloc>& lhs, const ft::map<Key, T, Compare, Alloc>& rhs) {
			return rhs < lhs;
		}
	template <class Key, class T, class Compare, class Alloc>
		bool	operator>=(const ft::map<Key, T, Compare, Alloc>& lhs, const ft::map<Key, T, Compare, Alloc>& rhs) {
			return	!(lhs < rhs);
		}
}

#endif // !MAP_H