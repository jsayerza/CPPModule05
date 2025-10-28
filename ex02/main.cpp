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

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
		std::cout << "--------------------------------------------" << std::endl;
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
		std::cout << "--------------------------------------------" << std::endl;
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

	return (0);
}