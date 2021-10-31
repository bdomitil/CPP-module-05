#ifndef FORM_HPP
#define FORM_HPP
#include "Bureucrat.hpp"
#include <iostream>

class Bureucrat;
typedef std::string string;
typedef std::exception exception;


class Form
{
private:
	const string _name;
	bool _signed;
	const int _signGrade;
	const int _execGrade;
	Form();
public :
	Form(const string name, const int signGrade, const int execGrade);
	Form(const Form &copy);
	~ Form(){};
	const string getName() const;
	bool getStatus() const;
	int getSignGrade() const;
	int getExecGrade() const;
	Form& operator=(const Form &second);
	void beSigned(const Bureucrat& bureucrat);
	virtual bool beExecuted(const Bureucrat& bureucrat) const = 0;

   	class GradeTooHighException : public std::exception{
	public :
		virtual const char* what(void) const throw ();
	};
	class GradeTooLowException : public std::exception {
	public :
		virtual const char* what(void) const throw ();
	};
};

std::ostream& operator<<(std::ostream &stream, Form &form);

#endif