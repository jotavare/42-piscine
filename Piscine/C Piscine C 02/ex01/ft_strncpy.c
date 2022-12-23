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

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int p;

	p = 0;
	while (src[p] != '\0' && p < n)
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}

/*
int	main()
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
*/
