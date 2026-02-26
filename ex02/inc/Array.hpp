/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:26:44 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/26 12:23:02 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#define ERROR std::cout << "ERROR" << std::endl;

#include <exception>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array( void );
		Array( unsigned int n );
		Array( Array const & src );

		Array &		operator=( Array const & rightSide );
		T &			operator[]( unsigned int index );
		const T &	operator[]( const unsigned int index ) const;

		unsigned int	size( void );
		void			printArray( const Array & cmp );

		~Array( void );
};

#include "Array.tpp"

#endif
