/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 00:27:07 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/12 18:58:58 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if ((nb >= 0) && (nb < 13))
	{
		if ((nb == 0) || (nb == 1))
		{
			return (1);
		}
		while (nb > 1)
		{
			i = i * nb;
			nb--;
		}
		return(i);
	}
	else
		return (0);
}

int	main()
{
	int nb;
	nb = 5;

	printf("%d", ft_iterative_factorial(nb));
	
	return(0);
}
