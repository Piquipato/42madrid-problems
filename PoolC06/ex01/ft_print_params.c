/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:14:50 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/25 12:14:52 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	k;
	int	param;

	param = 1;
	while (param < argc)
	{
		k = 0;
		while (argv[param][k] != '\0')
		{
			write(1, &argv[param][k], 1);
			k++;
		}
		write(1, "\n", 1);
		param++;
	}
	return (0);
}
