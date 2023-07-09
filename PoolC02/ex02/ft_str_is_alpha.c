/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 22:09:37 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/09 22:09:40 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);
int	is_between(int n, int a, int b);

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	letra;

	is_alpha = 1;
	while (*str != '\0')
	{
		letra = (int) *str;
		if ((is_between(letra, 65, 90) || is_between(letra, 97, 122)) == 0)
		{
			is_alpha = 0;
		}
		str++;
	}
	return (is_alpha);
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
