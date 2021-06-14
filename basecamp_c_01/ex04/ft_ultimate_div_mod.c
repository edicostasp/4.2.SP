void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a / *b;
	*b = *a % *b;
	*a = x;
}
