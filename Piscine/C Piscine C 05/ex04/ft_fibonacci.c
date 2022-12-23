/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:21:43 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/10 09:21:46 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(-1));
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(3));
	printf("%i\n", ft_fibonacci(5));
	printf("%i\n", ft_fibonacci(7));
}
*/
