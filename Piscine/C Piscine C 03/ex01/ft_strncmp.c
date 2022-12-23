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

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && i < n - 1 && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

int main(void)
{
	char src[] = "Banana";
	char dest[] = "Banana";
	char dest2[] = "Bananas";
	char dest3[] = "BananasPessego";
	char dest4[] = "A";
	printf("%d", ft_strncmp(src, dest, 6));
	printf("\n");
	printf("%d", ft_strncmp(src, dest2, 10));
	printf("\n");
	printf("%d", ft_strncmp(src, dest3, 5));
	printf("\n");
	printf("%d", ft_strncmp(src, dest4, 20));
	printf("\n");
}

/*
n is the value of chars we want to compare
Return Value from strncmp()
0 the contents of both strings are equal
>0 the first character that does not match
has a greater value in str1 than in str2
<0 the first character that does not match
has a lower value in str1 than in str2
*/
