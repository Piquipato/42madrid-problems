/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:02:03 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/27 19:02:05 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_atoi_base(char *str, char *base);
char	*ft_putnbr_base(int nb, char *base);
int		magnitude(int n, int b);
int		check_base(char *base);

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("The number %s (base %s) in base %s is %s",
			argv[3], argv[1], argv[2],
			ft_convert_base(argv[3], argv[1], argv[2]));
	}

}
*/

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	return (ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to));
}

char	*ft_putnbr_base(int nb, char *base)
{
	char	*out;
	int		letra;
	int		b;
	int		k;
	int		size;

	size = 0;
	if (nb < 0)
	{
		size++;
		nb *= -1;
	}
	b = check_base(base);
	size += magnitude(nb, b) + 1;
	out = (char *) malloc(size * sizeof(char));
	k = size - 2;
	while (nb != 0 || k >= 0)
	{
		out[k--] = base[nb % b];
		nb = (nb - nb % b) / b;
	}
	if (size > magnitude(nb, b) + 1)
		out[0] = '-';
	out[size - 1] = '\0';
	return (out);
}

int	magnitude(int n, int b)
{
	int	ctr;

	if (n == 0)
		return (1);
	ctr = 0;
	while (n != 0)
	{
		n = (n - n % b) / b;
		ctr++;
	}
	return (ctr);
}
