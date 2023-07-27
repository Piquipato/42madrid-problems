/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:18:06 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/19 14:18:08 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_atoi_base(char *str, char *base);
int	ft_strlen(char *str);
int	check_base(char *base);
int	ft_stridx(char ltr, char *str);

/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("The number %s in base %s is %d", 
			argv[2], argv[1], ft_atoi_base(argv[2], argv[1]));
}
*/

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	num;
	int				i;
	int				np;
	int				b;

	b = check_base(base);
	np = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\n' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			np *= -1;
	while (ft_stridx(str[i], base) != -1)
	{
		num = num * b + ft_stridx(str[i], base);
		i++;
	}
	if (b != 0)
		return ((int)(np * num));
	return (0);
}

int	ft_stridx(char ltr, char *str)
{
	const int	len = ft_strlen(str);
	int			i;

	i = 0;
	while (i < len)
	{
		if (str[i] == ltr)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	check_base(char *base)
{
	const int	b = ft_strlen(base);
	int			i;
	int			j;

	if (b == 1)
		return (0);
	i = 0;
	while (i < b)
	{
		if (base [i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < b)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (b);
}
