/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/24 20:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <exception>

# define GRADE_HI 1
# define GRADE_LO 150

class Bureaucrat;

class Form
{
	private:
		std::string _name;
		bool _signed;
		int _gradeToSign;
		int _gradeToExecute;

	public:
		Form();
		Form(const Form& other);
		Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
		~Form();

		Form& operator=(const Form& other);

		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		bool beSigned(Bureaucrat& bureaucrat);

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("");
				}
		};
};

std::ostream& operator<<(std::ostream& oStream, const Form& Form);

#endif
