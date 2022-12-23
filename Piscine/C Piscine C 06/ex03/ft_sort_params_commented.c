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

// write function library
#include <unistd.h>

// write function with 1 parameter (string)
void ft_putstr(char *str)
{
	while (*str)
	{
		// write each character
		write(1, str, 1);
		// add plus one to the string position
		str++;
	}
}

// compare both strings character by character
int ft_strcmp(char *s1, char *s2)
{
	// assign counter variable
	int pos;

	// add a conter
	pos = 0;
	// while string one or string two doesn't reach the end, continue loop
	while (s1[pos] != '\0' || s2[pos] != '\0')
	{
		// if string one, position one, equals to string 2, position 2
		if (s1[pos] == s2[pos])
		{
			// add plus one to the counter
			pos++;
		}
		// if string one, position one is bigger or smaller than string 2, position 2
		if (s1[pos] < s2[pos] || s1[pos] > s2[pos])
		{
			// return the subtraction of both position values (ascii table index)
			return (s1[pos] - s2[pos]);
		}
	}
	// return 0 if both strings are empty or at the end '\0'
	return (0);
}

int main(int argc, char **argv)
{
	// declare the variables i, j and temp
	int i;
	int j;
	char *temp;

	// inicialize variable i at 0, it will be our counter
	i = 0;
	// while 0 is lower than argc (number of parameters), compare and then add plus one
	while (++i < argc)
	{

		j = i;
		while (++j < argc)
		{
			// call the function to compare strings, position needs to be bigger than 0
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				// swaps the character in variable argv[i] with the variable argv[j]
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
		}
	}
	// reset the counter
	i = 0;
	// while 0 is lower than argc (number of parameters), compare and then add plus one
	while (++i < argc)
	{
		// call the function and write each parameter sorted by ascii table
		ft_putstr(argv[i]);
		// write a breakline
		write(1, "\n", 1);
	}
	return (0);
}
