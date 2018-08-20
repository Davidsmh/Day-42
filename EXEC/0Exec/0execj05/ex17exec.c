/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 20:04:18 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 20:25:04 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (b < nb)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest [a + b] = '\0';
	return (dest);
}

int main (int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strncat(argv[1], argv[2], 3));
	printf("%s", strncat(argv[1], argv[2], 3));
	return (0);
}
