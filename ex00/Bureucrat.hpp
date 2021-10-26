#ifndef BUREUCRAT_HPP
#define BUREUCRAT_HPP

#include <iostream>
typedef std::string string;
typedef std::exception exception;

class Bureucrat
{
private:
	const string _name;
	int		_grade;
public :
	Bureucrat();
	~ Bureucrat();
	Bureucrat(string name);
	Bureucrat(string name, int grade);
	Bureucrat(Bureucrat &copy);
	Bureucrat& operator=(Bureucrat &second);
	const string getName(void) const;
	void upGrade(void);
	void deGrade(void);
	void signForm(Form &form);
	class GradeTooHighException : public exception{
	public :
		virtual const char* what(void) const throw ();
	};
	class GradeTooLowException : public exception {
	public :
		virtual const char* what(void) const throw ();
	};
};

std::ostream& operator<< (std::ostream &stream,  Bureucrat &bureucrat);


#endif