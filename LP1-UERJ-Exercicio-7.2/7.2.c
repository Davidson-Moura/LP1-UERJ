#include<stdio.h>


struct Corpo{
    int controladores;
    int captadores;
};

struct Braco{
    int casas;
    int cordas;
};

struct Guitarra{
    char modelo[20];
    float valor;
    struct Braco braco;
    struct Corpo corpo;
};

void preencher_guitar(struct Guitarra* gui){
    char palavra[20];
    printf("Modelo(Sem espaços): ");
    scanf("%s",&(*gui).modelo);
    printf("");
    printf("Valor: ");
    scanf("%f",&(*gui).valor);
    printf("");
    printf("Numero de Casas: ");
    scanf("%d",&((*gui).braco).casas);
    printf("");
    printf("Numero de Cordas: ");
    scanf("%d",&((*gui).braco).cordas);
    printf("");
    printf("Numero de Controladores: ");
    scanf("%d",&((*gui).corpo).controladores);
    printf("");
    printf("Numero de Capitadores: ");
    scanf("%d",&((*gui).corpo).captadores); 
}

void imprimir_gui(struct Guitarra* gui){
    printf("Guitarra modelo %s, valor %.2f, %d casas, %d cordas, %d controladores e %d captadores.\n",(*gui).modelo,(*gui).valor,((*gui).braco).casas,((*gui).braco).cordas,((*gui).corpo).controladores,((*gui).corpo).captadores);
}

int main (void){
    struct Guitarra G;
    preencher_guitar(&G);
    imprimir_gui(&G);
    return 0;
}