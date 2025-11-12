# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/08 17:23:29 by bbeaurai          #+#    #+#              #
#    Updated: 2025/11/12 10:48:27 by bbeaurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

PRINT_SRCS = ft_printf.c ft_tools_nbr.c ft_tools_printf.c

LIBFTDIR = Libft
LIBFT = $(LIBFTDIR)/libft.a

PRINT_OBJS = $(PRINT_SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFTDIR)

$(NAME): $(PRINT_OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rc $(NAME) $(PRINT_OBJS)

clean:
	$(RM) $(PRINT_OBJS)
	$(MAKE) -C $(LIBFTDIR) clean
fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)
re: fclean all