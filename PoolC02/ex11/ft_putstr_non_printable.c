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

#include <stdio.h>

void	ft_putstr_non_printable(char *str);
int		is_between(int n, int a, int b);
int		power(int base, int exp);
void	insert_str(char *str, int idx);
char 	*to_hex(char *txt, int n, int s);
void	write_num(char *txt, int *idx, int n, int s, int b, char *base);

int	main(int argc, char *argv[])
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	printf("%s\n", str);
}

void	ft_putstr_non_printable(char *str)
{
	char	tmp[1024];
	int	k;
	char *ptr;
	char *hex;

	ptr = str;
	while (*ptr != '\0')
	{
		if (!is_between(*ptr, 32, 127))
		{
			k = 0;
			while (str[k] != *ptr)
			{
				tmp[k] = str[k];
				k++;
			}
			hex = to_hex(hex, *ptr, 2);
			tmp[k + 1] = '\\';
			tmp[k + 2] = hex[0];
			tmp[k + 3] = hex[1];
			while (str[k + 3] != '\0')
			{
				tmp[k + 3] = str[k];
				k++;
			}
			tmp[k + 3] = '\0';
			k = 0;
			while (tmp[k] != '\0')
			{
				str[k] = tmp[k];
				k++;
			}
		}
		ptr++;
	}
}

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

char *to_hex(char *txt, int n, int s)
{
	int		idx;

	idx = 0;
	write_num(txt, &idx, n, s, 16, "0123456789abcdef");
	txt[idx] = '\0';
	return (txt);
}

void	write_num(char *txt, int *idx, int n, int s, int b, char *base)
{
	if (n < 0)
	{
		txt[*idx] = '-';
		(*idx)++;
		write_num(txt, idx, -n, s, b, base);
	}
	else if (n / power(b, s - 1) < 1 && s > 0)
	{
		txt[*idx] = '0';
		(*idx)++;
		s--;
		write_num(txt, idx, n, s, b, base);
	}
	else if (n > b - 1)
	{
		s--;
		write_num(txt, idx, n / b, s, b, base);
		write_num(txt, idx, n % b, 0, b, base);
	}
	else
	{
		txt[*idx] = base[n];
		(*idx)++;
	}
}

int	power(int base, int exp)
{
	int	k;
	int	prd;

	prd = 1;
	k = 1;
	while (k <= exp)
	{
		prd = prd * base;
		++k; 
	}
	return (prd);
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