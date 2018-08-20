/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 00:27:07 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/09 00:34:23 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	if (nb <= 9)
	{
		nb++;
		write(1, "F", 1);
		ft_iterative_factorial(nb);
		return (0);
	}		
	else
	{
		return (0);
	}
}

int main()
{
	ft_iterative_factorial(0);
	return (0);
}
