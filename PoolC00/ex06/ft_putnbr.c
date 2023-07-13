#include <unistd.h>
#include "putnbr.h"

void	ft_putnbr(int n, int s);
int		ft_strlen(char *str);
int		to_base_alt(char *txt, int n, int s, char *base);
int		degen(int n, int s, int b);

void ft_putnbr(int n, int s)
{
	char txt[66];
	int bufsize;

	bufsize = to_base_alt(txt, n, s, "0123456789");
	write(1, txt, bufsize);
}

int	to_base_alt(char *txt, int n, int s, char *base)
{
	const int	b = ft_strlen(base);
	int			k;
	int			div;
	int			mod;
	int			idx;
	
	k = n < 0 ? degen(n, s, b) : (degen(n, s, b) - 1);
	div = n < 0 ? -n : n;
	while (div != 0 || k >= 0)
	{
		mod = div % b;
		txt[k] = base[mod];
		div = (div - mod) / b;
		k--;
	}
	if (n < 0)
		txt[0] = '-';
	idx = n < 0 ? (degen(n, s, b) + 1) : degen(n, s, b);
	txt[idx] = '\0';
	return (ft_strlen(txt));
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

