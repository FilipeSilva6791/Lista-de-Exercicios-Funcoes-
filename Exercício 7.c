#include <stdio.h>

float deltafase (float tempo, float frequencia);

float main (void)
{
    float t,f,fase;

    printf("Este programa calcula a diferenca de fase entre dois sinais a partir da diferenca de tempo entre a crista dos sinais e suas respectivas frequencias\n\n");
    printf("Digite a diferenca de tempo entre as cristas positivas dos sinais:");
    scanf ("%f",&t);
    printf("Agora digite a frequencia dos sinais:");
    scanf ("%f",&f);

    fase= deltafase(t,f);

    printf("\n\nA diferenca de fase entre os sinais eh %.2f em graus\n\n",fase);

}


float deltafase (float tempo, float frequencia)
{
    float dif_fase;

    dif_fase= (tempo*360)/(1/frequencia);

    return (dif_fase);

}
