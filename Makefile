##
## EPITECH PROJECT, 2022
## corewar
## File description:
## corewar
##

all:
	@ make -C lib/cly/
	@ make -C ./asm
	@ make -C ./corewar

asm: make_lib
	@ make -C ./asm

corewar: make_lib
	@ make -C ./corewar

clean:
	@ make clean -C ./asm
	@ make clean -C ./corewar
	@ make clean -C lib/cly/

fclean:
	@ make fclean -C ./asm
	@ make fclean -C ./corewar
	@ make fclean -C lib/cly/

re: fclean all
