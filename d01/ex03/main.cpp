/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 18:29:38 by ytran             #+#    #+#             */
/*   Updated: 2018/10/03 18:29:39 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(int argc, char **argv)
{
    int n = 0;
    int i = 0;

    if (argc != 2)
	{
		std::cout << "Welcome to the random WhiteWalker generator.." << std::endl;
        std::cout << "Please enter a number: " << std::endl;
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		n = n * 10 + (argv[1][i] - '0');
		i++;
	}
	std::cout << "You've spawned " << n << " WhiteWalkers." << std::endl << std::endl;
	ZombieHorde invasion = ZombieHorde(n);
	invasion.announce();
	std::cout << std::endl << "You're lucky.. They have left now.." << std::endl << std::endl;
    return (0);
}

