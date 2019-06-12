#include <stdio.h>
#include <stdlib.h>

float volume_esfera(float raio){

    float volume;
    float PI = 3.14159;

    return volume = (4 * (PI * raio * raio * raio)) / 3;
}

int main()
{
    float raio = 0;

    scanf("%f", &raio);

    printf("%.2f\n", volume_esfera(raio));

    return 0;
}
