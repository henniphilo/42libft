# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwiemann <hwiemann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 15:58:16 by hwiemann          #+#    #+#              #
#    Updated: 2023/05/11 16:48:03 by hwiemann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all fclean clean re

NAME = libft.a

CC = cc

AR = ar rc

RM = rm

FLAG = -Werror -Wextra -Wall

SRC = here_priv_libft/ft_atoi.c
here_priv_libft/ft_bzero.c
here_priv_libft/ft_calloc.c
here_priv_libft/ft_isalnum.c
here_priv_libft/ft_isalpha.c
here_priv_libft/ft_isascii.c
here_priv_libft/ft_isdigit.c
here_priv_libft/ft_isprint.c
here_priv_libft/ft_itoa.c
here_priv_libft/ft_memchr.c
here_priv_libft/ft_memcmp.c
here_priv_libft/ft_memcpy.c
here_priv_libft/ft_memmove.c
here_priv_libft/ft_memset.c
here_priv_libft/ft_split.c
here_priv_libft/ft_strchr.c
here_priv_libft/ft_strdup.c
here_priv_libft/ft_strjoin.c
here_priv_libft/ft_strlcat.c
here_priv_libft/ft_strlcpy.c
here_priv_libft/ft_strlen.c
here_priv_libft/ft_strncmp.c
here_priv_libft/ft_strnstr.c
here_priv_libft/ft_strrchr.c
here_priv_libft/ft_strtrim.c
here_priv_libft/ft_substr.c
here_priv_libft/ft_tolower.c
here_priv_libft/ft_toupper.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(FLAG) -c $< -o $@
fclean:clean
	/$(RM) -f $(NAME)
clean:
	$(RM) $(OBJ)	
re: fclean all