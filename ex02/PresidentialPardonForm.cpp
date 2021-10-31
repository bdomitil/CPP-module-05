#include "PresidentialPardonForm.hpp"

const char* PresidentialPardonForm :: GradeTooHighException ::  what(void) const throw ()
{
	return ("Exception: sign grade is too high");
}

const char* PresidentialPardonForm :: GradeTooLowException ::  what(void) const throw ()
{
	return ("Exception: sign grade is too low");
}

const char* PresidentialPardonForm :: ExecTooHighException ::  what(void) const throw ()
{
	return ("Exception: exec grade is too high");
}

const char* PresidentialPardonForm :: ExecTooLowException ::  what(void) const throw ()
{
	return ("Exception: exec grade is too low");
}

const char* PresidentialPardonForm :: NotSignedException ::  what(void) const throw ()
{
	return ("Exception: Form is not signed");
}


PresidentialPardonForm  :: PresidentialPardonForm(string target) : Form(target, 25, 5)
{

}

PresidentialPardonForm& PresidentialPardonForm :: operator= (PresidentialPardonForm &second)
{
	(void)second;
	return (*this);
}

PresidentialPardonForm :: PresidentialPardonForm(PresidentialPardonForm &copy) : Form(copy)
{

}

bool PresidentialPardonForm :: beExecuted(const Bureucrat &bureucrat) const 
{
	try
	{
	if (!getStatus())
		throw NotSignedException();
	else if (getExecGrade() < bureucrat.getGrade())
		throw ExecTooLowException();        
	else
		{
			std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Failed to execute PresidentalForm because of " << e.what() << std::endl;
	}
	return (true);
}

