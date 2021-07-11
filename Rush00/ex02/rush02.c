#include <unistd.h>

void	ft_putchar(char c);

char	g_start = 'A';
char	g_side = 'B';
char	g_end = 'C';
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
			if (line == 1 )
			{
				printChar(y, g_start, g_side);
				line++;
			}
			else if (line < x)
			{
				printChar(y, g_side, g_space);
				line++;
			}
			else
			{
				printChar(y, g_end, g_side);
				line++;
			}
		}
	}
}
