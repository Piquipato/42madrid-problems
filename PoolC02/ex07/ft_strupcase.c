/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:15:07 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 16:15:09 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_between(int n, int a, int b);

char	*ft_strupcase(char *str)
{
	char	*out;

	out = str;
	while (*str != '\0')
	{
		if (is_between(*str, 97, 122) == 1)
		{
			*str = *str - 32;
		}
		else
		{
			*str = *str;
		}
		str++;
	}
	return (out);
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
