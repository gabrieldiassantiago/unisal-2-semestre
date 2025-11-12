#include <stdio.h>

int main() {
    typedef struct Data
    {
        float hora, minuto, segundo;
    } DATA; 
    

    DATA datas[5] = {0};

    float maior_hora = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%f", &datas[i].hora);
        scanf("%f", &datas[i].minuto);
        scanf("%f", &datas[i].segundo);
    }

    for (int i = 0; i < 5; i++) {
        if (datas[i].hora > maior_hora) {
            maior_hora = datas[i].hora;
        }
    }
    printf("A maior hora eh: %f", maior_hora);
}