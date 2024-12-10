/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 12:12:13 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/10 15:58:39 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>() {}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container> &other) : std::stack<T, Container>(other) {}

template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &other)
{
    if (this != &other)
        std::stack<T, Container>::operator=(other);
    return *this;
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin() {
    return this->c.begin();
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end() {
    return this->c.end();
}

template <typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::begin() const {
    return this->c.begin();
}

template <typename T, typename Container>
typename Container::const_iterator MutantStack<T, Container>::end() const {
    return this->c.end();
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::rbegin() {
    return this->c.rbegin();
}

template <typename T, typename Container>
typename Container::reverse_iterator MutantStack<T, Container>::rend() {
    return this->c.rend();
}

template <typename T, typename Container>
typename Container::const_reverse_iterator MutantStack<T, Container>::rbegin() const {
    return this->c.rbegin();
}

template <typename T, typename Container>
typename Container::const_reverse_iterator MutantStack<T, Container>::rend() const {
    return this->c.rend();
}