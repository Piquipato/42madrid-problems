char *to_base_alt(char *txt, int n, int s, char *base)
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
	return (txt);
}