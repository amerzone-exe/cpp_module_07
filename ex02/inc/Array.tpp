/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 11:49:39 by jocelyn           #+#    #+#             */
/*   Updated: 2026/03/04 17:12:14 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(size_t n) : _size(n)
{
	this->_array = new T[_size]();
}

template <typename T>
Array<T>::Array(Array const &src) : _size(src._size)
{
	this->_array = new T[src._size];
	for (size_t i = 0; i < src._size; i++)
		this->_array[i] = src._array[i];
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const &rightSide)
{
	if (this != &rightSide)
	{
		this->_size = rightSide._size;
		if (this->_array != NULL)
			delete[] this->_array;
		this->_array = new T[rightSide._size];
		for (size_t i = 0; i < rightSide._size; i++)
			this->_array[i] = rightSide._array[i];
	}
	return *this;
}

template <typename T>
T & Array<T>::operator[](const size_t index)
{
	if (index >= this->_size)
	{
		throw std::out_of_range("Index out of range");
	}
	return this->_array[index];
}

template <typename T>
const T & Array<T>::operator[](const size_t index) const
{
	if (index >= this->_size)
	{
		throw std::out_of_range("Index out of range");
	}
	return this->_array[index];
}

template <typename T>
void Array<T>::printArray(const Array &cmp)
{
	for (size_t i = 0; i < _size; i++)
		std::cout << _array[i] << " | " << cmp._array[i] << std::endl;
}

template <typename T>
Array<T>::~Array(void)
{
	if (this->_array != NULL)
		delete[] this->_array;
}

template <typename T>
size_t Array<T>::size(void)
{
	return _size;
}

#endif