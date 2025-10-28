/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/10/24 20:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>

// # define GRADE_HI 1
// # define GRADE_LO 150

class Bureaucrat;

class AForm
{
	// private:
	protected:
		std::string _name;
		bool _signed;
		int _gradeToSign;
		int _gradeToExecute;
		// std::string target;

	public:
		AForm();
		AForm(const AForm& other);
		AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
		virtual ~AForm();

		AForm& operator=(const AForm& other);

		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		virtual bool beSigned(Bureaucrat const & bureaucrat);
		virtual void execute(Bureaucrat const & executor) const;

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("");
				}
		};

		class UnsignedFormException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Unsigned form. ");
				}
		};
};

std::ostream& operator<<(std::ostream& oStream, const AForm& AForm);

#endif
