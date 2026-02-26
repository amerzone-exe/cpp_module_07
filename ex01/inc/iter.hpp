/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:28:33 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/26 12:30:36 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename F>
void	iter(T * array, const unsigned int lenght, F function)
{
	for (unsigned int i = 0; i < lenght; ++i)
		function(array[i]);
}

template <typename T>
void	print( T const & c)
{
	std::cout << c << " " << std::flush;
}

template <typename N>
void	print_array(N * array, unsigned int lenght)
{
	for (unsigned int i = 0; i < lenght; ++i)
		std::cout << array[i] << std::endl;
}

#endif