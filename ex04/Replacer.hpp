/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:09:03 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/24 15:45:54 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replacer
{
	public:
		Replacer(const std::string& filename, const std::string& s1, const std::string& s2);
		~Replacer();
		bool validateInputs() const;
		bool replaceStringsInFile() const;
		private:
		std::string filename;
		std::string s1;
		std::string s2;
};

# endif
