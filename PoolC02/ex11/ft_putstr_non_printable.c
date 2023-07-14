/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cream <plalanda@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:30:10 by cream             #+#    #+#             */
/*   Updated: 2023/07/11 17:30:11 by cream            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);
char	*to_base_alt(char *txt, int n, int s, char *base);
int		degen(int n, int s, int b);
int		ft_strlen(char *str);

void	ft_putstr_non_printable(char *str)
{
	char	hex[66];
	int		k;

	while (str[k] != '\0')
	{
		if (!(str[k] >= 32 && str[k] <= 126))
		{
			write(1, "\\", 1);
			to_base_alt(hex, str[k], 2, "0123456789abcdef");
			write(1, hex, 2);
		}
		else
		{
			write(1, &str[k], 1);
		}
		k++;
	}
}

int	main(int argc, char *argv[])
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
}

char	*to_base_alt(char *txt, int n, int s, char *base)
{
	const int	b = ft_strlen(base);
	int			k;
	int			div;
	int			mod;

	k = degen(n, s, b) - 1;
	div = n;
	while (div != 0 || k >= 0)
	{
		mod = div % b;
		txt[k] = base[mod];
		div = (div - mod) / b;
		k--;
	}
	txt[degen(n, s, b)] = '\0';
	return (txt);
}

int	degen(int n, int s, int b)
{
	int	tmp;
	int	oom;

	tmp = n;
	oom = 0;
	if (n == 0)
		oom = 1;
	while (tmp != 0)
	{
		tmp = (tmp - tmp % b) / b;
		oom++;
	}
	if (oom > s)
	{
		return (oom);
	}
	else
	{
		return (s);
	}
}

int	ft_strlen(char *str)
{
	int		count;
	char	*tmp;

	count = 0;
	tmp = str;
	while (*tmp != '\0')
	{
		count++;
		tmp++;
	}
	return (count);
}

/*
void	insert_str(char *str, int idx)
{
	k = 0;
	while (k < idx)
	{
		tmp[k] = str[k];
		k++;
	}
	tmp[k + 1] = '\\';
	tmp[k + 2] =
}
*/
