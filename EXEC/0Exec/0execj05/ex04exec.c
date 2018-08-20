/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 23:30:32 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/17 15:29:30 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n != '\0')
	{
		dest[n] = '\0';
		n++;
	}
	dest[i] = '\0';
	return(dest);
}

int main (int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_strncpy(argv[1], argv[2], 4));
	printf("%s\n", strncpy(argv[1], argv[2], 4));
	return (0);
}
