#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");

    char nome_completo[30];
    printf("Digite seun nome\n");
    fgets(nome_completo,30,stdin);
    printf("Olá, %s\n",nome_completo);


    return 0;
}