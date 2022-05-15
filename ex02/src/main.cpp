/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:15:51 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/24 17:15:52 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string string =  "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "-----------------------ADDRESS---------------------------" << std::endl;
    std::cout << "The memory address of the string variable: " << &string << std::endl;
    std::cout << "The memory address held by stringPTR:      " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF:      " << &stringREF << std::endl << std::endl;
    std::cout << "------------------------VALUE----------------------------" << std::endl;
    std::cout << "The value of the string variable:          " << string << std::endl;
    std::cout << "The value pointed to by stringPTR:         " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:         " << stringREF << std::endl;

    return 0;
}
