#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{		
		ft_putchar('-');
		nb = (nb * (-1));
	}
	if (nb / 10 != 0) // verificar nb(15) / 10 != 0, se for != 0, imprime na tela linha 23  
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}
