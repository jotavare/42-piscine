/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:00:42 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/03 22:02:52 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	int pos;

	pos = 0;
	while (s1[pos] != '\0' || s2[pos] != '\0')
	{
		if (s1[pos] == s2[pos])
		{
			pos++;
		}
		if (s1[pos] < s2[pos] || s1[pos] > s2[pos])
		{
			return (s1[pos] - s2[pos]);
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	char *temp;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	return (0);
}
