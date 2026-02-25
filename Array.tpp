/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 14:51:26 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/25 15:52:23 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

template <typename T>
Array<T>::Array( void ) : _array(NULL) {}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n)
{
	// std::cout << n << std::endl;
	this->_array = new T[n];
}

template <typename T>
Array<T>::Array( Array const & src )
{
	this->_array = new T[src._size];
	*this->_array = *src._array;
}

template <typename T>
Array<T> & Array<T>::operator=( Array<T> const & rightSide )
{
	if (this != rightSide)
	{
		if (this->_array != NULL)
			delete [] this->_array;
		this->_array = new T[src._size];
		*this->_array = *src._array;
	}
	return *this;
}

template <typename T>
T & Array<T>::operator[]( unsigned int index )
{
	if (index < 0 || index > this->_size)
		throw std::out_of_range("wrong index");
	return this->_array[index];
}

// template <typename T>
// T const & Array<T>::operator[]( unsigned int index )
// {
// 	if (index < 0 || index > this->_size)
// 		throw std::out_of_range("wrong index");
// 	return this->_array[index];
// }

// template <typename T>
// bool	Array<T>::operator!=( const T & value )
// {
// 	if ()
// }

template <typename T>
Array<T>::~Array( void ) 
{
	if (this->_array != NULL)
		delete [] this->_array;
}

template <typename T>
unsigned int	Array<T>::size( void )
{
	return _size;
}
