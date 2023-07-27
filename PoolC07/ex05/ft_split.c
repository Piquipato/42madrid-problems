/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 19:38:59 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/27 19:39:35 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset);
int		ft_strlen(char *str);
int		check_charset(char *charset);
int		count_words(char *str, char *charset);
char	*ft_strstr(char *str, char *to_find);

char	**ft_split(char *str, char *charset)
{
	return ;
}

int	count_words(char *str, char *charset)
{
	int	wc;
	int	i;

	i = 0;
	wc = 0;
	while (str[i])
	{
		if (ft_strstr(charset, str[i]))
			
		i++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		s;
	int		f;

	s = 0;
	ptr = 0;
	while (str[s] != '\0')
	{
		f = 0;
		if (to_find[f] == '\0')
			return (str);
		while (str[s + f] == to_find[f] && to_find[f] != '\0')
		{
			if (f == 0)
				ptr = &str[s + f];
			f++;
		}
		if (to_find[f] == '\0')
			return (ptr);
		ptr = 0;
		s++;
	}
	return (ptr);
}

int	check_charset(char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (i < (ft_strlen(charset) - 1))
	{
		j = i + 1;
		while (j < ft_strlen(charset))
			if (charset[i] == charset[j++])
				return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
