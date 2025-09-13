#include <stdio.h>


int mdc(int x, int y) {
    if (y == 0) {
        return x;
    }
    return mdc(y, x % y);
}
//explicando:
//MDC(20,30), sabe-se que x é 20, e y é 30, portanto ele na primeira vez que entra na F(x,y), ele chama esses valores

int main(void) {
   int x, y;
    scanf("%d %d", &x, &y);
    int resultado = mdc(x, y);
    printf("Resultado: %d", resultado);
   
}
