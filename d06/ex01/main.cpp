/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 20:05:55 by ytran             #+#    #+#             */
/*   Updated: 2018/10/10 20:06:07 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Cereal.hpp"

void 	*serialize(void)
{
	int 	i = -1;
	char	*data = new char[42];

	char	output[] = {
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789abcdefghijklmnopqrstuvwxyz"
		};
		std::cout << "Serialized of Concatenated Arrays/Int Being Made: " << std::endl;
		while (++i < 8)
			data[i] = output[rand() % 42];
		i = 7;
		while (++i < 20)
			data[i] = rand() % 256 - 128;
		i = 11;
		while (++i < 42)
			data[i] = output[rand() % 42];
		data[i] = '\0';
		i = -1;
		std::cout << "Random Array 1: ";
		while (++i < 8)
			std::cout << data[i];
	 	std::cout << std::endl << "Random Integer: " << static_cast<int>(data[8]);
		i = 11;
		std::cout << std::endl << "Random Array 2: ";
		while (++i < 42)
			std::cout << data[i];
		std::cout << std::endl;
		return (reinterpret_cast<void*>(data));
}

Data 	*deserialize(void	*raw)
{
	Data 		*data = new Data;
	char		*input = reinterpret_cast<char*>(raw);
	
	data->n = 0;
	int i = -1;
	while (++i < 8)
		data->s1 = data->s1 + input[i];
	data->n = input[8];
	i = 11;
	while (++i < 42)
	data->s2 = data->s2 + input[i];
	return (data);
}

int	main(void)
{
	void	*serial;
	Data	*deserial;
	
	srand(time(0));
	serial = serialize();
	std::cout << "Address of the random serialized data" << std::endl << serial << std::endl << std::endl;
	deserial = deserialize(serial);
	std::cout << "Results of deserializing the serialized data using the address" << std::endl <<
	"Random Array 1: " << deserial->s1 << std::endl << 
	"Random Integer: " << deserial->n << std::endl << 
	"Random Array 2: " << deserial->s2 << std::endl;
	delete deserial;
	return (0);
}
