#include "Bureucrat.hpp"

int main()
{
// FAIL ZONE
	try
	{
		 Bureucrat bur("Fail", 0);
	}
	catch(exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try 
	{				
		std::cout << std::endl << std::endl;
		Bureucrat crat("Mike", 140);
		Form form ("Dosye", 12, 11);
		crat.execForm(form);
		crat.signForm(form);
		std::cout << crat << std::endl;
		std::cout << form << std::endl;
	}
	catch (exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

//WORKING ZONE
	try
	{
		std::cout << std::endl << std::endl;
		Bureucrat bur("Johny", 1);
		Form form("Deklaration", 2, 3);
		bur.signForm(form);
		bur.execForm(form);
		std::cout << bur << std::endl;
		std::cout << form << std::endl;
	}
	catch(exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}