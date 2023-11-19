/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:23:20 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/19 12:10:02 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
  public:
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string name);

  private:
	std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
