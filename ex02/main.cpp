#include "Bureucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
// FAIL ZONE
Bureucrat highBur("Senior", 5);
Bureucrat middleBur("Middle", 74);
Bureucrat lowBur("Junior", 148);
ShrubberyCreationForm shru("shruForm");
RobotomyRequestForm robo("roboForm");
PresidentialPardonForm pres("preForm");

try
{
	shru.beSigned(highBur);
	shru.beExecuted(highBur);
	robo.beSigned(highBur);
	robo.beExecuted(highBur);
	pres.beSigned(highBur);
	pres.beExecuted(highBur);
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}


}