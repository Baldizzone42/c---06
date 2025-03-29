/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:42:51 by jormoral          #+#    #+#             */
/*   Updated: 2025/03/26 17:11:20 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"

int main(void)
{

	/* Base *random = generate();
	
	identify(random);
	identify(*random);

	delete random; */
	Base* prueba;
	
	std::cout << "Generate & identify Base *\n";
	prueba = generate();
	identify(prueba);
	std::cout << std::endl;
	
	Base *addr;
	std::cout << "Generate & identify Base &\n";
	addr = generate();
	Base &ref = *addr;
	identify(ref); 
	

	
	//leaks de memoria en a;
	delete prueba;
	delete addr;
	return 0;
}