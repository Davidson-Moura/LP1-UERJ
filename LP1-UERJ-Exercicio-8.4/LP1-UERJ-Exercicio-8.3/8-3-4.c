#include<stdio.h>
#include <string.h>

void escreva_string(FILE* file,char* pala){
    for (int i=0;i<strlen(pala);i++){
        fputc(pala[i],file);
    }
    fputc('\0',file);
}
#include<stdio.h>
#include <string.h>

int main (void){
    char palavra[10][25];
    for(int i=0;i<10;i++){
        scanf("%s",palavra[i]);
    }
    FILE* arq=fopen("arq-8-3.txt","w");
    for(int j=0;j<10;j++){
        escreva_string(arq,palavra[j]);
    }
    fclose(arq);
    return 0;
}