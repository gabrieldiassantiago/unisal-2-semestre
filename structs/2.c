#include <stdio.h>
#include <math.h>

 typedef struct Ponto
    {
       float x1, x2;
       float y1, y2;
    } Ponto;

int main() {

    Ponto distancia;

    scanf("%f %f %f %f", &distancia.x1, &distancia.x2, &distancia.y1, &distancia.y2);


    float valor_distancia = sqrt(((distancia.x2-distancia.x1) * (distancia.x2 - distancia.x1)) + ((distancia.y2 - distancia.y1) * (distancia.y2 - distancia.y1)));

    printf("%f\n", valor_distancia);


}