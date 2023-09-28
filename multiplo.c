#include <stdio.h>

int main(){
    int a, b;

    scanf("%d %d", &a, &b);
    
    if(a == b){
        printf("\nOs valores lidos sao iguais.");
    } else if(a > b){
        printf("\n%d eh maior que %d. ", a, b);
        if(a % b == 0){
            printf("\n%d eh multiplo de %d.", a, b);
        } else{
            printf("\n%d nao eh multiplo de %d.", a, b);
        }
    } else if(a < b){
        printf("\n%d eh maior que %d.", b, a);
        if(b % a == 0){
            printf("\n%d e multiplo de %d.", b, a);
        } else{
            printf("\n%d nao e multiplo de %d.", b, a);
        }
    }

    return 0;
}







