/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:11:57 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/10 09:12:00 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb > 0)
	{
		res *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("The factorial number of");
	printf(" %d is %d.\n", -1, ft_recursive_factorial(-1));
	printf("The factorial number of");
	printf(" %d is %d.\n", 0, ft_recursive_factorial(0));
	printf("The factorial number of");
	printf(" %d is %d.\n", 2, ft_recursive_factorial(2));
	printf("The factorial number of");
	printf(" %d is %d.\n", 3, ft_recursive_factorial(3));
	printf("The factorial number of");
	printf(" %d is %d.\n", 5, ft_recursive_factorial(5));
}
*/
