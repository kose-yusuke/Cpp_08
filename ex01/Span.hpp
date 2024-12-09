/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:52:53 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/09 11:55:25 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class Span{
    private:
        unsigned int _N;
        std::vector<int> _vec;
    public:
        Span();
        Span(unsigned int _N);
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