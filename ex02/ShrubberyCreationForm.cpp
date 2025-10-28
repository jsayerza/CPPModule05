/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 09:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/26 09:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target )
	: AForm("ShrubberyCreationForm", false, 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std:: endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm " << this->getName() << " default constructor called" << std:: endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm " << this->getName() << " destructor called" << std:: endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	std::cout << "ShrubberyCreationForm " << this->getName() << " assignment operator constructor called" << std:: endl;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	AForm::execute(executor);
	std::string filename = _target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (!file.is_open())
		throw std::runtime_error("Couldn't create file");
	file << "      ^^^\n";
	file << "     ^^^^^\n";
	file << "    ^^^^^^^\n";
	file << "   ^^^^^^^^^\n";
	file << "  ^^^^^^^^^^^\n";
	file << "      |||\n";
	file << "      |||\n";
	file << "      |||" << std::endl;
	file.close();
}
