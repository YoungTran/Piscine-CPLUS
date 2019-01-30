/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:54:02 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 21:54:03 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		message = "HI THIS IS BRAIN";
	std::string 	*ptr = &message;
	std::string		&ref = message;

	std::cout << std::endl << "Displayed with a pointer:" << std::endl << *ptr << std::endl;
	std::cout << std::endl << "Displayed with a reference:" << std::endl << ref << std::endl;
	return (0);
}