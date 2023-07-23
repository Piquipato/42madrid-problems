/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_norminette.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plalanda <plalanda@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:36:16 by plalanda          #+#    #+#             */
/*   Updated: 2023/07/23 22:36:19 by plalanda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "natnum.h"

void	enter_trim(char *total_string)
{
	int	i;

	i = 0;
	while (total_string[i] == '\n')
		total_string[i++] = ' ';
	i = 1;
	while (total_string[i] != '\0')
	{
		if (total_string[i] == '\n' && total_string[i - 1] == '\n')
			total_string[i - 1] = ' ';
		i++;
	}
	if (total_string[i - 1] == '\n')
		total_string[i - 1] = ' ';
	total_string[i] = '\0';
}

char	*ft_trim(char *total_string, int num_chars)
{
	int		i;
	int		j;
	int		total_spaces;
	char	*str;

	enter_trim(total_string);
	total_spaces = 0;
	i = -1;
	while (total_string[++i] != '\0')
		if (total_string[i] == ' ')
			total_spaces++;
	str = (char *)malloc((num_chars) * sizeof(char));
	i = -1;
	j = -1;
	while (total_string[++i] != 0 && i < num_chars)
		if (total_string[i] != ' ')
			str[++j] = total_string[i];
	i++;
	if (str[j + 1] != '\n')
	{
		str[j + 1] = '\n';
		str[j + 2] = '\0';
	}
	return (str);
}

char	*file_to_string(char *file_name, char c, int i)
{
	int		num_chars;
	char	*total_string;
	char	*total_string_without_spaces;
	int		fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	num_chars = 0;
	while (read(fd, &c, sizeof(c)) > 0)
		num_chars++;
	total_string = (char *)malloc(num_chars);
	close(fd);
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, sizeof(c)) > 0)
		total_string[++i] = c;
	close(fd);
	total_string_without_spaces = ft_trim(total_string, num_chars);
	free(total_string);
	return (total_string_without_spaces);
}

int	num_rows(char *total_string)
{
	int	i;
	int	num;

	num = 0;
	i = -1;
	while (total_string[++i] != '\0')
		if (total_string[i] == '\n')
			num++;
	return (num);
}

void	find_number(char *total_string, int num)
{
	char	number_str[20];
	int		i;
	int		j;
	int		k;

	i = -1;
	j = -1;
	k = -1;
	while (++k < num_rows(total_string))
	{
		while (total_string[++i] != ':')
			number_str[++j] = total_string[i];
		if (ft_atoi(number_str) == num)
			while (total_string[++i] != '\n')
				write(1, &total_string[i], 1);
		else
		{
			while (total_string[++i] != '\n')
				j = -1;
			j = -1;
		}
	}
}
