#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1=0, n2=0;
	printf("Digite o primeiro valor:\n");
	scanf("%i",&n1);
	
	printf("Digite o segundo valor:\n");
	scanf("%i",&n2);
	
	int resultAdd = n1 + n2,
		resultSub = n1 - n2,
		resultMult = n1 * n2;
	double resultDiv = n1 / n2;
	
	printf("Adicao: %i\n", resultAdd);
	printf("Subtracao: %i\n", resultSub);
	printf("Multiplicacao: %i\n", resultMult);
	printf("Divisao: %.2f\n", resultDiv);
	
	return(0);
}
