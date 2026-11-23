/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-o <anunes-o@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 14:49:29 by anunes-o          #+#    #+#             */
/*   Updated: 2026/11/23 14:49:29 by anunes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of string:      " << &str << std::endl;
    std::cout << "Address held by pointer: " << stringPTR << std::endl;
    std::cout << "Address of reference:    " << &stringREF << std::endl;
    std::cout << "Value of string:         " << str << std::endl;
    std::cout << "Value via pointer:       " << *stringPTR << std::endl;
    std::cout << "Value via reference:     " << stringREF << std::endl;
    return 0;
}
