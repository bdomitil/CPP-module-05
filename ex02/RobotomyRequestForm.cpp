#include "RobotomyRequestForm.hpp"

const char* RobotomyRequestForm :: GradeTooHighException ::  what(void) const throw ()
{
	return ("Exception: sign grade is too high");
}

const char* RobotomyRequestForm :: GradeTooLowException ::  what(void) const throw ()
{
	return ("Exception: sign grade is too low");
}

const char* RobotomyRequestForm :: ExecTooHighException ::  what(void) const throw ()
{
	return ("Exception: exec grade is too high");
}

const char* RobotomyRequestForm :: ExecTooLowException ::  what(void) const throw ()
{
	return ("Exception: exec grade is too low");
}

const char* RobotomyRequestForm :: NotSignedException ::  what(void) const throw ()
{
	return ("Exception: Form is not signed");
}


RobotomyRequestForm  :: RobotomyRequestForm(string target) : Form(target, 72, 45)
{

}

RobotomyRequestForm& RobotomyRequestForm :: operator= (RobotomyRequestForm &second)
{
	(void)second;
	return (*this);
}

RobotomyRequestForm :: RobotomyRequestForm(RobotomyRequestForm &copy) : Form(copy)
{
}

bool RobotomyRequestForm :: beExecuted(const Bureucrat &bureucrat) const 
{
	try
	{
	if (!getStatus())
		throw NotSignedException();
	else if (getExecGrade() < bureucrat.getGrade())
		throw ExecTooLowException();        
	else
		{
			std::cout << "Drahdadah " << getName() << " has been robotomized successfully 50% ofthe time" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Failed to execute " << getName()<<  " because of " << e.what() << std::endl;
	}
	return (true);
}

