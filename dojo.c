#include <stdio.h>
#include <stdlib.h>

int notas [] = {10,20,50,100};
void podeSerSacado(int valor){
    int i = 0, valido=0;
            if(valor%10==0){
                valido=1;
                printf("%d e valido, \n", valido);
            }
            else{
                 printf("Não e valido\n");
                 }    
}

char * retornanotas(int valor) {
     if(valor == 10)
       return("1,10");
     else
       return("1,20");
}

void teste_entra_10_retorna_10(void) {
    char *nnotas;
    nnotas = retornanotas(10);
    if(strcmp(nnotas,"1,10"))
      printf("Erro: entrou 10, saiu %s\n",nnotas);
}
void teste_entra_20_retorna_1_20(void) {
    char *nnotas;
    nnotas = retornanotas(20);
    if(strcmp(nnotas,"1,20"))
      printf("Erro: entrou 20, saiu %s\n",nnotas);
}

/*
#void oqueDigitou(int notas){
#     int notas
#         if(){
#              printf("");
#// nnotas="1,10";
#// nnotas="1,10;1,20";              
#              }
#              else{
#                   printf("");
#                   }
#                   
#     }
*/
main (){
  int valor=0;
  teste_entra_10_retorna_10();
  teste_entra_20_retorna_1_20();
/*
#     printf ("Informe valor a sacar: ");
#     scanf("%i",&valor);
#     podeSerSacado(valor);
*/
     system("pause");     
}
