#include <stdio.h>


int imprime(int a, int n) {
  if (a <= n){
      printf("%i ", a);
      return imprime(a+1, n);
  }
}

int linha(int a, int n){
    
    imprime(1, a);
    printf("\n");
    if (a < n){
        linha(a+1, n);
    }
    
}

int main() {
  int n, a;
    printf("Digite um número: ");
    scanf("%i", &n);
    linha(1, n);
}
