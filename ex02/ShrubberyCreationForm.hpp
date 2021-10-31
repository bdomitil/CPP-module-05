#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
    ShrubberyCreationForm();
public:
    ShrubberyCreationForm(string target);
    ShrubberyCreationForm(ShrubberyCreationForm &copy);
    ShrubberyCreationForm& operator= (ShrubberyCreationForm &second);
    virtual bool beExecuted(const Bureucrat &bureucrat) const;


    class GradeTooHighException : public std::exception{
	public :
		virtual const char* what(void) const throw ();
	};
	class GradeTooLowException : public std::exception {
	public :
		virtual const char* what(void) const throw ();
	};
    class ExecTooLowException : public std::exception {
	public :
		virtual const char* what(void) const throw ();
	};
     class ExecTooHighException : public std::exception {
	public :
		virtual const char* what(void) const throw ();
	};
    class NotSignedException : public std::exception {
	public :
		virtual const char* what(void) const throw ();
	};
};

#endif 