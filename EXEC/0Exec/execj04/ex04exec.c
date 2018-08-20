/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:05:16 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/13 17:56:35 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if ((index == 0) || (index == 1))
		return (index);
	if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (1);
}

int main()
{
	int index;

	index = 16;
	printf("%d", ft_fibonacci(index));
	return (0);
}
