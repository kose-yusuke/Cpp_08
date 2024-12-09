/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:52:31 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/09 13:27:40 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    std::cout << "==========The test written in the assignment pdf===========" << std::endl;
    
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "=======The Exception test===========" << std::endl;
    try
	{
		sp.addNumber(100);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    Span exc = Span(3);
    exc.addNumber(6);

    try
	{
		std::cout << "shortest span: " << exc.shortestSpan() << std::endl;
		std::cout << "longest span: " << exc.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

    std::cout << "=======Test with more than 10000 numbers=========" << std::endl;

	unsigned int N = 100000;
    Span big_num_sp = Span(N);

    std::vector<int> numbers;
    std::srand(static_cast<unsigned int>(time(NULL)));
    for (unsigned int i = 0; i < N; i++)
    {
        int random_int = rand() % 1000000;
        numbers.push_back(random_int);
    }

    try
    {
        for (size_t i = 0; i < numbers.size(); i++)
            big_num_sp.addNumber(numbers[i]);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }
    
    try
    {
        std::cout << "Shortest span: " << big_num_sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << big_num_sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }

    std::cout << "==========Test completed successfully!========" << std::endl;
    return 0;
}