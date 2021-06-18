int	ft_str_is_alpha(char *str)

{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			alpha = 0;
		i++;
	}
	return (alpha);
}
