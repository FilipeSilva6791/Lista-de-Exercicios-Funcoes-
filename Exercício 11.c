#include<stdio.h>

float relacaoResistencias (float Vin, float Vout, float relacao);

float main (void)
{
    float Vent, Vsai, relacao;

    printf("Este programa calcula a relacao das resistencias de um divisor de tensao para que haja o Vout desejado");

    printf("\n\nDigite o valor da tensão de entrada: ");
    scanf("%f",&Vent);

    printf("Digite o valor da tensao de saida desejada:");
    scanf("%f",&Vsai);

    relacao=relacaoResistencias(Vent,Vsai,relacao);

    printf("\n\nR2/R1=%.2f\n\n",relacao);
}

float relacaoResistencias (float Vin, float Vout, float relacao)
{

    relacao=Vout/(Vin-Vout);

    return (relacao);

}
