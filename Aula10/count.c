#include <stdio.h>

int	main (void)
{
	int	count;

	count = 1;
	while (count <= 10)
	{
		printf ("%d", count);
		if (count != 10);
			puts (", ");
		else
			putchar ('\n');
		count++;
	}
}
