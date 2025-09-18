#include <stdio.h>
#include <stdlib.h>

int main(){
   system("clear");
   int in, fn;
   printf("Digite um ano incial e tecle enter\n");
   scanf("%d",&in);

   printf("Agora digite um ano final\n");
   scanf("%d",&fn);

    while(in <= fn){
        if(in % 4 == 0)
            printf("O ano %d é bissexto\n",in);
       }
       in++;
   

   return 0;
}