void	ft_putchar(char c);

void	ft_print(int largeur, char debut, char millieu, char fin)
{
	ft_putchar(debut);
	while ((largeur - 1) > 1)
	{
		ft_putchar(millieu);
		largeur--;
	}
	if (largeur > 1)
		ft_putchar(fin);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			ft_print(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			ft_print(x, '\\', '*', '/');
	}
}
