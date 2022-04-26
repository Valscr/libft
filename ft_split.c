/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vescaffr <vescaffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 01:36:01 by vescaffr          #+#    #+#             */
/*   Updated: 2022/04/26 00:30:09 by vescaffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_countdest(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (s[0] == c)
		j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		i++;
		if (s[i] != '\0')
		{
			while (s[i] == c)
				i++;
			j++;
		}
	}
	return (j);
}

char	*ft_filldest(char const *s, int i, int j)
{
	char	*dest;
	int		n;

	n = 0;
	dest = malloc(sizeof(char *) * (i + 1));
	j = j - i;
	while (i > 0)
	{
		dest[n++] = s[j++];
		i--;
	}
	dest[n] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		j;
	int		i;
	int		n;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char *) * ft_countdest(s, c) + 1);
	while (s[i] != '\0')
	{
		n = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		n = i - n;
		if (i != 0)
		{
			dest[j] = ft_filldest(s, n, i);
			j++;
		}
		while (s[i] == c)
			i++;
	}
	dest[j] = 0;
	return (dest);
}	

/*int	main()
{
	char str[100] = "/salut//ca va/oui   ";
	char c = '/';
	printf("%s", ft_split(str, c)[0]);
	printf("\n");
	printf("%s", ft_split(str, c)[1]);
        printf("\n");
	printf("%s", ft_split(str, c)[2]);
        printf("\n");
	printf("%s", ft_split(str, c)[3]);
        printf("\n");
	printf("%s", ft_split(str, c)[4]);
        printf("\n");
	printf("%s", ft_split(str, c)[5]);
        printf("\n");
}*/
