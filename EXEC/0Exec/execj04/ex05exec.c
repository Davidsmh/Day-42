/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:03:36 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/13 20:34:59 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb <= 0)
		return (0);
	if ((i == nb) && (i == (nb / i)))
		return (i);
	while (nb > 1)
	{
		while (i != nb)
		{
			if ((i == (nb / i)) && (nb % i == 0))
			{
				return (i);
			}
			i++;
		}
	if ((i == nb) && (i != (nb / i)))
	{
		return (0);
	}
	}
	return (0);
}

int main()
{
	int nb;

	nb = -3;
	printf("%d", ft_sqrt(nb));
	return (0);
}
