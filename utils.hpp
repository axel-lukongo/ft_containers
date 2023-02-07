#ifndef UTILS_H
#define UTILS_H

# include <functional>


namespace ft{


	// template<typename T = void, typename U = void>
	// struct is_same
	// {
	// 	static const bool value = false;
	// };

	// template<typename T>
	// struct is_same<T,T>  //specialization
	// {
	// 	static const bool value = true;
	// };

	// template <class InputIterator1, class InputIterator2, class BinaryPredicate>
	// bool	equal(InputIterator1 first1, InputIterator1 last1, InputIterator2 first2, BinaryPredicate pred,
	// typename ft::enable_if<!ft::is_integral<InputIterator1>::value, InputIterator1>::type* = NULL, 
	// typename ft::enable_if<!ft::is_integral<InputIterator2>::value, InputIterator2>::type* = NULL)
	// {
	// 	while (first1 != last1)
	// 	{
	// 	    if (!pred(*first1, *first2))
	//       		return false;
	//     	++first1; ++first2;
	//   	}
	// 	return true;
	// }


	template< class InputIt1, class InputIt2 >
	bool equal(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2)
	{
		for (;first1 != last1 && first2 != last2; first1++)
		{
			if (*first1 != *first2)
				return (false);
			first2++;	
		}
		if (first1 == last1 && first2 != last2)
			return (false);
		if (first1 != last1 && first2 == last2)
			return (false);
		return (true);
	}


	template <class InputIterator1, class InputIterator2>
	bool lexicographical_compare(InputIterator1 first1, InputIterator1 last1,
								InputIterator2 first2, InputIterator2 last2)
	{
		while (first1 != last1 && first2 != last2 && *first1 == *first2)
		{
			first1++;
			first2++;
		}
		if (first1 == last1 && first2 == last2)
			return (false);
		else if (first1 != last1 && first2 == last2)
			return (false);
		else if (first1 == last1 && first2 != last2)
			return (true);
		if (*first1 < *first2)
			return (true);
		return (false);
	}



	// template <class _Pair>
	// struct _Select1st : public std::unary_function<_Pair,
	// 					typename _Pair::first_type>
	// {
	// typename _Pair::first_type&
	// operator()(_Pair& __x) const
	// { return __x.first; }



	// const typename _Pair::first_type&
	// operator()(const _Pair& __x) const
	// { return __x.first; }
	// };


	// template <typename T>
	// class identity
	// {
	// 	public:
	// 		T&operator()(T& t) const
	// 		{
	// 			return (t);
	// 		}
	// };

	
}

#endif // !UTILS_H

