#include <unistd.h>

void	ft_putchar(char c);

char	g_start = 'o';
char	g_hSide = '-';
char	g_vSide = '|';
char	g_space = ' ';

void	printChar(int y, char end, char mid)
{
	int	count;

	count = 1;
	ft_putchar(end);
	count++;
	while (count < y)
	{
		ft_putchar(mid);
		count++;
	}	
	if (count == y)
	{
		ft_putchar(end);
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x > 0 && y > 0)
	{
		while (line <= x)
		{
			if (line == 1 || line == x)
			{
				printChar(y, g_start, g_hSide);
				line++;
			}
			else if (line < x)
			{
				printChar(y, g_vSide, g_space);
				line++;
			}
		}
	}
}
