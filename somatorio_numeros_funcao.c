#include <stdio.h>
#include <stdlib.h>

int somatorio(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 0) {
        return 0;
    }
    return n + somatorio(n-1); //em tese
    // se n = 3 >> 
    // n = 3 => 3 + somatorio(2);
    // n = 2 => 2 + somatorio(1);
    // n = 1 => 1 + somatorio(0) .. somatorio de 0 é 0..
    // somatorio(1) = 1;
    //somatorio (2) = 3;
    //somatorio(3) = 6
    //resultado seria 6
    
}

int main()
{
    int n;
    scanf("%d", &n);
    int resultado = somatorio(n);
    printf("%d", resultado);

}
