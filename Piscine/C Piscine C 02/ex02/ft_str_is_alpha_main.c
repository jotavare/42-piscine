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

int ft_str_is_alpha(char *str) // str string
{
	int p; // counter for the string positions

	p = 0;				// inicialize position counter at 0
	if (str[p] == '\0') // if position is '\0'
	{
		return (1); // return 1 = only characters
	}
	while (str[p] != '\0') // if position is not '\0'

	{ // compare string with a to z and A to Z
		if ((str[p] >= 'a' && str[p] <= 'z') || (str[p] >= 'A' && str[p] <= 'Z'))
		{
			p++; // add +1 to position and continue loop
		}
		else			// if theres numbers, symbols, etc (- characters)
			return (0); // return 0 = numbers, characters, symbols, etc
	}
	return (1); // return 1 = only characters
}

int main()
{

	printf("%d", ft_str_is_alpha("abcdefghijklmnopqrstuvxwz"));
	printf("\n%d", ft_str_is_alpha("abcde5fghijk7lmnopqrs9tuvxwz"));
	printf("\n%d", ft_str_is_alpha("1234567890abcdefgh"));
}
