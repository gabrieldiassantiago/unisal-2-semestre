int main()
{
     
 char letra;
 scanf("%c", &letra);
 
 if (letra >= 65 && letra <= 90) {
     printf("A letra é maiscula");
 } else if (letra >= 97 && letra <= 122) {
     printf("A letra é minuscula");
 } else if (letra >= 48 && letra <= 57) {
     printf("A letra é um numero");
 } else {
     printf("É um caracter especial");
 }
 
}
