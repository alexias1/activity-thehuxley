#include <stdio.h>

int fat(int num){
    
    if (num == 1 || num == 0){
        return 1;
    }else{
        return num * fat(num - 1);
    }
}

int main(){
    int num;
    scanf("%i", &num);
    printf("%i", fat(num));
    
    
}