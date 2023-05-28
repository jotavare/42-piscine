/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:33:54 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/13 12:33:56 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *) malloc(i * sizeof(char) + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!array)
		return (0);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	struct s_stock_str	*tab;

	tab = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("size: %i\n", tab[i].size);
		printf("str: %s\n", tab[i].str);
		printf("copy: %s\n\n", tab[i].copy);
		i++;
	}
	free(tab);
}*/
