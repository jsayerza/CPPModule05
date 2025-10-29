/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/29 10:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Tests.hpp"

void	test0(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test0 ---------------------------------------------" << std::endl;
		std::cout << "-- Crea AForm. Bureaucrates poden / no poden signar --" << std::endl;
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
}

void	test1(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test1 ---------------------------------" << std::endl;
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
}

void	test2(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test2 -----------------------------------" << std::endl;
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
}

void	test3(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test3 -----------------------------------------" << std::endl;
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
}

void	test4(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test4 -----------------------------------" << std::endl;
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
}

void	test5(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test5 ------------------------------------" << std::endl;
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
}

void	test6(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test6 ------------------------------------" << std::endl;
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
}

void	test7(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test7 --------------------------------" << std::endl;
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
}

void	test8(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test8 --------------------------------" << std::endl;
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
}

void	test9(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test9 ---------------------------" << std::endl;
		std::cout << "-- Intern no pot crear noRobotomy --" << std::endl;
		Bureaucrat bur0("Sisi", 5);
		std::cout << bur0 << std::endl;
		std::cout << std::endl;

		Intern int0;
		AForm* requestedForm;
		requestedForm = int0.makeForm("noRobotomyRequestForm", "Marvin");
		if (!requestedForm)
		{
			delete requestedForm;
		}
		else
		{
			std::cout << *requestedForm << std::endl;
			std::cout << std::endl;

			bur0.signForm(*requestedForm);
			std::cout << *requestedForm << std::endl;
			std::cout << std::endl;

			srand(time(NULL));

			bur0.executeForm(*requestedForm);
			std::cout << "Intent 1" << std::endl;
			std::cout << std::endl;

			delete requestedForm;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

void	test10(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test10 ----------------------------------------" << std::endl;
		std::cout << "-- Intern no pot crear Robotomy xq name.empty() --" << std::endl;
		Bureaucrat bur0("Sisi", 5);
		std::cout << bur0 << std::endl;
		std::cout << std::endl;

		Intern int0;
		AForm* requestedForm;
		requestedForm = int0.makeForm("RobotomyRequestForm", "");
		if (!requestedForm)
		{
			delete requestedForm;
		}
		else
		{
			std::cout << *requestedForm << std::endl;
			std::cout << std::endl;

			bur0.signForm(*requestedForm);
			std::cout << *requestedForm << std::endl;
			std::cout << std::endl;

			srand(time(NULL));

			bur0.executeForm(*requestedForm);
			std::cout << "Intent 1" << std::endl;
			std::cout << std::endl;

			delete requestedForm;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

void	test11(void)
{
	try 
	{
		std::cout << std::endl;
		std::cout << "-- Test11 ---------------------" << std::endl;
		std::cout << "-- Intern pot crear Robotomy --" << std::endl;
		Bureaucrat bur0("Sisi", 5);
		std::cout << bur0 << std::endl;
		std::cout << std::endl;

		Intern int0;
		AForm* requestedForm;
		requestedForm = int0.makeForm("RobotomyRequestForm", "Marvin");
		if (!requestedForm)
		{
			delete requestedForm;
		}
		else
		{
			std::cout << *requestedForm << std::endl;
			std::cout << std::endl;

			bur0.signForm(*requestedForm);
			std::cout << *requestedForm << std::endl;
			std::cout << std::endl;

			srand(time(NULL));

			bur0.executeForm(*requestedForm);
			std::cout << "Intent 1" << std::endl;
			std::cout << std::endl;

			delete requestedForm;
		}
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}