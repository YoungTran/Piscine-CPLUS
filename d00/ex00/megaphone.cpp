/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 04:00:41 by ytran             #+#    #+#             */
/*   Updated: 2018/10/02 04:00:42 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

void    print_str(char *str)
{
    int i;
    char c;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            c = toupper(str[i]);
        else
            c = str[i];
        std::cout << c;
        i++;
    }
}

int     main(int argc, char **argv)
{
    int i = 0;

    if (argc == 1)
    {
     std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
     return (0);
    }
    while (argv[++i])
        print_str(argv[i]);
    std::cout << std::endl;
    return (0);
}
