/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:09:18 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/25 12:09:20 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	k;

	(void) argc;
	k = 0;
	while (argv[0][k] != '\0')
	{
		write(1, &argv[0][k], 1);
		k++;
	}
	write(1, "\n", 1);
	return (0);
}
