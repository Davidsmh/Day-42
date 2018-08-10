/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 18:08:28 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/09 10:47:00 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] <= 32)
		i++;
	if ((str[i] == 43 || str[i] == 45) && str[i + 1] >= 48 && str[i + 1] <= 57)
	{
		if (str[i] == 45)
			neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57 && str[i])
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	nb = nb * neg;
	return (nb);
}

int main()
{
	char s[] = "   	-125fef48";
	printf("%d", ft_atoi(s));
}

