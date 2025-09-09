// Este programa pede ao usuário dois números e,
//realiza a soma entre eles e ao final exibe o
//resultado
#include <stdio.h>
int main(){
    // declarar aws variáveis que irão receber
    // os números digitados pelos usuários
    int numero1;
    int numero2;
    int resultado;
    // Vamos pedir ao usuário entrar com primeiro valor
    printf("Digite um número: \n");
    // Capturando o número digitado pelo usuário com 
    // o comando scanf
    scanf("%d",&numero1);

    printf("Digite outro número inteiro e tecle Enter: \n");
    scanf("%d",&numero2);

    // Vamos realizar a soma entre os números 1 e 2
    resultado = numero1 + numero2;
    
    // Apresentar o resultado em tela
    printf("A soma do número %d com o numero %d é %d \n",numero1,numero2,resultado);

    return 0;
    
}