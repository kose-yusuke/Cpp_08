/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:52:44 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/05 22:03:43 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int _N)
{
    
}

Span::~Span(){}

Span::Span(Span const &other)
{
    *this = other;
}

Span &Span::operator=(Span const &other)
{
    if (this != &other)
		*this = other;
	return (*this);
}
