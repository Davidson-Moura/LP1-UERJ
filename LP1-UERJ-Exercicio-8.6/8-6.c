#include<stdio.h>
#include <string.h>

struct Pessoa{
    int idade;
    char nome[25];
};

void write_bin(FILE* file, struct Pessoa* pessoa){
    fwrite(&pessoa->nome,sizeof(char),25,file);
    fwrite(&pessoa->idade,sizeof(int),1,file);
}

void preencher_pessoa(struct Pessoa* pessoa){
    printf("Digite o nome: ");
    scanf("%s",&pessoa->nome);
    printf("Digite a idade: ");
    scanf("%d",&pessoa->idade);
}

int main (void){
    struct Pessoa pessoa[100];
    int N;
    printf("Digite o valor de N(Max 100): ");
    scanf("%i",&N);
    FILE* file=fopen("ex8.bin","wb");
    fwrite(&N,sizeof(int),1,file);
    for(int i=0;i<N;i++){
        preencher_pessoa(&pessoa[i]);
        write_bin(file,&pessoa[i]);
    }
    fclose(file);
    return 0;
}