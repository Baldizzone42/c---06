/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 20:08:33 by jormoral          #+#    #+#             */
/*   Updated: 2025/03/25 20:50:53 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout << "Default Serializer\n";
}


Serializer::~Serializer(){
	std::cout << "Destructor Serializer\n";
}

Serializer::Serializer(const Serializer &other)
{
	(void)other;
	std::cout << "Copy Constructor Serializer\n";
}

Serializer& Serializer::operator=(const Serializer &other)
{
	if(this != &other)
		*this = other;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}