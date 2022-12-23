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

/*
#include <stdio.h>
*/

char *ft_strupcase(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] -= 32;
		}
		p++;
	}
	return (str);
}

/*
int	main()
{
	char str[] = "abcdefghjlmnopqrstuvxwz";
	printf("%s", ft_strupcase(str));
	str[p] -= ('a' - 'A'); // its another way of doing the same code
}
*/
