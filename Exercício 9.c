#include<stdio.h>

float calcPotencia (float corrente, float tensao, float potencia);


float main (void)
{
    float P,V,I;

    printf("Informe a tensao sobre a resistencia: ");
    scanf("%f",&V);

    printf("Agora digite a corrente que passa pela resistencia em mA: ");
    scanf("%f",&I);

    P=calcPotencia(I,V,P);

    printf ("\n\nA potencia dissipada em cima do resistor eh de %.2f Watts.\n\n ",P);
}

float calcPotencia (float corrente, float tensao, float potencia)
{

    potencia=(corrente/1000)*tensao;

    return (potencia);

}
