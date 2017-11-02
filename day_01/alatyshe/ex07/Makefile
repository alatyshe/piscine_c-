#--------- standart defines ---------
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror

#------------------------------------

FILES		= main.cpp Contact.class.cpp

NAME		= replace

OBJECTS		= main.o

#------ make ------------

all: $(NAME)

$(NAME): $(OBJECTS)
	clang++ $(CXXFLAGS) -o $@ $^ 

%.o: %.c
	clang++ -o $@ -c $< 

#----- make clean -------

clean:
	rm -f $(OBJECTS)

#----- make fclean ------

fclean:
	rm -f $(OBJECTS)
	rm -f $(NAME)

#----- make re ----------
re: fclean all