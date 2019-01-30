/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 16:55:21 by ytran             #+#    #+#             */
/*   Updated: 2018/10/14 00:34:16 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sys/utsname.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <uuid/uuid.h>
#include <ncurses.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "SFMLDisplay.hpp"
#include "NCursesDiplay.hpp"


void	display_graphic(void)
{
	SFMLDisplay monit;
	monit.play();
}

void    checkarg(int arg)
{
		NcursesDisplay monitor;
		monitor.init(arg);
		monitor.play();
		monitor.quit();
}

void		print_usage(void)
{
	std::cout	<< "Small instruction: " << std::endl
					<< " -visu		- if want visualirator"
					<< "Type the sum of flag numbers to combine blocks" << std::endl
					<< " 1			- Include Host info" << std::endl
					<< " 2			- Include OS info" << std::endl
					<< " 4			- Include Data info" << std::endl
					<< " 8			- Include CPU info" << std::endl
					<< " 16			- Include RAM info" << std::endl
					<< " 32			- Include NET work info" << std::endl
					<< " 64			- Include zaz’s favorite animal" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string val(argv[1]);
		if (!(val.compare("-visu")))
			display_graphic();
		if (atoi(argv[1]))
		{
			int arg = atoi(argv[1]);
			checkarg(arg);
		}
		else
			print_usage();
	}
	else
		print_usage();
	return (0);
}

