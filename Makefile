NAME = exec
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
CPPFLAGS = -MMD

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	clear
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all re clean fclean test