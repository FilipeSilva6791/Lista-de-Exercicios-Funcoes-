#include<stdio.h>

int funcao (int a);

int main (void)
{
    char c;        //caracter
    int r;        // resposta

    printf("O programa retorna um(1) se o caractere digitado for um numero e zero(0) se for um outro caractere qualquer: ");
    scanf ("%c",&c);

    r=funcao (c);
    printf("\n%d\n",r);
}

int funcao (int a)
{
    if (a>=48 && a<=57)
    {return 1;}
    else
    {return 0;}
}
