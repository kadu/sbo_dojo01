#include <stdio.h>
#include <stdlib.h>
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
	int contaTestes = 0;
	int resultado = 0;
	char e[500];
	
	resultado = checaValor(10);	
	if(resultado!=1) {
		erro++;
		contaTestes++;		
		sprintf(e,"[Teste %d] - Valor 10 nao OK \n",contaTestes);
	}
	
	resultado = checaValor(20);
	if(resultado!=1) {
		erro++;
		contaTestes++;
		sprintf(e,"[Teste %d] - Valor 20 nao OK \n",contaTestes);
	}
	   
	resultado = checaValor(30);
	if(resultado!=1) {		
		erro++;
		contaTestes++;
		sprintf(e,"[Teste %d] - Valor 30 nao OK \n",contaTestes);		
	}
	
	resultado = checaValor(55);
	if(resultado!=0) {		
		erro++;
		contaTestes++;
		sprintf(e,"[Teste %d] - Valor 55 nao OK \n",contaTestes);		
	}
	
	resultado = checaValor(999);
	if(resultado!=0) {
		erro++;
		contaTestes++;
		sprintf(e,"[Teste %d] - Valor 999 nao OK \n",contaTestes);
	}
	
	if(erro!=0) {	
		printf("Houve %i erro(s): \n",erro);	 
		printf("%s\n",e);
		return(0);
	}
	return(1);
}

main (){
	int valor=0;
	
	// Faz todos os testes antes de continuar	
	if(!(teste_entra_10_retorna_10() 
			&& teste_entra_20_retorna_1_20()
			&& teste_checa_valor())) {	   
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
		
	return(1);
}
