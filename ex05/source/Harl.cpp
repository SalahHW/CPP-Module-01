/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:14:37 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/27 14:10:30 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

void Harl::Debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::Info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::Warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::Error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::Complain(std::string level)
{
	void (Harl::*complaints[LEVELS_COUNT])(void) = {
		&Harl::Debug,
		&Harl::Info,
		&Harl::Warning,
		&Harl::Error
	};

	std::string levels[LEVELS_COUNT] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < LEVELS_COUNT; i++)
	{
		if (levels[i] == level)
			(this->*complaints[i])();
	}
}
