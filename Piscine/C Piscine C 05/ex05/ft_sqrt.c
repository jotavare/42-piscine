/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:26:22 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/10 09:26:24 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	long ind;
	long count;

	count = nb;
	if (count <= 0)
		return (0);
	if (count == 1)
		return (1);
	ind = 2;
	if (count >= 2)
	{
		while (ind * ind <= count)
		{
			if (ind * ind == count)
				return (ind);
			ind++;
		}
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("The square root of %d is %d\n", -2000, ft_sqrt(-2000));
	printf("The square root of %d is %d\n", 0, ft_sqrt(0));
	printf("The square root of %d is %d\n", 217897, ft_sqrt(217897));
	printf("The square root of %d is %d\n", 5, ft_sqrt(5));
	printf("The square root of %d is %d\n", 85, ft_sqrt(85));
	printf("The square root of %d is %d\n", 169, ft_sqrt(169));
}
*/
