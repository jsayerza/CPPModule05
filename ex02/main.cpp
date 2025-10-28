/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/24 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
    std::cout << std::boolalpha;
		
	try 
	{
		Bureaucrat pepe("pepe", 2);
		Bureaucrat mimi("mimi", 149);
		std::cout << mimi << std::endl;
		std::cout << pepe << std::endl;
		std::cout << std::endl;

		AForm form0("form0", false, 100, 10);
		std::cout << form0 << std::endl;
		AForm form1("form1", false, 100, 10);
		std::cout << form1 << std::endl;
		std::cout << std::endl;

		pepe.signForm(form0);
		std::cout << form0 << std::endl;
		std::cout << std::endl;

		mimi.signForm(form1);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << std::endl;
		std::cout << "------------------------------------------" << std::endl;
		std::cout << "-- Bureaucrat no pot signar ni executar --" << std::endl;
		Bureaucrat mimi("mimi", 149);
		std::cout << mimi << std::endl;
		std::cout << std::endl;

		ShrubberyCreationForm shrubberyCreationForm("home");
		std::cout << shrubberyCreationForm << std::endl;
		std::cout << std::endl;

		mimi.signForm(shrubberyCreationForm);
		std::cout << shrubberyCreationForm << std::endl;
		std::cout << std::endl;

		mimi.executeForm(shrubberyCreationForm);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "-- Bureaucrat pot signar però no executar --" << std::endl;
		Bureaucrat meme("meme", 140);
		std::cout << meme << std::endl;
		std::cout << std::endl;

		ShrubberyCreationForm shrubberyCreationForm("home");
		std::cout << shrubberyCreationForm << std::endl;
		std::cout << std::endl;

		meme.signForm(shrubberyCreationForm);
		std::cout << shrubberyCreationForm << std::endl;
		std::cout << std::endl;

		meme.executeForm(shrubberyCreationForm);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << std::endl;
		std::cout << "--------------------------------------------------" << std::endl;
		std::cout << "-- Bureaucrat no pot executar xq no està signat --" << std::endl;
		Bureaucrat pepe("pepe", 2);
		std::cout << pepe << std::endl;
		std::cout << std::endl;

		ShrubberyCreationForm shrubberyCreationForm("home");
		std::cout << shrubberyCreationForm << std::endl;
		std::cout << std::endl;

		pepe.executeForm(shrubberyCreationForm);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "-- Bureaucrat pot signar i executar --------" << std::endl;
		Bureaucrat pepe("pepe", 2);
		std::cout << pepe << std::endl;
		std::cout << std::endl;

		ShrubberyCreationForm shrubberyCreationForm("home");
		std::cout << shrubberyCreationForm << std::endl;
		std::cout << std::endl;

		pepe.signForm(shrubberyCreationForm);
		std::cout << shrubberyCreationForm << std::endl;
		std::cout << std::endl;

		pepe.executeForm(shrubberyCreationForm);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "-- Bureaucrat no pot executar Pardon --------" << std::endl;
		Bureaucrat bur0("Nono", 10);
		std::cout << bur0 << std::endl;
		std::cout << std::endl;

		PresidentialPardonForm pardonForm("Arthur Dent");
		std::cout << pardonForm << std::endl;
		std::cout << std::endl;

		bur0.signForm(pardonForm);
		std::cout << pardonForm << std::endl;
		std::cout << std::endl;

		bur0.executeForm(pardonForm);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "-- Bureaucrat sí pot executar Pardon --------" << std::endl;
		Bureaucrat bur0("Sisi", 5);
		std::cout << bur0 << std::endl;
		std::cout << std::endl;

		PresidentialPardonForm pardonForm("Charlie Brown");
		std::cout << pardonForm << std::endl;
		std::cout << std::endl;

		bur0.signForm(pardonForm);
		std::cout << pardonForm << std::endl;
		std::cout << std::endl;

		bur0.executeForm(pardonForm);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		std::cout << "-- Bureaucrat no pot executar Robotomy --" << std::endl;
		Bureaucrat bur0("Nono", 70);
		std::cout << bur0 << std::endl;
		std::cout << std::endl;

		RobotomyRequestForm robotomyForm("Marvin");
		std::cout << robotomyForm << std::endl;
		std::cout << std::endl;

		bur0.signForm(robotomyForm);
		std::cout << robotomyForm << std::endl;
		std::cout << std::endl;

		bur0.executeForm(robotomyForm);
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try 
	{
		std::cout << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		std::cout << "-- Bureaucrat sí pot executar Robotomy --" << std::endl;
		Bureaucrat bur0("Sisi", 5);
		std::cout << bur0 << std::endl;
		std::cout << std::endl;

		RobotomyRequestForm robotomyForm("Marvin");
		std::cout << robotomyForm << std::endl;
		std::cout << std::endl;

		bur0.signForm(robotomyForm);
		std::cout << robotomyForm << std::endl;
		std::cout << std::endl;

		srand(time(NULL));

		bur0.executeForm(robotomyForm);
		std::cout << "Intent 1" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 2" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 3" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 4" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 5" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 6" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 7" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 8" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 9" << std::endl;
		bur0.executeForm(robotomyForm);
		std::cout << "Intent 10" << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}