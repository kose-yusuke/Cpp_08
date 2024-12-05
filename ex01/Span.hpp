/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:52:53 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/05 22:00:49 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <exception>

class Span{
    private:
        unsigned int _N;
        unsigned int len;
    public:
        Span();
        Span(unsigned int _N);
        Span(Span const &other);
        Span& operator=(Span const &other);
        ~Span();
        
        void addNumber(int n);
        unsigned int shortestSpan();
        unsigned int longestSpan();
};