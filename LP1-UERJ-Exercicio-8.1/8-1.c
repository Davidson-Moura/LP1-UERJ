#include<stdio.h>
#include <string.h>

int main (void){
    char palavra[25];
    scanf("%s",palavra);
    FILE* arq=fopen("arq-8-1.txt","w");
    for (int i=0;i<strlen(palavra);i++){
        fputc(palavra[i],arq);
    }
    fclose(arq);
    return 0;
}