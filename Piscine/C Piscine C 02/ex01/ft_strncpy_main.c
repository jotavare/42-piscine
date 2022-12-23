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

char *ft_strncpy(char *dest, char *src, unsigned int n) // n value of positions we wanna test
{
	unsigned int p; // counter for the string positions

	p = 0;							// inicialize position counter at 0
	while (src[p] != '\0' && p < n) // loop while position is not \0 and position is lower than n
	{
		dest[p] = src[p]; // copy char from string src to dest
		p++;			  // add a +1 to position
	}
	while (p < n) // if position is lower than than n (number inputed by the user)
	{
		dest[p] = '\0'; // add a '\0'
		p++;			// add a +1 to position so it won't loop again
	}
	return (dest); // return the value of the string
}

int main()
{
	char src[] = "Banana";
	char dest[] = "Pessego1";
	char dest1[] = "Pessego2";

	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", strncpy(dest1, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 4));
	printf("\n%s", strncpy(dest1, src, 4));
	printf("\n%s", ft_strncpy(dest, src, 7));
	printf("\n%s", strncpy(dest1, src, 7));
}
