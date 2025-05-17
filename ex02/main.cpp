/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:38:24 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/17 14:28:00 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address of string variable: &str = " << &str << std::endl;
	std::cout << "Address of string pointer: &stringPTR = " << &stringPTR << std::endl;
	std::cout << "Address of string reference: &stringREF = " << &stringREF << std::endl;
	std::cout << "Value of string variable: str = " << str << std::endl;
	std::cout << "Value of string pointer: stringPTR = " << stringPTR << std::endl;
	std::cout << "Value string pointer points to: *stringPTR = " << *stringPTR << std::endl;
	std::cout << "Value of string reference: stringREF = " << stringREF << std::endl;
}