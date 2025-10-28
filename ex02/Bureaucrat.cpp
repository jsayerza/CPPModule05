/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/24 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std:: endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat " << _name << " default constructor called" << std:: endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat " << _name << " copy constructor called" << std:: endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " destructor called" << std:: endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	_name = other._name;
	_grade = other._grade;
	std::cout << "Bureaucrat " << _name << " assignment operator constructor called" << std:: endl;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
	if (_grade == GRADE_HI)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade == GRADE_LO)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << getName() << " couldn't sign " << form.getName();
		std::cerr << " because bureaucrat's grade (" << getGrade();
		std::cerr << ") is too low to sign this form (" << form.getGradeToSign() << ")." << '\n';
	}
}

void Bureaucrat::executeForm(AForm const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << getName() << " couldn't execute " << form.getName();
		if (!form.getSigned())
		{
			std::cerr << " because the form " << form.getName() << " is unsigned." << '\n';
		}
		else
		{		
			std::cerr << " because bureaucrat's grade (" << getGrade();
			std::cerr << ") is too low to execute this form (" << form.getGradeToExecute() << ")." << '\n';
		}	
	}
}


std::ostream& operator<<(std::ostream& oStream, const Bureaucrat& bureaucrat)
{
	oStream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (oStream);
}
