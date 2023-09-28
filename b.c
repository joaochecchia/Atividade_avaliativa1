#include <stdio.h>

void verificar(char v1[]) {
    int verificar[100];
    int v2 = 0

    for(int b = 0; v1[b] != '\0'; b++) {
        if((v1[b] >= 'a' && v1[b] <= 'z') || (v1[b] >= 'A' && v1[b] <= 'Z')) {
            verificar[b] = 1;
            if(verificar[b] == 1){
                v2 = 1;
            }else {
                v2 = 0;
            }
    }
}

    if(v2 == 1){
        printf("alfabetico");
    } else{
        printf("nao alfabetico");
    }
}

int main() {
    char palavra[100];
    scanf("%s", palavra);

    verificar(palavra);

    return 0;
}
