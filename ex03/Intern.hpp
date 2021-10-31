#include "Bureucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


const string types[] = {"Robotomy", "Shruberry", "Presidential"};

class Intern
{
public:
    Intern();
    ~ Intern();
    Intern (const Intern &copy);
    Intern& operator= (const Intern &second);
    Form* makeForm(string formType, string target);
};