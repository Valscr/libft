/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 04:35:39 by vescaffr          #+#    #+#             */
/*   Updated: 2022/04/26 03:44:41 by vescaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

int     ft_isalpha(unsigned char c);
void    *ft_memchr(const void *s, int c, size_t n);
char    **ft_split(char const *s, char c);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_toupper_l(int c);
int     ft_atoi(char *str);
int     ft_isascii(unsigned char c);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
char    *ft_strrchr(const char *s, int c);
void    ft_bzero(void *s, size_t n);
int     ft_isdigit(unsigned char c);
void    *ft_memcpy(void *dst, const void *src, size_t n);
char    *ft_strdup(const char *s1);
int     ft_strlen(const char *str);
char    *ft_strtrim(char const *s1, char const *set);
void    *ft_calloc(size_t count, size_t size);
int     ft_isprint(unsigned char c);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_substr(char const *s, unsigned int start, size_t len);
int     ft_isalnum(unsigned char c);
char    *ft_itoa(int n);
void    *ft_memset(void *b, int c, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_tolower(int c);

#endif
