/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:36:24 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/19 12:09:54 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << this->name << " has been killed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
