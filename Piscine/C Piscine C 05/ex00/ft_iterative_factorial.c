/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:58:37 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/05 18:58:43 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	unsigned int res;

	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("The factorial number of");
	printf(" %d is %d.\n", -1, ft_iterative_factorial(-1));
	printf("The factorial number of");
	printf(" %d is %d.\n", 0, ft_iterative_factorial(0));
	printf("The factorial number of");
	printf(" %d is %d.\n", 2, ft_iterative_factorial(2));
	printf("The factorial number of");
	printf(" %d is %d.\n", 3, ft_iterative_factorial(3));
	printf("The factorial number of");
	printf(" %d is %d.\n", 5, ft_iterative_factorial(5));
}
*/
