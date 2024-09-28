#include <stdio.h>
//

int imprime(int a, int n) {
    
    if (a <= n){
        printf("%i ", a);
        return imprime(a+1, n);
    }

}

int main() {
  int n;
    printf("Digite um número: ");
    scanf("%i", &n);
  imprime(1, n);
}
