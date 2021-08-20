NAME = libft.a

SRC = $(shell find . ! -name ft_lst\* -name ft\*.c)
BONUS = $(shell find . -name ft_lst\*.c)

CC = gcc
CFLAGS = -Wextra -Wall -Werror

all: $(NAME)

$(NAME):$(SRC:.c=.o)
	ar rcs $@ $^

bonus : $(BONUS:.c=.o)
	ar rcs $(NAME) $^

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

%.o : %.c libft.h
	$(CC) $(CFLAGS) $< -c

clean :
	rm -f *.o

fclean :
	rm -f $(NAME) *.o

re : fclean all

.PHONY : all clean fclean re
