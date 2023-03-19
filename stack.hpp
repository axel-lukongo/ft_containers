#ifndef STACK_H
#define STACK_H

#include <deque>
#include <vector>
#include <list>
#include <cstddef>
#include "vector.hpp"

namespace ft{

	template <class T, class Container = ft::vector<T> >
	class stack
	{
	public:
		typedef T	value_type;
		typedef Container	container_type;
		typedef size_t	size_type;
	protected:
		container_type _cont;

	public:
/************************************************************/
/*                       Constructor                        */
/************************************************************/

		explicit stack (const container_type& ctnr = container_type()):_cont(ctnr){
			// container_type co = ctnr;
		}



/************************************************************/
/*                         Capacity                         */
/************************************************************/


	size_type size() const {
		return _cont.size();
	}

	bool empty(void) const {
		return _cont.empty();
	}




/************************************************************/
/*                         Modifier                         */
/************************************************************/


	void	push(const value_type& val) {
		_cont.push_back(val);
	}

	void	pop(void) {
		_cont.pop_back();
	}



/************************************************************/
/*                      Element acces                       */
/************************************************************/
	value_type& top() {
		return (_cont.back());
	}

	const value_type& top() const {
		return (_cont.back());
	}

	friend 
		bool operator== (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
		{
			return (lhs._cont == rhs._cont);
		}

		//(3)
		friend
		bool operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
		{
			return (lhs._cont < rhs._cont);	
		}

};


/************************************************************/
/*              Non-member function overloads               */
/************************************************************/

	template <class T, class Container>
		bool	operator!=(const stack<T, Container>&lhs, const stack<T, Container>& rhs) {
			return !(lhs == rhs);
		}
	template <class T, class Container>
		bool	operator<=(const stack<T, Container>&lhs, const stack<T, Container>& rhs) {
			return !(rhs < lhs);
		}
	template <class T, class Container>
		bool	operator>(const stack<T, Container>&lhs, const stack<T, Container>& rhs) {
			return rhs < lhs;
		}
	template <class T, class Container>
		bool	operator>=(const stack<T, Container>&lhs, const stack<T, Container>& rhs) {
			return !(lhs < rhs);
		}
}


#endif // !STACK_H