#include <stdio.h>
#include <string.h>

//int notas [] = {10,20,50,100};

void podeSerSacado(int valor){
    int i = 0, valido=0;
    if(valor%10==0){
		valido=1;
        printf("%d é válido, \n", valido);
    } else {
        printf("Não é valido\n");
    }    
}

char *retornanotas(int valor) {
     if(valor == 10)
        return("1,10");
     else
        return("1,20");
}

int teste_entra_10_retorna_10(void) {
    char *nnotas;
    nnotas = retornanotas(10);
    if(strcmp(nnotas,"1,10")) {
        printf("Erro: entrou 10, saiu %s\n",nnotas);
        return(0);
    }
    return(1);
}

int teste_entra_20_retorna_1_20(void) {
    char *nnotas;
    nnotas = retornanotas(20);
    if(strcmp(nnotas,"1,20")) {
        printf("Erro: entrou 20, saiu %s\n",nnotas);
        return(0);
    }
    return(1);
}

// retorna verdadeiro quando valor pode ser sacado
int checaValor(int valor) {
	if(valor%10!=0)
		return(0);
	
	return(1);
}

int teste_checa_valor(void) {
	int erro =0;
	int resultado = 0;
	char *e;
	
	resultado = checaValor(11);	
	printf("Resultado = %i",resultado);
	if(resultado!=1) {
		erro++;
		e = "10 != " + resultado;
	}
	
	resultado = checaValor(20);
	if(resultado!=1) {
		erro++;
		e = "20 != " + resultado;
	}
	   
	resultado = checaValor(30);
	if(resultado!=1) {
		erro++;
		e = "30 != " + resultado;
	}
	
	resultado = checaValor(55);
	if(resultado!=0) {
		erro++;
		e = "55 != " + resultado;
	}
	

	
	resultado = checaValor(999);
	if(resultado!=0) {
		erro++;
		e = "999 != " + resultado;
	}
	
	if(strcmp(e,"")!=0) {	
		printf("%s",e);	 
		return(0);
	}
	return(1);
}

/*
void oqueDigitou(int notas){
    int notas
    if(){
        printf("");
//      nnotas="1,10";
//      nnotas="1,10;1,20";              
    } else {
        printf("");
    }               
}
*/
main (){
	int valor=0;
	
	// Faz todos os testes antes de continuar	
	if(teste_entra_10_retorna_10() 
	   && teste_entra_20_retorna_1_20()
	   && teste_checa_valor() ) {
	   printf("Erro ");
	   return(0);
	}
	
	// Comecando o progrmaa
	printf ("Informe valor a sacar: ");
    scanf("%i",&valor);
	if(!checaValor(valor))
		printf("Entre com um valor multiplo de 10");
	
	// CalculaNotas

	// Testa se é WINDOWS, se for coloca o pause, se não for (Linux/Mac/DOS) não coloca
	#ifdef WIN32
		printf("\n\n");
		system("pause");
	#endif
}
