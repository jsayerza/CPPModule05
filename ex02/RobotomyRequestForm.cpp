/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/28 18:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target )
	: AForm("RobotomyRequestForm", false, 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm default constructor called" << std:: endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
	: AForm(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm " << this->getName() << " default constructor called" << std:: endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm " << this->getName() << " destructor called" << std:: endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		_target = other._target;
	}
	std::cout << "RobotomyRequestForm " << this->getName() << " assignment operator constructor called" << std:: endl;
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw AForm::UnsignedFormException();

	if (executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException();
	
	AForm::execute(executor);
	
	std::cout << std::endl;
	std::cout << "* BZZZZZ DRRRR BZZZZZ *" << std::endl;
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized successfully." << std::endl;	
	else
		std::cout << getTarget() << "'s robotomy failed." << std::endl;	
}
