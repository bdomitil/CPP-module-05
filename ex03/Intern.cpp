#include "Intern.hpp"

Form* Intern :: makeForm(string formType, string target)
{
	int i;
	for (i = 0; i < 4; i++)
		if (types[i] == formType)
			break ;
	
	switch (i)
	{
		case  0 :
		{
			std::cout << "Intern creates : " << types[i] << " form" << std::endl;
			return (new RobotomyRequestForm(target));
		}
		case  1 :
		{
			std::cout << "Intern creates : " << types[i] << " form" << std::endl;
			return (new ShrubberyCreationForm(target));
		}
		case  2 :
		{
			std::cout << "Intern creates : " << types[i] << " form" << std::endl;
			return (new PresidentialPardonForm(target));
		}
		default :
			{
				std::cout << "Intern didnt learn this form yet\nbad intern" << std::endl;
				return (nullptr);
			}

	}

}

Intern :: Intern(){

}

Intern :: ~Intern(){
	
}


Intern& Intern :: operator=(const Intern &second)
{
	(void)second;
	return (*this);
} 

Intern :: Intern (const Intern &copy)
{
	*this = copy;
}
