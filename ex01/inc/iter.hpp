/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:28:33 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/24 18:40:01 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T, typename F>
void	iter(T * array, unsigned int lenght, F function)
{
	for (unsigned int i = 0; i < lenght; ++i)
		function(array[i]);
}

template <typename Y>
void	print( Y const & c)
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