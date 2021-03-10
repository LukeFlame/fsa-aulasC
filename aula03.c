#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, y, result = 0;
	
	printf("Digite qua tabuada deseja:\n");
	scanf("%i",&y);
	
	for (n = 0; n <= 20; n++) {
		result = n * y;
		printf("%i x %i = %i\n", y, n, result);
	}
}
