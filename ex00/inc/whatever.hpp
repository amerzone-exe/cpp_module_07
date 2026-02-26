/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever..hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocelyn <jocelyn@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:58:29 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/26 12:32:56 by jocelyn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T & a, T & b)
{
	T temp = a;

	a = b;
	b = temp;
}

template <typename T>
T		min(T const & a, T const & b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T		max(T const & a, T const & b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif