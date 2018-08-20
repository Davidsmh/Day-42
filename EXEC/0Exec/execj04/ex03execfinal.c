/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:35:57 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/13 16:29:16 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (((power == 0) && (nb == 0)) || ((nb == 1)))
	{
		return (1);
	}
	if ((power < 0) || ((nb == 0) && (power > 0)))
	{
		return (0);
	}
	if ((power > 0) && (nb != 0)) 
	{
		return  (nb * ft_recursive_power(nb, power - 1));
	}
	return (1);
}

int main()
{
	int power;
	int nb;

	power = 6;
	nb = -9;
	printf("%d", ft_recursive_power(nb, power));
	return(0);
}
