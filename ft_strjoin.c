/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 00:19:44 by vescaffr          #+#    #+#             */
/*   Updated: 2022/04/23 00:39:44 by vescaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		i;
	char	*dest;
	int		j;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	dest = malloc(sizeof(char *) * size);
	if (!dest)
		return (0);
	while (s1[i] != '\0')
	{	
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}
