/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/24 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor called" << std:: endl;
}

Form::Form(const Form& other) : _name(other._name), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form " << _name << " default constructor called" << std:: endl;
}

Form::Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute)
	: _name(name), _signed(isSigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	std::cout << "Form " << _name << " constructor called" << std:: endl;
}

Form::~Form()
{
	std::cout << "Form " << _name << " destructor called" << std:: endl;
}

Form& Form::operator=(const Form& other)
{
	_name = other._name;
	_gradeToSign = other._gradeToSign;
	std::cout << "Form " << _name << " assignment operator constructor called" << std:: endl;
	return (*this);
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

bool Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > getGradeToSign())
		throw GradeTooLowException();
	_signed = true;
	return (true);
}


std::ostream& operator<<(std::ostream& oStream, const Form& Form)
{
	oStream << "Form " << Form.getName() << ". Signed: " << Form.getSigned();
	oStream << ", Grade to be signed: " << Form.getGradeToSign();
	oStream << ", Grade to be executed: " << Form.getGradeToExecute();
	return (oStream);
}
