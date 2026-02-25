/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever..hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:58:29 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/24 16:27:45 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename Tpl>
void	swap(Tpl & a, Tpl & b)
{
	Tpl temp = a;

	a = b;
	b = temp;
}

template <typename Tpl>
Tpl		min(Tpl const & a, Tpl const & b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <typename Tpl>
Tpl		max(Tpl const & a, Tpl const & b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif