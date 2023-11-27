/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:06:31 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/27 14:02:57 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# define LEVELS_COUNT 4

# include <iostream>
# include <string>

class Harl
{
	private:
		void Debug(void);
		void Info(void);
		void Warning(void);
		void Error(void);
	public:
		void Complain(std::string level);
};

#endif
