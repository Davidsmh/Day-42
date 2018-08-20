/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 16:08:40 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/15 16:25:26 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int nb;
	int neg;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] <= 32)
	{
		i++;
	}
	if ((str[i] == 43 || str[i] == 45) && str[i + 1] >= 48 && str[i + 1] <= 57)
	{
		if (str[i] == 45)
			neg = -1;
			i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	nb = nb * neg;
	return(nb);
}

int main()
{
	char a[] = "		   +1258eefwe";
	printf("%d", ft_atoi(a));
}
