/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:44:38 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/10 09:44:40 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("0 = not prime number | 1 = prime number\n");
	printf("Is %d a prime number? %d\n", -15, ft_is_prime(-15));
	printf("Is %d a prime number? %d\n", 0, ft_is_prime(0));
	printf("Is %d a prime number? %d\n", 1, ft_is_prime(1));
	printf("Is %d a prime number? %d\n", 3, ft_is_prime(3));
	printf("Is %d a prime number? %d\n", 13, ft_is_prime(13));
	printf("Is %d a prime number? %d\n", 223, ft_is_prime(223));
	printf("Is %d a prime number? %d\n", 59451, ft_is_prime(45625));
}
*/
