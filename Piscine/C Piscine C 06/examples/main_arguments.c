/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotavare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:08:26 by jotavare          #+#    #+#             */
/*   Updated: 2022/10/03 13:33:54 by jotavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("Number of arguments: %d\n", argc);
	printf("Argument value: %s\n", argv[1]);

	char *str = argv[1];
	printf("%s\n", str);
	return (0);
}
