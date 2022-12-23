/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:31:55 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/01 14:34:25 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	unsigned int pos1;
	unsigned int pos2;

	pos1 = 0;
	pos2 = 0;
	while (s1[pos1] == s2[pos2] && s1[pos1] != '\0' && s2[pos2] != '\0')
	{
		pos1++;
		pos2++;
	}
	if (s1[pos1] == s2[pos2])
	{
		return (0);
	}
	else
	{
		return (s1[pos1] - s2[pos2]);
	}
}

int main(void)
{
	char src[] = "Lucas";
	char dest[] = "Ariadne";
	char dest2[] = "Lara";
	char dest3[] = "Lucbs";
	char dest4[] = "Lucas";
	printf("%d", ft_strcmp(src, dest));
	printf("\n");
	printf("%d", ft_strcmp(src, dest2));
	printf("\n");
	printf("%d", ft_strcmp(src, dest3));
	printf("\n");
	printf("%d", ft_strcmp(src, dest4));
	printf("\n");
}

/*
Return Value from strcmp()
0 if strings are equal
>0 if the first non-matching character in str1
is greater (in ASCII) than that of str2.
<0 if the first non-matching character in str1
is lower (in ASCII) than that of str2.
*/
