/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:50:47 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/19 12:14:52 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

#ifndef NUMBER_OF_ZOMBIES
# define NUMBER_OF_ZOMBIES 10
#endif

int main(void)
{
	Zombie* zombies;

	zombies = zombieHorde(NUMBER_OF_ZOMBIES, "Michael Jackson");
	for (int i = 0; i < NUMBER_OF_ZOMBIES; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
