/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:45:14 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/20 13:13:53 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

#include <string>
#include <iostream>

class HumanB
{
	public:	
		HumanB(std::string name);
		void attack();
		void setWeapon(Weapon& weapon);
	private:
		Weapon *weapon;
		std::string name;
};

#endif
