/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpodack <rpodack@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:01:02 by rpodack           #+#    #+#             */
/*   Updated: 2024/04/08 18:26:16 by rpodack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
	
};

ScalarConverter::ScalarConverter(const ScalarConverter &a){
	*this = a;
};

ScalarConverter::~ScalarConverter(){
	
};

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &a){
	(void)a;
	return *this;
};

void ScalarConverter::convert(std::string &target){
	if (target.length() == 0)
		return;//throw except
	if (isInt(target) == 1){
		/*print int*/
		std::cout << "int: " << atoi(target.c_str()) << '\n';
		
		/*print char*/
		char c = static_cast<char>(atoi(target.c_str()));
		if (std::isprint(c) || std::isalpha(c))// just use isChar why not ?
			std::cout << "char: " << static_cast<char>(atoi(target.c_str())) << '\n';
		else
			std::cout << "char: Non displayable\n";
		
		/*print float*/
		int i = atoi(target.c_str());
		std::cout << "float: " << static_cast<float>(i) << ".0f" <<'\n';
		
		/*print double*/
		std::cout << "double: " << static_cast<double>(i) << ".0" <<'\n';
		
	}
	else if (isChar(target) == 1){
		std::cout << "char: " << target << '\n';
		std::cout << "int: " << static_cast<int>(target[0]) << '\n';
		std::cout << "float: " << static_cast<float>(target[0]) << ".0f" <<'\n';
		std::cout << "double: " << static_cast<double>(target[0]) << ".0" <<'\n';
	}
	else{
		std::cout << "char: Non displayable\n";
		// throw
	}
}