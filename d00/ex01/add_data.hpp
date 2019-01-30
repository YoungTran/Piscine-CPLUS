/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 05:11:36 by ytran             #+#    #+#             */
/*   Updated: 2018/10/02 05:11:37 by ytran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ADD_DATA_H
# define ADD_DATA_H

#include <string>

class Data {
    
    public:

        Data(void);
        ~Data(void);

        void            add_data(std::string, int i);
        std::string     get_data(int i);
    
    private:
        std::string _firstname;
        std::string _lastname;
        std::string _nickname;
        std::string _login;
        std::string _address;
        std::string _email;
        std::string _phone;
        std::string _birthday;
        std::string _meal;
        std::string _underwear;
        std::string _secret;
};

#endif
