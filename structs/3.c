#include <stdio.h>
#include <math.h>

int main() {

    typedef struct Ponto {
            float x, y;
                } Ponto;

                    Ponto pontoA, pontoB; // 

                        printf("Digite o valor do ponto de XA:\n");
                            scanf("%f", &pontoA.x);
                                printf("Digite o valor do ponto de XB:\n");
                                    scanf("%f", &pontoB.x);
                                        printf("Digite o valor do ponto de YA:\n");
                                            scanf("%f", &pontoA.y);
                                                printf("Digite o valor do ponto de YB:\n");
                                                    scanf("%f", &pontoB.y);

                                                        float dx = pontoB.x - pontoA.x;
                                                            float dy = pontoB.y - pontoA.y;

                                                                float distancia = sqrt(dx * dx + dy * dy);

                                                                    printf("%f", distancia);


                                                                    