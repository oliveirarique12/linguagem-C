#include <stdio.h>
#include <stdlib.h>

int main (){
    system ("clear");
    char nome[10];
    char sobrenome[10];
    printf("Digite seu nome\n");
    scanf("%s",nome);
    printf("Digite seu sobrenome\n");
    scanf("%s",sobrenome);

    printf("Olá, %S %S. Seja bem vindo\n",nome, sobrenome);


    return 0;
}