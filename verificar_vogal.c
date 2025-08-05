void verificar(char letra_a_verificar) {
    if (letra_a_verificar == 97 || letra_a_verificar == 65) {
        printf("A letra é uma vogal, e ela é a letra A");
    } else if (letra_a_verificar == 69 || letra_a_verificar == 101) {
        printf("A letra é uma vogal, e ela é a letra E");
    } else if (letra_a_verificar == 105 || letra_a_verificar ==  73) {
        printf("A letra é uma vogal e ela é uma letra I");
    } else if (letra_a_verificar == 79 ||letra_a_verificar == 111) {
        printf("A letra é uma volga e ela é uma letra O");
    } else if (letra_a_verificar == 85 || letra_a_verificar == 117) {
        printf("A letra é uma volga e ela é uma letra U");
    } else {
        printf("A letra não é uma vogal");
    }
}

int main()
{
     
    char letra;
    scanf("%c", &letra);
    verificar(letra);
    
 
}
