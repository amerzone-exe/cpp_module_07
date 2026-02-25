/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:26:44 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/25 16:09:46 by jpiquet          ###   ########.fr       */
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
		T* 				_array;
		unsigned int	_size;

	public:
		// Array( void );
		// Array( unsigned int n );
		// Array( Array const & src );
		// Array & operator=( Array const & rightSide );

		// unsigned int	size( void );
		// T & operator[]( unsigned int index );
	
		// ~Array( void );

		Array( void ) : _array(NULL), _size(0) {}
		
		Array( unsigned int n ) : _size(n)
		{
			std::cout << n << std::endl;
			std::cout << _size << std::endl;
			this->_array = new T[_size];
		}

		Array( Array const & src ) : _size(src._size)
		{
			this->_array = new T[src._size];
			for (unsigned int i = 0; i < src._size; i++)
				this->_array[i] = src._array[i];
		}

		Array<T> & operator=( Array<T> const & rightSide )
		{
			if (this != &rightSide)
			{
				if (this->_array != NULL)
					delete [] this->_array;
				this->_array = new T[rightSide._size];
				for (unsigned int i = 0; i < rightSide._size; i++)
					this->_array[i] = rightSide._array[i];
			}
			return *this;
		}

		T & operator[]( unsigned int index )
		{
			// std::cout << "index : " << index << "_size : " << this->_size << std::endl;
			if (index > this->_size)
			{
				throw std::out_of_range("wrong index");
			}
			return this->_array[index];
		}

		~Array( void ) 
		{
			if (this->_array != NULL)
				delete [] this->_array;
		}
		
		unsigned int	size( void )
		{
			return _size;
		}
};

#endif
