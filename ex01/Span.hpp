/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:52:53 by koseki.yusu       #+#    #+#             */
/*   Updated: 2025/02/18 16:21:15 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>
#include <vector>
#include <cstdlib> 
#include <algorithm>

class Span{
    private:
        unsigned int _N;
        std::vector<int> _vec;
    public:
        Span();
        Span(unsigned int N);
        Span(Span const &other);
        Span& operator=(Span const &other);
        ~Span();
        
        void addNumber(int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class ContainerFullException : public std::exception
        {
            public:
                virtual const char *what()  const throw();
        };
        
        class ShortageNumberException : public std::exception
        {
            public:
                virtual const char *what()  const throw();
        };
};