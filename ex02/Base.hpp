/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 12:33:01 by jormoral          #+#    #+#             */
/*   Updated: 2025/03/26 13:42:53 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
class Base
{
	public:
	Base();
	virtual ~Base();

	
	private:
};

Base* generate(void);
void identify(Base *p);
void identify(Base &p);



#endif