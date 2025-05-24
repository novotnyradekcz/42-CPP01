/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:38:24 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/24 19:20:42 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory address of the string variable: &str = " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: &stringREF = " << &stringREF << std::endl;
	std::cout << "The value of the string variable: str = " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: *stringPTR = " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: stringREF = " << stringREF << std::endl;
}
