#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// Declara os valores a receber
	int n1=0, n2=0;
	
	// Recebe os valores
	printf("Digite o primeiro valor:\n");
	scanf("%i",&n1);
	
	printf("Digite o segundo valor:\n");
	scanf("%i",&n2);
	
	// Processa os resultados
	int resultAdd = n1 + n2,
		resultSub = n1 - n2,
		resultMult = n1 * n2;
	double resultDiv = n1 / n2;
	
	// Mostra os resultados
	printf("Adicao: %i\n", resultAdd);
	printf("Subtracao: %i\n", resultSub);
	printf("Multiplicacao: %i\n", resultMult);
	printf("Divisao: %.2f\n", resultDiv);
	
	return(0);
}
