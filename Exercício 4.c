#include <stdio.h>

float conversor (float fahrenheit);

float main (void)
{
    float C,F; // Celsius e fahrenheit

    printf ("Conversor de temperatura (fahrenheit --> celsius)\n\nDigite a temperatura em fahrenheit:");
    scanf("%f",&F);

    C=conversor(F);

    printf ("O valor desta temperatura em celsius eh:%f ",C);


}

float conversor (float fahrenheit)
{
    float celsius;

    celsius= (fahrenheit-32)*5/9;

    return (celsius);
}
