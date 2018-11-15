#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>

typedef struct no{
    char chave;
    int elemento;
    struct no* ponteiro;
}no;

typedef struct listencadeada{
    no* inicio;
    int n;
}listencadeada;

void inserir (listencadeada* L, char c, int e){
    no* provisorio=L->inicio;
    L->inicio=(no*)malloc(sizeof(no));
    L->inicio->chave=c;
    L->inicio->elemento=e;
    L->inicio->ponteiro=provisorio;
    L->n++;
}

void contruir (listencadeada* L){
    L->inicio=(no*)malloc(sizeof(no));
    L->inicio->ponteiro=NULL;
    int b=0;
    char a='-';
    inserir(L,a,b);// preenchendo elemento nulo
    L->n=0;
}

void mostrar(listencadeada* L){
    no* pont=L->inicio;
    int i=0;
    while(i<(L->n+1)){
        i++;
        if(pont->chave=='-'){break;}
        printf("Valores Do Elemento %d: \n",i);
        printf("Elemento: %d\n",pont->elemento);
        printf("Chave: %c\n",pont->chave);
        printf("------------------------------\n");

        pont=pont->ponteiro;
    }
}
void preencher(char* a,int * b){
    printf("Digite um caracterio: ");
    scanf("%c",&a);
    printf("Digite um valor: ");
    scanf("%d",&b);                                                                                                                                                                                                                                                                                                                                                                                                                                                               
}
int main (void){
    listencadeada L;
    char a;
    int b=1,i=0;
    contruir(&L);

    printf("Digite um caracterio: \n");
    scanf("%c",&a);
    printf("Digite um valor: \n");
    scanf("%d",&b);
    inserir(&L,a,b);

    printf("Digite um caracterio: \n");
    scanf("%c",&a);
    printf("Digite um valor: \n");
    scanf("%d",&b);
    inserir(&L,a,b);

    printf("Digite um caracterio: \n");
    scanf("%c",&a);
    printf("Digite um valor: \n");
    scanf("%d",&b);
    inserir(&L,a,b);

    
    mostrar(&L);
    getch();
    return 0;
}