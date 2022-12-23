/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:48:48 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/03 19:54:30 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_params(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int pos;

	(void)ac;
	pos = 1;
	while (av[pos])
	{
		ft_print_params(av[pos]);
		write(1, "\n", 1);
		pos++;
	}
	return (0);
}
