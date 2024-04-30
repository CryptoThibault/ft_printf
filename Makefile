# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tchalaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 10:28:38 by tchalaou          #+#    #+#              #
#    Updated: 2023/11/23 16:09:08 by tchalaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIB = libft
FILES = ft_printf.c \
	ft_putmem_fd.c \
	ft_putunbr_fd.c \
	ft_putnbr_base_fd.c \
	ft_putlnbr_base_fd.c \
	ft_putflags_fd.c \
	ft_memlen.c \
	ft_nbrlen.c \
	ft_unbrlen.c \
	ft_nbr_baselen.c \
	ft_lnbr_baselen.c \
	ft_flagslen.c
OBJECTS = $(FILES:.c=.o)
FLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc $(FLAGS) -I $(NAME:.a=.h) -c $< -o $@

$(NAME): lib $(OBJECTS)
	ar rcs $(NAME) $(LIB)/$(LIB).a $(OBJECTS) $(LIB)/*.o
all: $(NAME)

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all

lib:
	make -C $(LIB)

bonus: all
