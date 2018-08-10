/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:52:12 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/08 17:41:39 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tempry;	
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		tempry = str[i];
		str[i] = str[j];
		str[j] = tempry;
		i--;
		j++;
	}
	return (str);	
}


int		main (void)
{
	char a[] = "hello";

	printf("%s", ft_strrev(a));
	return (1);
}
