##
## EPITECH PROJECT, 2022
## my_rpg
## File description:
## Makefile
##

CC =    gcc
CFLAGS =    -W -Wextra -Wall -I ../include/ -I ../include/cly
LDFLAGS = 	-L ../lib/cly/ -lcly

SRC =   $(wildcard src/*.c src/write/*.c src/load/*.c src/utils/*.c)

OBJ =    $(SRC:.c=.o)

BIN_NAME    = 	asm

NAME_COR = testchampion.cor

all: $(BIN_NAME) $(OBJ)

$(BIN_NAME): $(OBJ)
	@ echo "\033[1;36m[ FILES COMPILED ] \033[0m \033[1;34mASM \033[0m"
	@ $(CC) -o $(BIN_NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)
	@ echo "\033[1;32m[ SUCCESS ] \033[0m\033[1;34mBinary :\033[1;32m ASM \033[1;34m created sucesfully.\033[0m"

clean:
	@ echo "\033[3;31mRemoving from ASM: \033[0m"
	@ echo "\033[3;31m$(OBJ)\033[0m" | tr ' ' '\n'
	@ rm -f $(OBJ) $(NAME_COR)

fclean: clean
	@ echo "\033[3;31m./$(BIN_NAME)\033[0m"
	@ rm -f $(BIN_NAME)

re: fclean all

%.o:	%.c
		@ echo "\033[1;34m[ OK ]\033[0m Compiling Asm" $<
		@ $(CC) -o $@ -c $< $(CFLAGS)
