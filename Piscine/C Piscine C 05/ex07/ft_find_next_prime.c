/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:51:32 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/10 09:51:34 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("The next superior or equal prime ");
	printf("number of %d is: %d\n", -1, ft_find_next_prime(-1));
	printf("The next superior or equal prime ");
	printf("number of %d is: %d\n", 0, ft_find_next_prime(0));
	printf("The next superior or equal prime ");
	printf("number of %d is: %d\n", 3, ft_find_next_prime(3));
	printf("The next superior or equal prime ");
	printf("number of %d is: %d\n", 13, ft_find_next_prime(13));
	printf("The next superior or equal prime ");
	printf("number of %d is: %d\n", 85, ft_find_next_prime(85));
}
*/
