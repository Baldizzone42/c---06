/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 19:51:33 by jormoral          #+#    #+#             */
/*   Updated: 2025/03/25 20:46:44 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>
# include <cstdlib>
# include "Data.h"

class Serializer
{
	public:
		static Data* deserialize(uintptr_t raw);
		static uintptr_t serialize(Data* ptr);
	private:
		Serializer();
		~Serializer();
		Serializer(const Serializer &other);
		Serializer& operator=(const Serializer &other);
};


#endif