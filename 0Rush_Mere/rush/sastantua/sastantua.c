/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 23:29:57 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/18 18:34:53 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	line_one(int x)
{
	if (x > 0)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		ft_putchar('/');
		ft_putchar('*');
		ft_putchar(92);
		ft_putchar('\n');
	}
}

void	line_two(int x)
{
	if (x > 0)
	{
		ft_putchar(' ');
		ft_putchar('/');
		ft_putchar('*');
		ft_putchar('*');
		ft_putchar('*');
		ft_putchar(92);
		ft_putchar('\n');
	}
}

void	line_three(int x, int i)
{
	while (i == x)
	{
		ft_putchar('/');
		ft_putchar('*');
		ft_putchar('*');
		ft_putchar('|');
		ft_putchar('*');
		ft_putchar('*');
		ft_putchar(92);
		i++;
	}
	ft_putchar('\n');
}

void	sastantua(int x)
{
	line_one(x);
	line_two(x);
	line_three(x, x);
}

int main()
{
	sastantua(100);
	return (0);
}
