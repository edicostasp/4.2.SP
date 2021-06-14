void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int compare;
	
	i = 0;
	while(i < size)
	{
		compare = i;
		while (compare < size)
		{
			if (tab[i] >= tab[compare])
				ft_swap(&tab[i], &tab[compare]);
			compare++;
		}
		++i;
	}
}
