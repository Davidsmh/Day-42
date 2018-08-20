/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 20:31:06 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/17 00:19:15 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int a;
	int b;
	unsigned int i;

	a = 0;
	b = 0;
	i = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	a = 0;
	b = 0;
	while (dest != '\0')
	{
		i++;
	}
	dest[a + b] = '\0';
	return (size);
}


int main()
{
	char *dest = "coucoutoi";
	char *src = "coucou";
	printf("%d", ft_strlcat(dest, src, 4));
	return (0);
}
