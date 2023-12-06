/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:06:01 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/06 05:49:01 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

#include <iostream>

int main(void)
{
	ClapTrap a("Salah");
	ScavTrap d("Sarah");
	FragTrap c("Sami");

	a.attack("test");
	a.takeDamage(10);
	c.attack("target");
	c.takeDamage(20);
	d.takeDamage(10);
	c.highFivesGuys();
	d.takeDamage(10);
	d.guardGate();
	d.attack("test");
	return (0);
}
