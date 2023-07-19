/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:49:09 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/19 13:49:11 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int nb, char *base);
int		ft_strlen(char *str);
int		check_base(char *base);

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr(atoi(argv[2]), argv[1]);
}
*/

void	ft_putnbr(int nb, char *base)
{
	int	letra;
	int	b;

	b = check_base(base);
	if (nb == -2147483648 && b != 0)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648, base);
	}
	else if (nb < 0 && b != 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb, base);
	}
	else if (nb > b - 1 && b != 0)
	{
		ft_putnbr(nb / b, base);
		ft_putnbr(nb % b, base);
	}
	else if (b != 0)
	{
		write(1, &base[nb], 1);
	}
}

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

int	check_base(char *base)
{
	const int	b = ft_strlen(base);
	int			i;
	int			j;

	if (b == 1)
		return (0);
	i = 0;
	while (i < b)
	{
		if (base [i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < b)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (b);
}
