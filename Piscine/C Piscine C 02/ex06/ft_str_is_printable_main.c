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

#include <stdio.h>	// pointers
#include <string.h> // strings

int ft_str_is_printable(char *str) // str string
{
	int p; // counter for the string positions

	p = 0;				// inicialize position counter at 0
	if (str[p] == '\0') // if position is '\0'
	{
		return (1); // return 1 = printable characters or empty '\0'
	}
	while (str[p] != '\0') // if position is not '\0'

	{ // compare string with a to z and A to Z
		if (!(str[p] >= 32 && str[p] <= 126))
		{
			return (0); // return 0 = characters, symbols, numbers, etc
		}
		p++; // add +1 to position and continue loop
	}
	return (1); // return 1 = printable characters or empty '\0'
}

int main()
{

	printf("%d", ft_str_is_printable("abcdefghijklmnopqrstuvxwz"));
	printf("\n%d", ft_str_is_printable("aBcDeFgHiJkLmNoPqRsTuVxWz"));
	printf("\n%d", ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVXWZ"));
	printf("\n%d", ft_str_is_printable("1234567890abcdefgh"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
