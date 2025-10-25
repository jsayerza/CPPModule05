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
#include "Form.hpp"

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

		Form form0("form0", false, 100, 10);
		std::cout << form0 << std::endl;
		Form form1("form1", false, 100, 10);
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

	return (0);
}