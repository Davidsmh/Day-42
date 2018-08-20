/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:37:45 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 14:55:21 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	int res;

	i = 0;
	res = 0;
	while ((i <  n) && (s1[i] == s2[i]) && (s1[i] != 0) && (s2[i] != 0))
	{
		i++;
	}
		res = s1[i] - s2[i];
		return (res);
}

int main (int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_strncmp(argv[1], argv[2], 4));
	printf("%d\n", strncmp(argv[1], argv[2], 4));
	return(0);
}
