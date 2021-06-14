int ft_str_is_printable(char *str)

{
	int i, printable;

	i = 0;
	printable = 1;
	while(str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			printable = 0;
		i++;
	}
	return(printable);
}
