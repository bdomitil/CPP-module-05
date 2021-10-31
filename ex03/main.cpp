#include "Bureucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
// FAIL ZONE
Intern intern;
Bureucrat bure("mike", 1);
Form *someform ;
// someform = intern.makeForm("Robotomy", "Senior");
someform = intern.makeForm("Shruberry", "Senior");
// someform = intern.makeForm("Presidential", "Senior");
if (someform)
try
{
someform->beSigned(bure);
someform->beExecuted(bure);
}
catch (std::exception &e)
{
	std::cerr << e.what() << std::endl;
}

}