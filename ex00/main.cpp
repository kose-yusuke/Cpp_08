/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:12:05 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/05 12:33:03 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    try {
        std::vector<int> vec;
        for (int i=1;i < 6; i++)
            vec.push_back(i);       

        std::cout << "Searching for 3 in vector: ";
        easyfind(vec, 3);
        
        std::cout << std::endl;

        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);
        lst.push_back(40);
        lst.push_back(50);

        std::cout << "Searching for 25 in list: ";
        easyfind(lst, 25);
        
    } catch (const std::exception& e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
