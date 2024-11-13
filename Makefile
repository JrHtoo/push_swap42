SRC_PATH = src/
SRCS = main.c
SRCS_PREFIXED = $(addprefix $(SRC_PATH), $(SRCS))

INCLUDE = include/push_swap.h

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address

LIBFT_PATH = lib/libft/

LIBFT_LIB = $(LIBFT_PATH)libft.address

PRINTF_PATH = lib/ft_printf/

PRINTF_LIB = $(PRINTF_LIB)libftprintf.a

OBJS = $(SRCS_PREFIXED:.c=.o)

all: 	SUBSYSTEMS $(OBJS_DIR) $(NAME)

SUBSYSTEMS: 
	@printf "\033[0;32mMaking libft.....\n\e[0m"
	@make -C $(LIBFT_PATH) all
	@printf "\033[0;32mMaking libftprintf.....\n\e[0m"
	@make -C $(PRINTF_PATH) all

$(OBJS_DIR): $(INCLUDE) Makefile
	@$(CC) $(CFLAGS) -c $(SRCS_PREFIXED)

$(NAME):
	@$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBFT_LIB) $(PRINTF_LIB)
	@printf "\033[0;32mPUSH_SWAP Complied\n\e[0m"

clean:
	@make -C $(LIBFT_PATH) clean
	@make -C $(PRINTF_PATH) clean
	@rm -rf $(OBJS_DIR)
	@printf "\033[0;31mCleaning process done!\e[0m"

fclean:
	@make -C $(LIBFT_PATH) fclean
	@make -C $(PRINTF_PATH) fclean
	@rm -rf $(OBJS_DIR)
	@rm -rf $(NAME)
	@printf "\033[0;31mFile cleaning process done!\n\e[0m"

re: fclean all

.PHONY: clean fclean re all bonus