/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 16:16:00 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/17 15:48:41 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0' && str[i] != 0)
	{
		while (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		i++;
		while ((str[i] == 43 || str[i] == 45 || str[i] == 32)
				&& (str[i + 1] >= 97 && str[i + 1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
			i++;
		}
	}
	return (str);
}

int main()
{
	char c[] = "Salut, Comment tu vas ? 42mots quarante-deux; cinquANTE+et+un";
	printf("%s", ft_strcapitalize(c));
	return (0);
}
