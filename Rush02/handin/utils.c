/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:15:18 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/23 22:15:19 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "natnum.h"

void	ft_putnbr(int nb)
{
	int	letra;

	if (nb < 0)
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

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				np;

	np = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			np = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(np * num));
}

int	check_digits(char *str)
{
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}
