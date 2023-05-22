# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 15:58:16 by hwiemann          #+#    #+#              #
#    Updated: 2023/05/19 10:46:34 by hwiemann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

CC = cc

AR = ar rc

RM = rm

FLAG = -Werror -Wextra -Wall

SRC = ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

HEADER := libft.h

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(FLAG) -c $< -o $@
fclean:clean
	$(RM) -f $(NAME)
clean:
	$(RM) $(OBJ)	
re: fclean all

.PHONY: all fclean clean re
