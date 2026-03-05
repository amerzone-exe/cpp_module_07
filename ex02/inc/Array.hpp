/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:26:44 by jpiquet           #+#    #+#             */
/*   Updated: 2026/03/05 11:34:53 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
	private:
		T*				_array;
		size_t			_size;

	public:
		Array( void );
		Array( size_t n );
		Array( Array const & src );

		Array &		operator=( Array const & rightSide );
		T &			operator[]( size_t index );
		const T &	operator[]( const size_t index ) const;

		size_t		size( void );
		void		printArray( const Array & cmp );

		~Array( void );
};

#include "Array.tpp"

#endif
