/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:23:20 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/18 15:12:02 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
  public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);

  private:
	std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
