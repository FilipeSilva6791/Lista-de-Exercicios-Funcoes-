#include<stdio.h>

int funcao (int a);

int main (void)
{
    char a;
    int r;

    printf ("Este programa recebe um caractere do alfabeto, retorna um (1) se o caractere for maiusculo e zero (0) caso contrario\n");
    printf ("\nDigite o caractere: ");
    scanf ("%c",&a);

    r = funcao (a);

    printf ("\n%d\n",r);

}

int funcao (int a)
{
    if (a>=65 && a<=90)
        return 1;
    else
        return 0;
}
