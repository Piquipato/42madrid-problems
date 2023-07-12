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
#include <string.h>
#include <stdlib.h>

void	write_num(char *txt, int *idx, int n, int s, int b, char *base);
char 	*to_dec(char *txt, int n, int s);
char 	*to_hex(char *txt, int n, int s);
char 	*to_bin(char *txt, int n, int s);
int		OoM(int n, int b);
int		power(int base, int exp);
int 	main(int argc, char *argv[]);
int		ft_strlen(char *str);
char 	*to_base_alt(char *txt, int n, int s, char *base);
int 	degen(int n, int s, int b);

int	OoM(int n, int b)
{
	int	mag;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		mag++;
		n = (n - (n % b)) / b;
	}
	return (mag);
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

char *to_dec(char *txt, int n, int s)
{
	int		idx;

	idx = 0;
	write_num(txt, &idx, n, s, 10, "0123456789");
	txt[idx] = '\0';
	return (txt);
}

char *to_hex(char *txt, int n, int s)
{
	int		idx;

	idx = 0;
	write_num(txt, &idx, n, s, 16, "0123456789abcdef");
	txt[idx] = '\0';
	return (txt);
}

char *to_bin(char *txt, int n, int s)
{
	int		idx;

	idx = 0;
	write_num(txt, &idx, n, s, 2, "01");
	txt[idx] = '\0';
	return (txt);
}

char *to_base_alt(char *txt, int n, int s, char *base)
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

int degen(int n, int s, int b)
{
	int tmp;
	int oom;

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
	int	count;
	char *tmp;

	count = 0;
	tmp = str;
	while (*tmp != '\0')
	{
		count++;
		tmp++;
	}
	return (count);
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

int main(int argc, char *argv[])
{
	int dtcn = 0;
	int dtck = 0;
	int n, k;
	char txt[66];
	for (int j = 1; j < argc; j++)
	{
		if (!strcmp("-n", argv[j]))
		{
			dtcn = 1;
			if (j != argc - 1)
				n = atoi(argv[j + 1]);
		}
		else if (!strcmp("-k", argv[j]))
		{
			dtck = 1;
			if (j != argc - 1)
				k = atoi(argv[j + 1]);
		}
		else if (dtcn && dtck)
			printf("%s\n", to_base_alt(txt, n, k, "0123456789abcdef"));
	}
	return (0);
}
