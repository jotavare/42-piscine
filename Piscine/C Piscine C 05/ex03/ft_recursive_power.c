/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:18:26 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/10 09:18:27 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	int res;

	res = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d to the power of %d = %d.\n", -1, 5, ft_recursive_power(-1, 5));
	printf("%d to the power of %d = %d.\n", 0, 5, ft_recursive_power(0, 5));
	printf("%d to the power of %d = %d.\n", 1, 5, ft_recursive_power(1, 5));
	printf("%d to the power of %d = %d.\n", 3, 5, ft_recursive_power(3, 5));
	printf("%d to the power of %d = %d.\n", 5, 5, ft_recursive_power(5, 5));
}
*/
