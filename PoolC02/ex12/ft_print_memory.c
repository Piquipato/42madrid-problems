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

void	*ft_print_memory(void *addr, unsigned int size);

void	*ft_print_memory(void *addr, unsigned int size)
{

}

void to_hex(char *str, int n, int s)
{
	const char	base = "0123456789abcdef";
	int 		div;
	int			k;

	div = n;
	k = s;
	while (k != 0)
	{
		str[k - 1] = *(&base + div % 16);
		div /= 16;
		k--;
	}
	str[s] = '\0';
}
