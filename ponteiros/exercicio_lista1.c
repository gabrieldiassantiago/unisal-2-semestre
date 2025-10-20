int main() {
  int a, b;
    
    if (&a > &b) {
        
        printf("O endereço de A: %p é maior que B: %p", &a, &b);
        
    } else {
    
    printf("O endereço de B: %p é maior que A: %p", &b, &a);

    }
}
