/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 18:13:44 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 18:18:57 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 65 && str[i] <= 90)
	{
		if (str[i] == '\0')
			return (1);
		i++;
	}
	if (str[i] == 0)
		return (1);
	else
		return (0);
}

int main ()
{
	char s[] = "GYUFKG5AZ";
	printf("%d", ft_str_is_uppercase(s));
	return (0);
}
