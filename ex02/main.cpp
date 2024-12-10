/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 13:30:20 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/10 16:17:09 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
// std::stack + begin()とかend()とかを自前で実装→MutantStackが通常のSTLコンテナのようになる

int main()
{
    MutantStack<int, std::deque<int> > mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int, std::deque<int> >::iterator it = mstack.begin();
    MutantStack<int, std::deque<int> >::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }

    std::cout << "Reverse iteration:" << std::endl;
    MutantStack<int, std::deque<int> >::reverse_iterator rit = mstack.rbegin();
    MutantStack<int, std::deque<int> >::reverse_iterator rite = mstack.rend();

    while (rit != rite) {
        std::cout << *rit << std::endl;
        ++rit;
    }

    std::cout << "Testing with std::list as internal container:" << std::endl;
    MutantStack<int, std::list<int> > listStack;
    listStack.push(42);
    listStack.push(84);
    listStack.push(126);

    MutantStack<int, std::list<int> >::iterator lit = listStack.begin();
    MutantStack<int, std::list<int> >::iterator lite = listStack.end();

    while (lit != lite) {
        std::cout << *lit << std::endl;
        ++lit;
    }

    std::cout << "Testing stack copy:" << std::endl;
    MutantStack<int, std::deque<int> > copiedStack = mstack;

    std::cout << "Original stack:" << std::endl;
    for (MutantStack<int, std::deque<int> >::iterator it = mstack.begin(); it != mstack.end(); ++it)
        std::cout << *it << std::endl;

    std::cout << "Copied stack:" << std::endl;
    for (MutantStack<int, std::deque<int> >::iterator it = copiedStack.begin(); it != copiedStack.end(); ++it)
        std::cout << *it << std::endl;
    return 0;
}