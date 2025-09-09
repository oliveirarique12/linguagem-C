#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int n;
    printf("Digite um ano e tecle enter\n");
    scanf("%d",&n);
    if (n % 4 == 0){
        printf("O ano %d que você digitou é Bissexto\n",n);
    }
    else{
        printf("O ano que você digitou não é bissexto\n",n);
    }
    return 0;
}