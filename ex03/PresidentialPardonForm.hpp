#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    PresidentialPardonForm();
public:
    PresidentialPardonForm(string target);
    PresidentialPardonForm(PresidentialPardonForm &copy);
    PresidentialPardonForm& operator= (PresidentialPardonForm &second);
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