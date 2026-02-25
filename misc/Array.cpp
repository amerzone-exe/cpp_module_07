/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:26:56 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/25 10:47:43 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

/*Default constructor*/
Array::Array( void ) : _array(NULL)
{
	// std::cout << "Default constructor called" << std::endl;
}

Array::Array( unsigned int n )
{
	this->_array = new T[n];
}

/*Copy constructor*/
Array::Array( Array const & src )
{
	// std::cout << "Copy constructor called" << std::endl;
}

/*Assignation operator overload*/
Array & Array::operator=( Array const & rightSide )
{
	// if (this != &rightSide)
	return *this;
}

/*Default destructor*/
Array::~Array( void ) {}
