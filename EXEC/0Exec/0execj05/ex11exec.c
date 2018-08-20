/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:00:32 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 17:34:30 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
	{
		if (str[i] == '\0')
		{
			return (1);
		}
		i++;
	}
	if (str[i] == 0)
		return (1);
	else
		return (0);
}

int main ()
{
	char s[] = "GfhvbfgksfbjsebfBHFJ jkjfs J";
	printf("%d", ft_str_is_alpha(s));
	return (0);
}
