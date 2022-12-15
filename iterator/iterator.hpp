/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:18:00 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/15 15:26:34 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <memory>

namespace ft
{
	template< typename Category,
			typename T,
			typename Distance = ptrdiff_t,
			typename Pointer = T*,
			typename Reference = T& >
	class iterator
	{
		protected:
		typedef T         value_type;
		typedef Distance  difference_type;
		typedef Pointer   pointer;
		typedef Reference reference;
		typedef Category  iterator_category;
	};
}