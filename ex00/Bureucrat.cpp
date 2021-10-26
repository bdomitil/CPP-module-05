#include "Bureucrat.hpp"

Bureucrat :: Bureucrat() : _name("NoName"), _grade(150)
{
}

Bureucrat :: Bureucrat(string name) : _name(name), _grade(150)
{
}

Bureucrat :: Bureucrat(string name, int grade) : _name(name), _grade(grade)
{
    if (_grade > 150)
        throw GradeTooLowException();
    else if (_grade < 1)
        throw GradeTooHighException();
}

Bureucrat :: ~Bureucrat()
{

}

Bureucrat :: Bureucrat (Bureucrat &copy)
{
    *this = copy;
}

Bureucrat& Bureucrat :: operator= (Bureucrat &second)
{
    this->_grade = second._grade;
    return (*this );
}

int Bureucrat :: getGrade(void) const
{
    return (_grade);
}

const string Bureucrat :: getName(void) const
{
    return (_name);
}

void Bureucrat :: deGrade(void)
{
      if ((_grade + 1) > 150)
        throw  GradeTooLowException();
    _grade++;
}

void Bureucrat :: upGrade(void)
{
      if ((_grade - 1) < 1)
        throw GradeTooHighException();
    _grade--;
}

const char * Bureucrat ::GradeTooHighException ::  what(void) const throw ()
{
    return ("Exception: grade is too high");
}

const char* Bureucrat ::GradeTooLowException ::  what(void) const throw ()
{
    return ("Exception: grade is too low");
}

std::ostream& operator<< (std::ostream &stream,  Bureucrat &bureucrat)
{
	stream << bureucrat.getName() << ", bureucrat grade = " <<  bureucrat.getGrade();
	return (stream);
}

