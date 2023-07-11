/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:05:57 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 16:06:00 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);
int	is_between(int n, int a, int b);

int	ft_str_is_printable(char *str)
{
	int	is_num;
	int	letra;

	is_num = 1;
	while (*str != '\0')
	{
		letra = (int) *str;
		if (is_between(letra, 32, 127) == 0)
		{
			is_num = 0;
		}
		str++;
	}
	return (is_num);
}

int	is_between(int n, int a, int b)
{
	if (n >= a && n <= b)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
