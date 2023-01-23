#include<stdio.h>

float resistencia (float vcc, float corrente);


float main (void)
{
    float I,V,R;


   printf ("Programa que calcula o valor de um resistor em serie com um led vermelho dados vcc e a corrente de trabalho do led\n\n");
   printf ("Digite o valor da fonte de alimentacao em volts:");
   scanf ("%f",&V);
   printf ("Agora digite o valor da corrente de trabalho do led em mA:");
   scanf ("%f",&I);

   R=resistencia(V,I);

   printf("\n\nResistor = %.2f Ohms\n\n",R);

}

float resistencia (float vcc, float corrente)
{
    float resistencia;

    resistencia=(vcc-2)/(corrente/1000);  //1,96V É A TENSÃO DE TRABALHO DE UM LED VERMELHO, A TENSAO NO RESISTOR É VCC - VLED

    return (resistencia);

}
