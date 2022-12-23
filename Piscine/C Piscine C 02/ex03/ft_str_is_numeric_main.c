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

int ft_str_is_numeric(char *str) // str string
{
	int p; // counter for the string positions

	p = 0;				   // inicialize position counter at 0
	while (str[p] != '\0') // if position is not '\0'
	{
		if (!(str[p] >= 48 && str[p] <= 57)) // if not >= 0 and <=9
		{
			return (0); // return 0 = numbers, chars, symbols
		}
		p++; // add +1 to position and continue loop
	}
	return (1); // return 1 = only numbers
}

int main()
{

	printf("%d", ft_str_is_numeric("0123456789"));
	printf("\n%d", ft_str_is_numeric("abcde5fghijk7lmnopqrs9tuvxwz"));
	printf("\n%d", ft_str_is_numeric("1234567890abcdefgh"));
	printf("\n%d", ft_str_is_numeric(""));
}
