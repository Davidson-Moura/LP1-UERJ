#include<stdio.h>
#include <string.h>

void escreva_string(FILE* file,char* pala){
    for (int i=0;i<strlen(pala);i++){
        fputc(pala[i],file);
    }
}
int main (void){
    char palavra[25];
    scanf("%s",palavra);
    FILE* arq=fopen("arq-8-1.txt","w");
    escreva_string(arq,palavra);
    fclose(arq);
    return 0;
}