# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 08:27:15 by bbeaurai          #+#    #+#              #
#    Updated: 2025/11/08 09:35:22 by bbeaurai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ_SRC = $(SRC:.c=.o)
OBJ_BONUS = $(BONUS_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_SRC)
	ar rcs $(NAME) $(OBJ_SRC)

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $(OBJ_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

%_bonus.o: %_bonus.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ_SRC) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus