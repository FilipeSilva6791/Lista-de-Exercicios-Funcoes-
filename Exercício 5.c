#include<stdio.h>

float conversor (float frequencia);

float main (void)
{
    float f,T;

    printf ("Digite a frequencia do sinal:");
    scanf ("%f",&f);
    printf ("\n\n");

    T=conversor(f);

    printf ("O periodo deste sinal eh %fs",T);

}


float conversor (float frequencia)
{
    float periodo;

    periodo= 1/frequencia;

    return (periodo);
}
