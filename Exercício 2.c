# include<stdio.h>

char conversor (char);

int main (void)
{
    char min,maiusc; // minusculo \ maiusculo


    printf ("Digite um caracter maiusculo: ");
    scanf ("%c",&maiusc);
    printf ("\n\n");

    min = conversor(maiusc);

    printf ("o caracter maiusculo correspondente a este eh: %c", min);

}

char conversor (char maiusculo)
{
    char minusculo;

    minusculo=maiusculo+32;

    return (minusculo);

}

