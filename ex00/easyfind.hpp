/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:03:40 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/05 12:30:31 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <stdexcept>
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

template<typename T>
typename T::iterator easyfind(T &container , int value)
{
    
    typename T::iterator it = std::find(container.begin(),container.end(),value);
    if (it == container.end())
        throw std::runtime_error("Value not found in container");
    std::cout << "Found: " << *it << std::endl;
    return it;
}