#include<stdio.h>

float conversor (float periodo);

float main (void)
{
    float f,T;

    printf ("Digite o periodo do sinal:");
    scanf ("%f",&T);
    printf ("\n\n");

    f=conversor(T);

    printf ("A frequencia deste sinal eh %f Hz",f);

}


float conversor (float periodo)
{
    float frequencia;

    frequencia = 1/periodo;

    return (frequencia);
}

