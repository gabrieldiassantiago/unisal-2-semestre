
#include <stdio.h>

//int main(){
  
  //int mat[2][2] = {{1,2}, {3,4}};
  //int l,c;
  //for(l=0; l <2; l++){
   //   for(c=0; c < 2; c++){
     //     printf("%d\n", mat[l][c]);
  //    }
 // }
    
    
//}

int main(){
  
  int mat[2][2] = {{1,2}, {3,4}};
  int i, *p= &mat[0][0];
  
    for(i=0; i < 4; i++){
        printf("%d\n", (&p+i));
          
          /*
          aqui ele pega o valor do endereço (faz o calculo de por exemplo)..
          &mat[0][0] =xxxxx
          ai neste caso, ele pega o endereço de *p que atualmente é xxxxx, e soma com  + i (que neste caso atualmente é 0)
          ex => 
          &mat[0][0] = xxxxx + 0;
          e vai nesse endereço de memoria e exibe o valor correspondente que é 1 pois mat[0][0] = 1;
          
          */
      }
    
}
