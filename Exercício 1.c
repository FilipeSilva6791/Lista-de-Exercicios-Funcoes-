# include<stdio.h>

char conversor (char);

int main (void)
{
    char min,maiusc; // minusculo \ maiusculo


    printf ("Digite um caracter minusculo: ");
    scanf ("%c",&min);
    printf ("\n\n");

    maiusc = conversor(min);

    printf ("o caracter maiusculo correspondente a este eh: %c", maiusc);

}

char conversor (char minusculo)
{
    char maiusculo;

    maiusculo=minusculo-32;
    return (maiusculo);

}
