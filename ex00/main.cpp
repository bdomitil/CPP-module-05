#include "Bureucrat.hpp"
#include "Form.hpp"

int main()
{
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
		Bureucrat bur("Good", 1);
		bur.upGrade();
		std::cout << bur << std::endl;
	}
	
	catch(exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

}