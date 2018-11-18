#include<stdio.h>
#include <string.h>

struct Pessoa{
    int idade;
    char nome[25];
};

void write_bin(FILE* file, struct Pessoa* pessoa){
    fwrite(&pessoa->nome,sizeof(char),25,file);
    fwrite('\0',sizeof(char),1,file);
    fwrite(&pessoa->idade,sizeof(int),1,file);
    fwrite('\0',sizeof(char),1,file);
}

void read_bin (FILE* file,char* nome, int* idade){
    fread(nome,sizeof(char),25,file);
    fread(idade,sizeof(int),1,file);
}

void preencher_pessoa(struct Pessoa* pessoa){
    printf("Digite o nome: ");
    scanf("%s",&pessoa->nome);
    printf("Digite a idade: ");
    scanf("%d",&pessoa->idade);
}

int main (void){
    FILE* file=fopen("ex8.bin","rb");
    int N,idade;
    char nome[25];
    fread(&N,sizeof(int),1,file);
    for(int i=0;i<N;i++){
        read_bin(file,nome,&idade);
        printf("Nome: %s  idade: %d\n",nome,idade);
    }
    fclose(file);
    return 0;
}