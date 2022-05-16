/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 22:50:15 by vescaffr          #+#    #+#             */
/*   Updated: 2022/04/27 23:49:06 by vescaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (len > (size_t)ft_strlen(s))
		len = (size_t)ft_strlen(s);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest || s == NULL)
		return (0);
	while (s[start] != '\0' && len > i && ft_strlen(s) > (int)start)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

/*char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *dest;
	size_t i;
	size_t j;

	if (s == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	if (start + 1 > (unsigned int)i)
	{
		dest[0] = '\0';
		return (dest);
	}
	i = (size_t)start;
	j = 0;
	while (j < len)
		dest[j++] = s[i++];
	dest[j] = '\0';
	return (dest);
}

int     main()
{
        const char s[100] = "0123456789";
        printf("%s", ft_substr(s, 42, 10));
        printf("\n");
        if (ft_substr(s, 42, 10)[strlen(ft_substr(s, 42, 10))] == '\0')
                printf("ok\n");
        printf("%lu\n", strlen(s));
        printf("strlen + 1 = %lu", strlen(ft_substr(s, 42, 10)) + 1);
        printf("\n");
}*/
