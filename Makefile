SRCS_1 = ex00/main.cpp
SRCS_2 = ex01/Span.cpp ex01/main.cpp
SRCS_3 = ex02/main.cpp

OBJS_1 := $(SRCS_1:.cpp=.o)
OBJS_1 := $(addprefix obj/, $(OBJS_1))
# 
OBJS_2 := $(SRCS_2:.cpp=.o)
OBJS_2 := $(addprefix obj/, $(OBJS_2))
# 
OBJS_3 := $(SRCS_3:.cpp=.o)
OBJS_3 := $(addprefix obj/, $(OBJS_3))

CC = c++
RM = rm -f
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 
NAME = exec

all: $(NAME)

$(NAME): $(OBJS_1) $(OBJS_2) $(OBJS_3)
	$(CC) $(CPPFLAGS) $(OBJS_1) -o $(NAME)_1
	$(CC) $(CPPFLAGS) $(OBJS_2) -o $(NAME)_2
	$(CC) $(CPPFLAGS) $(OBJS_3) -o $(NAME)_3

obj/%.o: %.cpp
	@mkdir -p $(shell dirname $@)
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) -rf obj/

fclean: clean
	$(RM) $(NAME)_*

re: fclean all

.PHONY: all clean fclean re