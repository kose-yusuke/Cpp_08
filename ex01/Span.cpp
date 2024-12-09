/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:52:44 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/09 12:01:28 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0)
{}

Span::Span(unsigned int N) : _N(N)
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
    {
        _N = other._N; 
        _vec = other._vec;  
    }
	return (*this);
}

void Span::addNumber(int n)
{
    if (_vec.size() >= _N)
        throw ContainerFullException();
    _vec.push_back(n);
}

unsigned int Span::shortestSpan()
{
    if (_vec.size() <= 1)
        throw ShortageNumberException();
    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    int min = tmp[1] - tmp[0];
    for (unsigned int i = 1; i < tmp.size(); i++)
    {
        if (tmp[i] - tmp[i-1] < min)
            min = tmp[i] - tmp[i-1];
    }
    return (min);
}

unsigned int Span::longestSpan()
{
    if (_vec.size() <= 1)
        throw ShortageNumberException();
    std::vector<int> tmp = _vec;
    std::sort(tmp.begin(), tmp.end());
    return (tmp[tmp.size()-1] - tmp[0]);
}

const char *Span::ContainerFullException::what() const throw()
{
    return ("Container is full");
}

const char *Span::ShortageNumberException::what() const throw()
{
    return ("Lack of number in container");
}