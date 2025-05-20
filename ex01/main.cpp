/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:28:41 by jormoral          #+#    #+#             */
/*   Updated: 2025/05/20 13:41:29 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	/* Data test = {1 , 'p'};
	std::cout << &test << std::endl;
	uintptr_t upointer;
	upointer = Serializer::serialize(&test);
	
	std::cout << "Uintptr_t : " << upointer << std::endl;
	//std::cout << "int: " << test.n << ". char: " << test.a << std::endl;
	
	Data* nwe;
	nwe = Serializer::deserialize(upointer);
	std::cout << "Data * : " << nwe << std::endl; */

	Data rec = {23, 'x'};
	std::cout << "Direccion Inicial: " << &rec << " " <<rec.n << std::endl;
	uintptr_t prueba = Serializer::serialize(&rec);
	std::cout << "Uintptr_t : " << prueba << std::endl;

	Data *recovery = Serializer::deserialize(prueba);
	std::cout << "Direccion recuperada: " << &recovery << " " << recovery->n << std::endl;
	
}