#include <unistd.h>

void	ft_putchar(char c);

char	g_top_start = 'A';
char	g_top_end = 'C';
char	g_side = 'B';
char	g_bot_start = 'C';
char	g_bot_end = 'A';
char	g_space = ' ';

void	printChar(int y, char start, char mid, char end)
{
	int	count;

	count = 1;
	ft_putchar(start);
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
			if (line == 1)
			{
				printChar(y, g_top_start, g_side, g_top_end);
				line++;
			}
			else if (line < x)
			{
				printChar(y, g_side, g_space, g_side);
				line++;
			}
			else
			{
				printChar(y, g_bot_start, g_side, g_bot_end);
				line++;
			}
		}
	}
}
