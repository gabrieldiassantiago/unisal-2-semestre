#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inverter_numero(int n) {
    
    if (n == 0) {
      return;
    } else {
        printf("%d", n % 10);
        inverter_numero(n / 10);
    }
}

int main(void) {
   int n;
    scanf("%d", &n);
    inverter_numero(n);
}
