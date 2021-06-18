int	ft_str_is_alpha(char string)
{
	return ((string >= '0' && string <= '9')
		 || (string >= 'A' && string <= 'Z')
		 || (string >= 'a' && string <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	string;

	i = 0;
	string = 1;
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(str[i]))
		{
			if (string && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!string && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			string = 0;
		}
		else
			string = 1;
		i++;
	}
	return (str);
}
