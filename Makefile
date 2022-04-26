# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 00:08:06 by vescaffr          #+#    #+#              #
#    Updated: 2022/04/26 03:47:06 by vescaffr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRCS = ft_isalpha.c ft_memchr.c	ft_split.c ft_strlcat.c	ft_strnstr.c ft_toupper.c ft_atoi.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_calloc.c	ft_isprint.c ft_memmove.c ft_striteri.c ft_strmapi.c ft_substr.c ft_isalnum.c ft_itoa.c ft_memset.c ft_strjoin.c ft_strncmp.c ft_tolower.c

OBJECTS = $(SRCS :.c=.o)

INCLUDES = ./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
