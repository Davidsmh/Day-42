/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:04:25 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/14 11:59:23 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (power == 0)
		return(1);
	if ((nb < 1) || (power < 0))
		return (0);
	if ((power > 0) && (nb > 0))
	{
		while (i != power)
		{
			result = result * nb;
			i++;
			printf("result = %d\n", result);
			printf("nb = %d\n", nb);
		}
		return (result);
	}
	return (0);
}

int main()
{
	int nb;
	int power;

	nb = -2122;
	power = 8;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}
