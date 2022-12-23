/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_right.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:06:20 by jotavare          #+#    #+#             */
/*   Updated: 2022/09/27 20:06:24 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int a;
	int swap;

	i = 0;
	a = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[a];
		tab[a] = swap;
		i++;
		a--;
	}
}

int main()
{
	int tab[6] = {0, 1, 2, 3, 4, 5};
	int size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
