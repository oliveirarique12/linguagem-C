#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    FILE *novo;
    novo = fopen("files/cadastro.txt","a");
    fprintf(novo, "Olá, hoje é tercça-feira.");
    printf("Arquivo criado");
    fclose(novo);
    return 0;
}