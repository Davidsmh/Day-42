/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 15:03:01 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 15:58:35 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str)
{
	int i;

	i = 0;
	while ((str[i] != '\0') && (str[i] != 0))
	{
		while ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] = str[i] - 32;
			i++;
		}
		i++;
	}
	return(str);
	
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s", ft_strupcase(argv[1]));
	return (0);
}
