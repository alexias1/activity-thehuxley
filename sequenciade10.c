#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int for1(int lista[10], int p, int valor){
	if(p == 9){
		printf("O numero %i apareceu %i vezes", lista[9], valor);
	}else{
		if(lista[p] == lista[9]){
			valor = valor+1;
		}
		for1(lista, p+1, valor);
	}
}

int main() {
		int lista[10];

		scanf("%i %i %i %i %i %i %i %i %i %i", &lista[0], &lista[1], &lista[2], &lista[3], &lista[4], &lista[5], &lista[6], &lista[7], &lista[8], &lista[9]);

		for1(lista, 0, 1);

}