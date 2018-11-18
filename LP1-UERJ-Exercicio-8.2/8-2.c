#include<stdio.h>
#include <string.h>

int main (void){
    char palavra[25];
    FILE* arq=fopen("arq-8-1.txt","r");
    for (int i=0;i<25;i++){
        palavra[i]=fgetc(arq);
    }
    fclose(arq);
    printf("%s",palavra);
    return 0;
}