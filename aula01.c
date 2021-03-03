#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	// Declara os valores
	int i = 0;
	int j = 0;
	int resultado = 0;

	// Lógica de criação da tabuada no cmd
	while(i != 11) {
		while (j != 11) {
			resultado = i * j;
			prin("%i x %i = %i | ", j, i, resultado);
			j++;
		}
		i++;
		j = 0;
		printf("\n");
	} 
	return 0;
}
