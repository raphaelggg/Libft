# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ragolden <ragolden@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/07 11:48:06 by ragolden          #+#    #+#              #
#    Updated: 2025/11/16 17:13:26 by ragolden         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_isalpha.c ft_memcpy.c ft_strrchr.c ft_isdigit.c \
	   ft_memmove.c ft_strncmp.c ft_isalnum.c ft_strlcpy.c \
	   ft_memchr.c ft_isascii.c ft_strlcat.c ft_memcmp.c \
	   ft_isprint.c ft_toupper.c ft_strnstr.c ft_strlen.c \
	   ft_tolower.c ft_atoi.c ft_memset.c ft_strchr.c \
	   ft_bzero.c ft_calloc.c ft_strdup.c ft_substr.c \
	   ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c \
	   ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_split.c
	   
	   

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : fclean clean all re