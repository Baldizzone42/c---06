/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:28:41 by jormoral          #+#    #+#             */
/*   Updated: 2025/03/26 17:48:00 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data test = {1 , 'p'};
	std::cout << &test << std::endl;
	uintptr_t upointer;
	upointer = Serializer::serialize(&test);
	
	std::cout << "Uintptr_t : " << upointer << std::endl;
	//std::cout << "int: " << test.n << ". char: " << test.a << std::endl;
	
	Data* nwe;
	nwe = Serializer::deserialize(upointer);

	/* std::cout << &test << std::endl;
	std::cout << nwe */
	std::string value = "42.0f";
	std::cout << value.size() << std::endl;
	std::cout << "Data * : " << nwe << std::endl;
}