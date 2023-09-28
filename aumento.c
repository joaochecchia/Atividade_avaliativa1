#include <stdio.h>

int main(){
    char tipo;
    float salario;
    float salario2;
    
    scanf("%c", &tipo);
    scanf("%f", &salario);

    if(tipo == 'a'){
        salario2 = salario * 1.05;
        printf("R$ %.2f", salario2);
    } else if(tipo == 'b'){
        salario2 = salario * 1.07;
        printf("R$ %.2f", salario2);
    } else if(tipo == 'c'){
        salario2 = salario * 1.08;
        printf("R$ %.2f", salario2);
    }

    return 0;
}





