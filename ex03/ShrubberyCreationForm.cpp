#include "ShrubberyCreationForm.hpp"

const char* ShrubberyCreationForm :: GradeTooHighException ::  what(void) const throw ()
{
	return ("Exception: sign grade is too high");
}

const char* ShrubberyCreationForm :: GradeTooLowException ::  what(void) const throw ()
{
	return ("Exception: sign grade is too low");
}

const char* ShrubberyCreationForm :: ExecTooHighException ::  what(void) const throw ()
{
	return ("Exception: exec grade is too high");
}

const char* ShrubberyCreationForm :: ExecTooLowException ::  what(void) const throw ()
{
	return ("Exception: exec grade is too low");
}

const char* ShrubberyCreationForm :: NotSignedException ::  what(void) const throw ()
{
	return ("Exception: Form is not signed");
}


ShrubberyCreationForm  :: ShrubberyCreationForm(string target) : Form(target, 145, 137)
{

}

ShrubberyCreationForm& ShrubberyCreationForm :: operator= (ShrubberyCreationForm &second)
{
	(void)second;
	return (*this);
}

ShrubberyCreationForm :: ShrubberyCreationForm(ShrubberyCreationForm &copy) : Form(copy)
{

}

bool ShrubberyCreationForm :: beExecuted(const Bureucrat &bureucrat) const 
{
	try
	{
	if (!getStatus())
		throw NotSignedException();
	else if (getExecGrade() < bureucrat.getGrade())
		throw ExecTooLowException();        
	else
		{
			string fileName = getName() + "_shrubbery";
			std::ofstream out(fileName);
			if (!out.is_open())
				throw std::exception();
			out << \
		    "       _-_" << std::endl << \
			"    /~~   ~~\\ " << std::endl << \
			" /~~         ~~\\ " << std::endl << \
			"{               }" << std::endl << \
			" \\  _-     -_  /" << std::endl << \
			"   ~  \\ //  ~" << std::endl << \
			"_- -   | | _- _" << std::endl << \
			"  _ -  | |   -_" << std::endl << \
			"      // \\" << std::endl;
			out.close();
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Failed to execute " << getName() << " because of " << e.what() << std::endl;
	}
	return (true);
}

