/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:59:51 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 16:59:55 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_between(int n, int a, int b);

char	*ft_strcapitalize(char *str)
{
	char	*out;
	int		cap_nxt;

	out = str;
	cap_nxt = 1;
	while (*str != '\0')
	{
		if ((is_between(*str, 65, 90)
				|| is_between(*str, 97, 122)
				|| is_between(*str, 48, 57)) == 0)
			cap_nxt = 1;
		else
		{
			if (cap_nxt)
			{
				if (is_between(*str, 97, 122))
					*str = *str - 32;
				cap_nxt = 0;
			}
			else
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
