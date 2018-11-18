#include<stdio.h>
#include <string.h>

int main (void){
    char nome[25];
    char nome_return[25];
    scanf("%s",nome);
    FILE* file=fopen("arquivo-8-5.bin","wb");
    fwrite(&nome,sizeof(char),strlen(nome),file);
    fclose(file);
    FILE* file1=fopen("arquivo-8-5.bin","rb");
    fread(nome_return,sizeof(char),25,file1);
    fclose(file1);
    printf ("%s",nome_return);
    return 0;
}