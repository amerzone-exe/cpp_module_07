/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpiquet <jpiquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 16:26:13 by jpiquet           #+#    #+#             */
/*   Updated: 2026/02/24 18:41:59 by jpiquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>

#define NLINE std::cout << std::endl;

void	increment( int & a )
{
	a++;
}

void	to_upper( std::string & str )
{
	for (size_t i = 0; i < str.length(); ++i) 
	{
		str[i] = static_cast<char>(std::toupper(str[i]));
	}
}

void	to_lower( std::string & str )
{
	for (size_t i = 0; i < str.length(); ++i) 
	{
		str[i] = static_cast<char>(std::tolower(str[i]));
	}
}

int main(void)
{
	int n[4] = {15, 20, 5, 3};
	std::string str[6] = {"hello", "world", "HOW", "ARe", "yOu", "?"};

	::iter(n, 4, increment);
	::iter(n, 4, print<int>);
	NLINE;

	::iter(str, 6, print<std::string>);
	NLINE;
	
	::iter(str, 6, to_upper);
	::iter(str, 6, print<std::string>);
	NLINE;
	
	::iter(str, 6, to_lower);
	::iter(str, 6, print<std::string>);

	return 0;
}
