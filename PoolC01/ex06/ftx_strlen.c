/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftx_putstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:55:13 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/08 23:55:15 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

void	ft_putnbr(int nb)
{
	int	letra;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
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
	int	count;

	j = 1;
	while (j < argc)
	{
		ft_putnbr(ft_strlen(argv[j]));
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
