#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct ponto{
    int x;
    int y;
};

void preencher_ponto(struct ponto* p){
    printf("Digite o valor de x: ");
    scanf("%d",&p->x);
    printf("Digite o valor de y: ");
    scanf("%d",&p->y);
}

void preencher_pontos(struct ponto* p,int tamanho){
    int i=0;
    for(i=0;i<tamanho;i++){
        preencher_ponto(p+i);
    }
}

struct ponto* mais_longe(struct ponto* p,int tamanho){
    int i,maior=0,atual;
    struct ponto* s;
    for(i=0;i<tamanho;i++){
        atual=sqrt(pow((p+i)->x,2)+pow((p+i)->y,2));
        if(atual>maior){
            maior=atual;
            s=(p+i);
        }
    }
    return s;
}

int main (void){
    struct ponto ps[10];
    preencher_pontos(ps,10);
    struct ponto* p=mais_longe(ps,10);
    printf("ponto mais longe: (%d,%d)", p->x,p->y);
    return 0;
}