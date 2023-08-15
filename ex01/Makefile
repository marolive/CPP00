NAME = PhoneBook
SCRS = main.cpp PhoneBook.cpp Contact.cpp
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
CC = c++

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SCRS) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re