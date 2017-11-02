NAME = Colleen

CC = clang -Wall -Werror -Wextra

SRC = Colleen.c

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)
