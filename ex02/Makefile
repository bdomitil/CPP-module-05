files.cpp = main.cpp Bureucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

files.hpp = Bureucrat.hpp Form.hpp

CFLAGS = -Wall -Wextra -Werror

files.o = $(files.cpp:.cpp=.o)

NAME = Bureucrat

all : $(NAME)

$(NAME) : $(files.o) 
		clang++ $(CFLAGS) $(files.o) -o $(NAME)
		@echo "\033[7m $(NAME) IS READY TO BE USED!\033[0m"


%.o : %.cpp $(files.hpp)
		@gcc $(CFLAGS)  -c  $<  -o $@
		@echo  "\033[36m$<\033[0m \033[35m is compiled!\033[0m" 

clean :  
		@rm -f $(files.o)
		@rm -rf $(NAME).dSYM
		@echo "\033[7mclean is done!\033[0m"

fclean : clean
		@rm  -f $(NAME)
		@echo "\033[7mfclean is done!\033[0m"

re	:  fclean all	


.PHONY : all clean  fclean