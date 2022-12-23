/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:17:32 by jotavare          #+#    #+#             */
/*   Updated: 2022/09/29 14:17:35 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

int ft_str_is_uppercase(char *str)
{
	int p;

	p = 0;
	if (str[p] == '\0')
	{
		return (1);
	}
	while (str[p] != '\0')
	{
		if (!(str[p] >= 'A' && str[p] <= 'Z'))
		{
			return (0);
		}
		p++;
	}
	return (1);
}

/*
int	main()
{

	printf("%d", ft_str_is_uppercase("abcdefghijklmnopqrstuvxwz"));
	printf("\n%d", ft_str_is_uppercase("aBcDeFgHiJkLmNoPqRsTuVxWz"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVXWZ"));
	printf("\n%d", ft_str_is_uppercase("1234567890abcdefgh"));
	printf("\n%d", ft_str_is_uppercase(""));
}
*/
