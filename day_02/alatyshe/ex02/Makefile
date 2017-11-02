FILES = Fixed.class.cpp main.cpp
NAME = fixed
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
OBJ = Fixed.class.o main.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ 

%.o: %.c
	$(CXX) -o $@ -c $< 

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)

re: fclean all
