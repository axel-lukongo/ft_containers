#ifndef PAIR_H
#define PAIR_H

namespace ft{
	template <class _T1, class _T2>
	class pair
	{

	public:
		typedef _T1 first_type;
		typedef _T2 second_type;

		_T1 first;
		_T2 second;
	/************************************************************/
	/*                        constructor                       */
	/************************************************************/
		pair(): first(), second(){}

		pair(first_type const& t1, second_type const& t2) : first(t1), second(t2) {}

		template<class U, class V>
		pair (const pair<U,V>& pr) : first(pr.first), second(pr.second) {
		}

	/************************************************************/
	/*                         operator                         */
	/************************************************************/
	
		pair& operator=(pair const& copy){
		first = copy.first;
		second = copy.second;
		return *this;
		}

	/************************************************************/
	/*                        destructor                        */
	/************************************************************/
		~pair(){}
	};

	template <class _T1, class _T2>
	ft::pair<_T1,_T2>	make_pair(_T1 x, _T2 y){
		return pair<_T1, _T2>(x, y);
	}

	template <class _T1, class _T2>
	bool operator==(const pair<_T1,_T2>& x, const pair<_T1,_T2>& y)
	{
		return x.first == y.first && x.second == y.second;
	}

	template <class _T1, class _T2>
	bool
	operator!=(const pair<_T1,_T2>& x, const pair<_T1,_T2>& y)
	{
		return !(x == y);
	}

	template <class _T1, class _T2>
	bool
	operator< (const pair<_T1,_T2>& x, const pair<_T1,_T2>& y)
	{
		return x.first < y.first || (!(y.first < x.first) && x.second < y.second);
	}

	template <class _T1, class _T2>
	bool
	operator> (const pair<_T1,_T2>& x, const pair<_T1,_T2>& y)
	{
		return y < x;
	}

	template <class _T1, class _T2>
	bool
	operator>=(const pair<_T1,_T2>& x, const pair<_T1,_T2>& y)
	{
		return !(x < y);
	}

	template <class _T1, class _T2>
	bool
	operator<=(const pair<_T1,_T2>& x, const pair<_T1,_T2>& y)
	{
		return !(y < x);
	}


}

#endif // !PAIR_H