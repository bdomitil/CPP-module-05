#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    RobotomyRequestForm();
public:
    RobotomyRequestForm(string target);
    RobotomyRequestForm(RobotomyRequestForm &copy);
    RobotomyRequestForm& operator= (RobotomyRequestForm &second);
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