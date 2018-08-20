/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:49:16 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 18:11:56 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;
	
	i = 0;
	while (str[i] >= 97 && str[i] <= 122)
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

int main()
{
	char s[] = "hfuiehfjlrhsguJGi";
	printf("%d", ft_str_is_lowercase(s));
	return (0);
}
