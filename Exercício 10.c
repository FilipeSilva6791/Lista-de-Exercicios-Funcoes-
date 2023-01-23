#include <stdio.h>

float calcPotencia (float resistencia, float potencia, float tensao);

float main (void)
{
    float R,P,V;

    printf("Indique a tensao aplicada sobre o resistor: ",V);
    scanf ("%f",&V);

    printf("Indique o valor da resistencia: ");
    scanf ("%f",&R);

    P=calcPotencia (R,P,V);

    printf("\nA potencia dissipada no resistor eh de %.2f watts.\n",P);

}

float calcPotencia (float resistencia, float potencia, float tensao)
{
   potencia=((tensao*tensao)/resistencia);

   return (potencia);

}
