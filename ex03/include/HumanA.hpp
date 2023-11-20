/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:41:41 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/20 12:37:13 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

#include <string>
#include <iostream>

class HumanA
{
	public:	
		HumanA(std::string name, Weapon &weapon);
		void attack();
	private:
		Weapon& weapon;
		std::string name;
};

#endif
