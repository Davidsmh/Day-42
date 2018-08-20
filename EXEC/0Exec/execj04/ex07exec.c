/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 00:17:14 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/14 00:38:22 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int i;
	int divide;

	i = 1;
	divide = 0;
	if ((nb == 0) || (nb == 1))
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			divide++;
		}
		i++;
	}
	if (divide != 2)
		return (0);
	if (divide == 2)
		return (1);
	return (0);
}

int ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (ft_is_prime(nb) == 0)
	{
		while (ft_is_prime(nb) != 1)
		nb++;
		return(nb);	
	}
	return(0);
}

int main ()
{
	int nb;
	nb = 24;
	printf("%d", ft_find_next_prime(nb));
	return (0);
}
