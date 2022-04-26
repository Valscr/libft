/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 22:50:15 by vescaffr          #+#    #+#             */
/*   Updated: 2022/04/23 00:10:51 by vescaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc(sizeof(char *) * (len + 1));
	if (!dest)
		return (0);
	while (s[start] != '\0' && len > i)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
