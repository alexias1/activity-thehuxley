#include <stdio.h>

int imprime(int num, int comp){
    if (comp <= num){
        printf("%i ", num);
        return imprime(num, comp+1);
    }
}

int chama_linha(int comp, int num){

    if (comp < num){
        chama_linha(comp, num-1);
    }
    imprime(num, 1);
    printf("\n");
    
    
}

int main() {
  int num, comp;
    printf("Digite um número: ");
    scanf("%i", &num);
    chama_linha(1, num);
    
}
