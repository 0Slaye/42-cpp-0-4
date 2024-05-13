################################################################################
#                                     CONFIG                                   #
################################################################################

NAME = phonebook
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

################################################################################
#                                 PROGRAM'S SRCS                               #
################################################################################

SRCS_FILES	= main.cpp \
				PhoneBook.class.cpp \
				Contact.class.cpp \
				utils.cpp
SRCS		= $(addprefix sources/, $(SRCS_FILES))
OBJS		= $(SRCS:.c=.o)
INCLS		= includes/

################################################################################
#                                      EXTRA                                   #
################################################################################

UPDATE = \033[0K\r
RESET = \033[0m
BOLD = \033[1m
WHITE = \033[1;37m
RED = \033[1;31m
GREEN = \033[1;32m
BLUE = \033[1;34m

################################################################################
#                                    COMMANDS                                  #
################################################################################

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -I$(INCLS)
	@echo "$(BOLD)[$(NAME)] : [$(BLUE)binary$(WHITE)] [$(GREEN)✔️$(WHITE)]$(RESET)"

fclean :
	@rm -f $(NAME)
	@echo "$(BOLD)[$(NAME)] : [$(BLUE)binary$(WHITE)] [$(RED)✘$(WHITE)]$(RESET)"

re : fclean all

.PHONY : all clean fclean re