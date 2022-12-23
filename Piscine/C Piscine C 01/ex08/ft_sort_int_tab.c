/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab_right.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:07:42 by jotavare          #+#    #+#             */
/*   Updated: 2022/09/27 20:07:45 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
	int swap;
	int count;

	count = 0;
	while (count < size)
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}
