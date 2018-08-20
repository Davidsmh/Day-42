/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 12:03:09 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/14 13:58:14 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (((power == 0) && (nb == 0)) || (nb == 1))
	{
		return (1);
	}
	if ((power < 0) || ((nb == 0) && (power > 0)))
	{
		return (0);
	}
	if ((power > 0) && (nb != 0))
	{
		while (i != power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	return (1);
}

int main()
{
	int nb;
	int power;

	nb = 2;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}

