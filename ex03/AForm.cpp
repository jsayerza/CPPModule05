/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/24 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm default constructor called" << std:: endl;
}

AForm::AForm(const AForm& other) : _name(other._name), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm " << _name << " default constructor called" << std:: endl;
}

AForm::AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute)
	: _name(name), _signed(isSigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "AForm " << _name << " constructor called" << std:: endl;
}

AForm::~AForm()
{
	std::cout << "AForm " << _name << " destructor called" << std:: endl;
}

AForm& AForm::operator=(const AForm& other)
{
	_name = other._name;
	_gradeToSign = other._gradeToSign;
	std::cout << "AForm " << _name << " assignment operator constructor called" << std:: endl;
	return (*this);
}

std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

bool AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	_signed = true;
	return (true);
}

void AForm::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw UnsignedFormException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
}


std::ostream& operator<<(std::ostream& oStream, const AForm & AForm)
{
	oStream << "AForm " << AForm.getName() << ". Signed: " << AForm.getSigned();
	oStream << ", Grade to be signed: " << AForm.getGradeToSign();
	oStream << ", Grade to be executed: " << AForm.getGradeToExecute();
	return (oStream);
}
