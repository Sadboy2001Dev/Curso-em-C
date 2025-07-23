#include <stdio.h>

int	main (void)
{
	int	idade;

	printf ("Informe a idade do usuario: ");
	scanf ("%d", &idade);
	if (idade > 11 && idade < 18)
		puts ("Adolescente");
	else if (idade < 50)
		puts ("Adulto");
		else
			puts ("Idoso");
			
}
