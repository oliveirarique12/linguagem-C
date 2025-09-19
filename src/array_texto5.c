#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    char nome[100];
    char média[10];
    float nota1, nota2, nota3, nota4, notas;
    float soma, dividir;

    printf("Digite seu nome\n");
    scanf("%s",nome);

    printf("Digite suas 4 notas\n");

    printf("nota 1:");
    scanf("%f",&nota1);

    printf("nota 2:");
    scanf("%f",&nota2);

    printf("nota 3:");
    scanf("%f",&nota3);

    printf("nota 4:");
    scanf("%f",&nota4);

  soma = nota1 + nota2 + nota3 + nota4;
    dividir = soma / 4;


    if (dividir >=7){
        printf("Parabéns, você está aprovado!");
    }
    else if (dividir <=4){
        printf("Poxa, você está reprovado");
    }

    else{
        printf("Recuperação");
    }
    
    
    
    

  
    return 0;
}