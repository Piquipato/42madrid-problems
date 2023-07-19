/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:52:51 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 20:52:55 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void	ft_putnbr(int nb)
{
	int	letra;

	if (nb  == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		letra = nb + 48;
		write(1, &letra, 1);
	}
}

int	main(int argc, char *argv[])
{
	int	j;
	int	dtc;

	j = 0;
	dtc = 0;
	while (j < argc)
	{
		if (dtc == 1)
		{
			ft_putnbr(atoi(argv[j]));
			dtc = 0;
		}
		if (strcmp(argv[j], "-n") == 0)
		{
			dtc = 1;
		}
		j++;
	}
	return (0);
}
