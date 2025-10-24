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

int	main(void)
{
	try 
	{
		Bureaucrat bur0 ;
		Bureaucrat pepe("pepe", 2);
		Bureaucrat mimi("mimi", 149);
		Bureaucrat mama(mimi);
		std::cout << std::endl;

		std::cout << bur0 << std::endl;
		std::cout << std::endl;
		bur0 = pepe;
		std::cout << bur0 << std::endl;
		std::cout << std::endl;

		std::cout << mama << std::endl;
		std::cout << std::endl;

		std::cout << mimi << std::endl;
		mimi.decrementGrade();
		std::cout << mimi << std::endl;
		mimi.decrementGrade();
		std::cout << mimi << std::endl;
		std::cout << std::endl;

		std::cout << pepe << std::endl;
		pepe.decrementGrade();
		std::cout << pepe << std::endl;
		pepe.incrementGrade();
		std::cout << pepe << std::endl;
		pepe.incrementGrade();
		std::cout << pepe << std::endl;
		pepe.incrementGrade();
		std::cout << pepe << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
}