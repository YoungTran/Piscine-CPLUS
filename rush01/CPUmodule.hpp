/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUmodule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:46:38 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/13 20:46:41 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUMODULE_HPP
#define CPUMODULE_HPP

# include "Module.hpp"
# include <sstream>

class CPUmodule : public Module
{
public:
    CPUmodule();
    CPUmodule(CPUmodule const & src);
    CPUmodule &    operator=(CPUmodule const & rhs);
    ~CPUmodule();

    std::string			    getData(void);
    std::string				getUserCPU(void);
	std::string				getSysCPU(void);
	std::string				getIdleCPU(void);
	std::string				getModelCPU(void);
	std::string				getSpeedCPU(void);
	std::string				getCoresCPU(void);

};

#endif
