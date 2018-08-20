/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 20:40:13 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/14 00:06:41 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;
	int divide;

	i = 1;
	divide = 0;
	if (nb == 0 || nb ==1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0 )
		{
			divide++;
		}
		i++;
	}
	if (divide != 2)
		return (0);
	if (divide == 2)
		return (1);
	return(0);

}

int main()
{	
	int nb;

	nb = 97;
	printf("%d", ft_is_prime(nb));
	return (0);
}
