int ft_str_is_numeric(char *str)

{
	int i, numeric;

	i = 0;
	numeric = 1;
	while(str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			numeric = 0;
		i++;
	}
	return(numeric);
}
