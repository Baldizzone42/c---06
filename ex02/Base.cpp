/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:34:48 by jormoral          #+#    #+#             */
/*   Updated: 2025/03/26 15:51:27 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base::Base(){
	std::cout << "Base constructor\n";
}

Base::~Base(){
	std::cout << "Base Destructor\n";
}

Base* generate(void)
{
	srand(static_cast<unsigned int>(time(0)));
	int n = rand();
	std::cout << "Random Generate Nº " << n << std::endl;
	std::cout << "modulo " << n % 3 << std::endl;
	if( n % 3 == 0)
		return (new A);
	else if(n % 3 == 1)
		return (new B);
	return (new C);
}

void identify(Base *p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "Identify *Base is A\n";
	else if(dynamic_cast<B*>(p))
		std::cout << "Identify *Base is B\n";
	else if(dynamic_cast<C*>(p))
		std::cout << "Identify *Base is C\n";
	else
		std::cerr << "Something went wrong..\n";
}

void identify(Base &p)
{
	try 
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Identify &Base is A\n";
		
	}
	catch(...)
	{
		try
		{
			B &b= dynamic_cast<B&>(p);
			(void)b;
			std::cout << "Identify &Base is B\n";
		}
		catch(...)
		{
			try 
			{
				C &c= dynamic_cast<C&>(p);
				(void)c;
				std::cout << "Identify &Base is C\n";
			}
			catch(...)
			{
				std::cout << "not found\n";
			}
		}
	}
}