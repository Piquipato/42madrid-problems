/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 21:28:53 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/14 21:28:57 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);
void	to_hex(char *str, int n, int s);
void	print_sfchar(char str);
void	ft_print_memcol(void *addr, unsigned int size);

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_print_memory(argv[1], atoi(argv[2]) );
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	crr;
	int	rows;

	crr = size;
	rows = 0;
	while (crr > 0)
	{
		if (crr > 16)
			ft_print_memcol(addr + rows, 16);
		else
			ft_print_memcol(addr + rows, crr);
		crr = crr - 16;
		rows += 16;
	}
	return (addr);
}

void	ft_print_memcol(void *addr, unsigned int size)
{
	char				addr_hex[17];
	char				char_hex[3];
	unsigned int		p;

	to_hex(addr_hex, (int) addr, 16);
	write(1, ": ", 2);
	p = 0;
	while (p < 16)
	{
		if (p < size)
			to_hex(char_hex, *((int *)(addr + p)), 2);
		else
			write(1, "  ", 2);
		if (p % 2 == 1)
			write(1, " ", 1);
		p++;
	}
	p = 0;
	while (p < size)
	{
		print_sfchar(*((char *)(addr + p)));
		p++;
	}
	write(1, "\n", 1);
}

void	to_hex(char *str, int n, int s)
{
	const char	*base = "0123456789abcdef";
	int			div;
	int			k;

	if (n < 0)
		div = -n;
	else
		div = n;
	k = s;
	while (k != 0)
	{
		str[k - 1] = base[div % 16];
		div /= 16;
		k--;
	}
	str[s] = '\0';
	write(1, str, s);
}

void	print_sfchar(char str)
{
	if (str >= 32 && str <= 126)
		write(1, &str, 1);
	else
		write(1, ".", 1);
}
