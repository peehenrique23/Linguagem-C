#include<stdio.h>
#include<stdlib.h>

int main ()

{
	int n1, n2, soma;
	
	printf ("Digite um numero: ");
	scanf ("%i", &n1);
	
	printf ("\nDigite outro numero: ");
	scanf ("%i", &n2);

    printf ("\nSoma: ");
    soma = n1+n2;
    printf("n1 + n2 = %i\n", soma);
 
}
