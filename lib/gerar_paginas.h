#include <stdio.h>
#include <stdlib.h>

void criar_index(char *nome){
    FILE *pagina;
    pagina = fopen(nome,"a");
    fprintf(pagina,"<html><body><h1>Bem Vindo</body></html>");
    fclose(pagina);
}