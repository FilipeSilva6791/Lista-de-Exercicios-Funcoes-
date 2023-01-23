#include <stdio.h>

char conversor (char numero);

int main (void)
{
   char num;
   int valor_do_num;

   printf("Digite um caracter numerico de 0 a 9:");
   scanf ("%c",&num);
   printf("\n\n");

   valor_do_num=conversor(num);

   printf ("O valor nominal do caracter digitado eh: %d ",valor_do_num);

}


char conversor (char numero)
{
    int valornominal;

    valornominal=numero-'0';

    return (valornominal);
}
