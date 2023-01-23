#include<stdio.h>

int ParImpar (int n);

int main (void)
{
    int num,r;

    printf ("Programa que retorna 1 se o numero for par e 0 se for impar\n\n");

    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    r=ParImpar(num);

    printf("\n%d\n",r);
}

int ParImpar (int n) ///numero
{
    if (n%2==0)
    return 1;
    else
    return 0;
}
