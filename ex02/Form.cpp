#include "Form.hpp"

Form :: Form(const string name, const int signGrade, const int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{

}

Form :: Form (const Form &copy) :  _signGrade(this->getSignGrade()), _execGrade(this->getExecGrade())
{
	*this = copy;
}

Form& Form :: operator=(const Form &second)
{
	this->_signed = second._signed;
	return (*this);
}

const string Form :: getName() const
{
	return (_name);
}


int Form ::  getExecGrade() const
{
	return (_execGrade);
}

int Form ::  getSignGrade() const
{
	return (_signGrade);
}


bool Form ::  getStatus() const
{
	return (_signed);
}

void Form :: beSigned(const Bureucrat &bueracrat) 
{
	if (bueracrat.getGrade() <= _signGrade)
		_signed = true;
	else
		throw GradeTooLowException();
}

bool Form :: beExecuted(const Bureucrat &bueracrat) 
{
	if (bueracrat.getGrade() <= _execGrade)
		return true;
	else
		throw Form :: GradeTooLowException();
}


const char* Form :: GradeTooHighException ::  what(void) const throw ()
{
    return ("Exception: grade is too high");
}

const char* Form :: GradeTooLowException ::  what(void) const throw ()
{
    return ("Exception: grade is too low");
}

std::ostream& operator<<(std::ostream &stream, Form &form)
{
	stream << "  Form name : " << form.getName();
	stream << "\n  is signed : " << form.getStatus();
	stream << "\n  execute grade  : " << form.getExecGrade();
	stream << "\n  sign grade  : " << form.getSignGrade() << std::endl;
	return (stream);
}

