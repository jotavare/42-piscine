/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:34:05 by jotavare          #+#    #+#             */
/*   Updated: 2022/09/29 16:34:07 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] += 32;
			// str[p] += ('a' + 'A');
		}
		p++;
	}
	return (str);
}

int main()
{
	char str[] = "ABCDEFGHIJKLMNOPQRSTUVXWZ";
	printf("%s", ft_strlowcase(str));
}
