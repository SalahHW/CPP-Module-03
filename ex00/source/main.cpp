/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:06:01 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/03 12:23:04 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap a("Salah");
	ClapTrap b("Sarah");
	ClapTrap c("Francis");
	ClapTrap d;

	d = a;
	a.attack("test");
	b.attack("test");
	c.attack("test");
	b.beRepaired(20);
	d.takeDamage(10);
	d.takeDamage(10);
	return (0);
}
