/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 15:55:03 by jormoral          #+#    #+#             */
/*   Updated: 2025/03/27 12:59:49 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if(argc != 2 || !argv[1][0])
	{
		std::cout << "try another argument\n";
		return 1;
	}
	///falta nan y inf con todas sus posibilidas (-nan nan.f ect)
	ScalarConverter::convert(argv[1]);
	return 0;
}