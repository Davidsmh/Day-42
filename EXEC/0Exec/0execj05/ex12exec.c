/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:36:11 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 17:44:51 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;
	
	i = 0;
	while (str[i] >= 48 && str[i] <= 57)
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
	char s[] = "";
	printf("%d", ft_str_is_numeric(s));
	return (0);
}
