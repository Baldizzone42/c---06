/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:55:27 by jormoral          #+#    #+#             */
/*   Updated: 2025/05/20 13:29:02 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Identify.h"
#include <limits>
#include <cstdlib>
#include <climits>
#include <cfloat>

void print_nan(std::string value)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (value[0] == '-')
	{
		std::cout << "float: " << -std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
		std::cout << "double: " << -std::numeric_limits<double>::quiet_NaN() << std::endl;
	}
	else
	{
		std::cout << "float: " << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::quiet_NaN() << std::endl;
	}
}


void print_inf(std::string value)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (value[0] == '-')
	{
		std::cout << "float: " << -std::numeric_limits<float>::infinity() << "f" << std::endl;
		std::cout << "double: " << -std::numeric_limits<double>::infinity() << std::endl;
	}
	else
	{
		std::cout << "float: " << std::numeric_limits<float>::infinity() << "f" << std::endl;
		std::cout << "double: " << std::numeric_limits<double>::infinity() << std::endl;
	}
}

void print_char(std::string value)
{
	std::cout << "char: " << value << std::endl;
	//Int
	std::cout << "int: " << static_cast<int>(value[0]) << std::endl;
	//Float
	std::cout << "float: " << static_cast<float>(value[0]) << ".0f" << std::endl;
	//Double
	std::cout << "double: " << static_cast<double>(value[0]) << ".0" << std::endl;
}

void print_int(std::string value)
{
	long x = atol(value.c_str());
	//Char
	if(x >= 32 && x <= 126)
		std::cout << "char: " << static_cast<char>(x) << std::endl;
	else if(x >= 0 && x <= 255)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible\n";
	//INT
	if(x > INT_MAX || x < INT_MIN)
		std::cout << "int: out of range\n";
	else
		std::cout << "int: " << static_cast<int>(x) << std::endl;
	//Float
	double d = std::strtod(value.c_str(), NULL);
	if(d > FLT_MAX || d < -FLT_MAX)
		std::cout << "float: out of range\n";
	else 
	{
		int dot = value.find('.') + 1;
		while(value[dot] == '0' || value[dot] == 'f')
			dot++;
		if(!value[dot])
			std::cout << "float: " << static_cast<float>(d)  << ".0f"<< std::endl;
		else
			std::cout << "float: " << static_cast<float>(d)  << "f"<< std::endl;
	}
	//Double
	long double ld =  static_cast<long double>(std::strtod(value.c_str(), NULL));
	if(ld > DBL_MAX && ld < -DBL_MAX)
		std::cout << "double: out of range\n";
	else
	{
		if((ld < 1000000 && ld < 0.0001) || (ld < -1000000 && ld > -0.0001))
			std::cout << "double: " << static_cast<double>(d)  << ".0"<< std::endl;
		else 
		{
			//std::cout << "value: " << ld << std::endl;
			std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
		}
	}
	
}

void print_float(std::string value){
	//Char
	float n = atof(value.c_str());
	if(n >= 32 && n <= 126)
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	else if(n >= 0 && n <= 255)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible\n";
	// Int
	long x = atol(value.c_str());
	if(x > INT_MAX || x < INT_MIN)
		std::cout << "int: out of range\n";
	else
		std::cout << "int: " << static_cast<int>(x) << std::endl;
	//Float
	double d = std::strtod(value.c_str(), NULL);
	if(d > FLT_MAX || d < -FLT_MAX)
		std::cout << "float: out of range\n";
	else 
	{
		int dot = value.find('.') + 1;
		while(value[dot] == '0' || value[dot] == 'f')
			dot++;
		if(!value[dot])
			std::cout << "float: " << static_cast<float>(d)  << ".0f"<< std::endl;
		else
			std::cout << "float: " << static_cast<float>(d)  << "f"<< std::endl;
	}
	//Double
	long double ld =  static_cast<long double>(std::strtod(value.c_str(), NULL));
	if(ld > DBL_MAX && ld < -DBL_MAX)
		std::cout << "double: out of range\n";
	else
	{
		if((ld < 1000000 && ld > 0.0001) || (ld < -1000000 && ld > -0.0001))
			std::cout << "double: " << static_cast<double>(d)  << ".0"<< std::endl;
		else
			std::cout << "double: " << static_cast<double>(d) << std::endl;
	}
}

void print_double(std::string value)
{
	//Char
	float n = atof(value.c_str());
	if(n >= 32 && n <= 126)
		std::cout << "char: " << static_cast<char>(n) << std::endl;
	else if(n >= 0 && n <= 255)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible\n";
	// Int
	long x = atol(value.c_str());
	if(x > INT_MAX || x < INT_MIN)
		std::cout << "int: out of range\n";
	else
		std::cout << "int: " << static_cast<int>(x) << std::endl;
	//Float
	double d = std::strtod(value.c_str(), NULL);
	if(d > FLT_MAX || d < -FLT_MAX)
		std::cout << "float: out of range\n";
	else 
	{
		int dot = value.find('.') + 1;
		while(value[dot] == '0' || value[dot] == 'f')
			dot++;
		if(!value[dot])
			std::cout << "float: " << static_cast<float>(d)  << ".0f"<< std::endl;
		else
			std::cout << "float: " << static_cast<float>(d)  << "f"<< std::endl;
	}
	//Double
	long double ld =  static_cast<long double>(std::strtod(value.c_str(), NULL));
	if(ld > DBL_MAX && ld < -DBL_MAX)
		std::cout << "double: out of range\n";
	if(d == static_cast<int>(d))
		std::cout << "double: " << d  << ".0"<< std::endl;
	else 
		std::cout << "double: " << d << std::endl;
}

int ft_identify(std::string value, t_identify *flags)
{
	int n = 0;
	int pos = 0;
	int posdot = 0;
	if (value.length() == 1 &&  (value[n] > '9' || value[n] < '0'))
			return (flags->character = 1, 1);
	if(value[0] == 'f' || value[0] == '.')
		return 0;
	if(value[0] == '-')
	{
		flags->minus = 1;
		n++;
	}
	if(!value[n])
		return 0;
	while((value[n] >= '0' && value[n] <= '9') || value[n] == 'f' || value[n] == '.')
	{
		if(value[n] == 'f')
		{
			pos = n;
			flags->fnum++;
			if(flags->fnum != 1)
				return 0;
		}
		if(value[n] == '.')
		{
			posdot = n;
			flags->dot++;
			if(flags->dot != 1)
				return 0;
		}
		n++;
	}
	if(flags->fnum == 1 && (value[pos - 1] >= '0' && value[pos -1] <= '9') && value.length() == (size_t)pos)//añadir que la f se el ultimo character
		return (flags->fl = 1, 1);
	if(flags->dot == 1 && (value[posdot + 1] >= '0' && value[posdot + 1] <= '9'))
		return(flags->dbl = 1, 1);
	if(!flags->fnum && !flags->dot && !value[n])
		return(flags->num = 1, 1);
	std::cerr << "This argument is wrong" << std::endl;
	exit (1);
}

void initflags(t_identify *flags)
{
	flags->character = 0;
	flags->character = 0;
	flags->dot = 0;
	flags->fl = 0;
	flags->fnum = 0;
	flags->minus = 0;
	flags->num = 0;
}

void ScalarConverter::convert(std::string value)
{
	t_identify flags;
	initflags(&flags);
	if (value == "nan" || value == "-nan" || value == "+nan"
		|| value == "nanf" || value == "-nanf" || value == "+nanf")
		{
			print_nan(value);
			return ;
		}
	if(value == "inf" || value == "+inf" || value == "-inf"
		|| value == "inff" || value == "+inff" || value == "-inff")
		{
			print_inf(value);
			return ;
		}
	if(!ft_identify(value, &flags))
	{
		std::cout << "Invalid value\n"; 
		return;
	}
	if(flags.character)
	{
		print_char(value);
		return;
	}
	if(flags.num)
	{
		print_int(value);
		return;
	}
	if(flags.fl)
	{
		print_float(value);
		return;
	}
	if(flags.dbl)
	{
		print_double(value);
		return;
	}
}