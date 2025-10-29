/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/24 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class Intern
{
	private:
		static const int _formsNum = 3;
		Intern(const Intern&);
		Intern& operator=(const Intern&);

	public:
		Intern();
		~Intern();

		AForm* makeForm(const std::string& form, const std::string& target);
};

#endif
