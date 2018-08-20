/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:21:56 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 18:30:52 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 32)
	{
		if (str[i] == '\0')
			return (1);
		i++;
	}
	if (str[i] == 0)
		return (1);
	else
		return (0);
}

int main ()
{
	char s[] = "freiulgf iwqb q 467'12'-";
	printf("%d", ft_str_is_printable(s));
	return(0);
}
