/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/24 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std:: endl;
}

Intern::Intern(const Intern&)
{
	std::cout << "Intern copy constructor called" << std:: endl;
}

Intern& Intern::operator=(const Intern&)
{
	std::cout << "Intern assignment operator constructor called" << std:: endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std:: endl;
}


AForm* Intern::makeForm(const std::string& form, const std::string& target)
{
	if (target.empty())
	{
		std::cerr << "Error: Invalid target name" << std:: endl;
		return (NULL);
	}
	std::string _formList[_formsNum] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
	int i;
	for (i = 0; i < _formsNum; i++)
	{
		if (form == _formList[i])
			break;
	}
	if (i >= _formsNum)
	{
			std::cerr << "Error: Invalid form name" << std:: endl;
			return (NULL);
	}
	AForm* newForm = NULL;
	switch (i)
	{
		case 0:
			newForm = new ShrubberyCreationForm(target);
			break;
		case 1:
			newForm = new PresidentialPardonForm(target);
			break;
		case 2:
			newForm = new RobotomyRequestForm(target);
			break;
		default:
			std::cerr << "Error: Invalid form name" << std:: endl;
			return (NULL);
	}
	std::cout << "Intern creates " << form << std:: endl;
	return (newForm);
}
