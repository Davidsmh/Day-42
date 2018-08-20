/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:10:00 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 14:53:07 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while ((s1[i] == s2[i]) && (s1[i] != 0) && (s2[i] != 0))
		i++;
	res = s1[i] - s2[i];
	return (res);
}


int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
	printf("%d", strcmp(argv[1], argv[2]));
	return(0);
}
