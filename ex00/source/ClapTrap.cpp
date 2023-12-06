/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouheni <sbouheni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 20:03:49 by sbouheni          #+#    #+#             */
/*   Updated: 2023/12/06 14:13:41 by sbouheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() 
{
	std::cout << "ClapTrap constructed" << std::endl;	
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	this->name = src.name;
	this->hit_point = src.hit_point;
	this->energy_point = src.energy_point;
	this->attack_damage = src.attack_damage;
	std::cout << "ClapTrap copy done" << std::endl;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_point != 0)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target
			<< ", causing " << this->attack_damage << " points of damage!"
			<< std::endl;
		this->energy_point--;
	}
	else
		std::cout << "ClapTrap " << this->name << " has no energy point left!"
			<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point != 0)
	{
		std::cout << "ClapTrap " << this->name << " take " << amount
			<< " points of damage!" << std::endl;
		this->hit_point -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " has no hit point left!"
			<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_point != 0)
	{
		std::cout << "ClapTrap " << this->name << " be repaired by " << amount
			<< " points of damage!" << std::endl;
		this->hit_point += amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " has no energy point left!"
			<< std::endl;
}
