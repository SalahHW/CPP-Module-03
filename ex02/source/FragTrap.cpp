/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 05:38:55 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/06 05:49:21 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"


FragTrap::FragTrap()
{
	std::cout << "FragTrap constructed" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap " << name << " constructed" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	*this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	this->name = src.name;
	this->hit_point = src.hit_point;
	this->energy_point = src.energy_point;
	this->attack_damage = src.attack_damage;
	std::cout << "FragTrap copy done" << std::endl;
	return (*this);
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " high fives guys" << std::endl;
}
