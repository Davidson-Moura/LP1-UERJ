#include<stdio.h>
#include <string.h>

int main (void){
    char palavra[10][25];
    for(int i=0;i<10;i++){
        scanf("%s",palavra[i]);
    }
    FILE* arq=fopen("arq-8-3.txt","w");
    for(int j=0;j<10;j++){
        for (int i=0;i<25;i++){
            if(i<strlen(palavra[j])){
                fputc(palavra[j][i],arq);
            }
            else{
                fputc(' ',arq);
            }
        }
    }
    fclose(arq);
    return 0;
}