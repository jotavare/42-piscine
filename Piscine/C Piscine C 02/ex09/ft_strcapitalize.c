/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:50:03 by jotavare          #+#    #+#             */
/*   Updated: 2022/09/29 18:50:06 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char *ft_strcapitalize(char *str)
{
	int i;

	if (str[0] <= 'z' && str[0] >= 'a')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				{
					if (!(str[i - 1] <= '9' && str[i - 1] >= '0'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "ola, esta tudo bem? maca-pera; casa+carro+explodiu";
	char str1[] = "fadgsadgsadg,wqeqwe,we ?kl42lo+ee-sdt%cdj*de$sfsc";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
	return 0;
}
*/
