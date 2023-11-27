/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:05:47 by sbouheni          #+#    #+#             */
/*   Updated: 2023/11/27 14:06:10 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(void)
{
	Harl harl;

	harl.Complain("DEBUG");
	harl.Complain("INFO");
	harl.Complain("WARNING");
	harl.Complain("ERROR");
	return (0);
}
