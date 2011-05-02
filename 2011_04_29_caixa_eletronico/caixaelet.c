#include <stdio.h>
#include "minunit.h"

int tests_run = 0;

int foo = 7;

int testa_valor(int valor) {
  
  if ( valor % 10 == 0)  
    return(1);
  else 
    return(0);
         
}

char * conta_notas(int valor) {
   if(valor == 100)
   return "C1";
   else if(valor == 170)
   return "C1Q1V1";
   else
   return "X";
}

static char * test_retorno100(){
       mu_assert("Erro! Deveria retornar C1",conta_notas(100) == "C1");
       return 0;
}

static char * test_retorno170(){
       mu_assert("Erro! Deveria retornar C1Q1V1", conta_notas(170) == "C1Q1V1");
       return 0;      
}

static char * test_retorno0(){
       mu_assert("Erro! Deveria retornar X", conta_notas(0) == "X");
       return 0;
}

static char * test_15reais() {
    mu_assert("Erro! Aceitou 15 Reais",testa_valor(15) == 0);
    return 0;
}

static char * test_20reais() {
    mu_assert("Erro. Valor 20 nao foi aceito!",testa_valor(20) != 0);
    return 0;
}

static char * test_125reais() {
       mu_assert(" Erro. Valor 125 foi aceito", testa_valor(125) ==0);
       return 0;
       }
   

static char * test_foo() {
    mu_assert("error, foo != 7", foo == 7);
    return 0;
}

static char * all_tests() {
    mu_run_test(test_15reais);
    mu_run_test(test_20reais);
    mu_run_test(test_125reais);
    mu_run_test(test_retorno100);
    mu_run_test(test_retorno170);
    mu_run_test(test_retorno0);
    return 0;
}

int main(int argc, char **argv) {
    char *result = all_tests();
    if (result != 0) {
        printf("%s\n", result);
    }
    else {
        printf("ALL TESTS PASSED\n");
    }
    printf("Tests run: %d\n", tests_run);
    
    getche();
    return result != 0;    
}
