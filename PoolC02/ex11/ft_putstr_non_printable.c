/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:00:13 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/25 12:00:17 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_hexadecimal(char non_printable, char *hex)
{
	int		dividendo;
	int		resto;	

	dividendo = non_printable / 16;
	resto = non_printable % 16;
	write (1, "\\", 1);
	write (1, &hex[dividendo], 1);
	write (1, &hex[resto], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str [i] <= 126))
		{
			write_hexadecimal(str[i], "0123456789abcdef");
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
