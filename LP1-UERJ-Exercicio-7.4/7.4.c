#include<stdio.h>

struct ponto{
    int x;
    int y;
};

struct personagem{
    int id;
    struct ponto posicao;
    int score;
};

void le_posicao(struct ponto* p){
    printf("Digite o valor de x: ");
    scanf("%d",&p->x);
    printf("Digite o valor de y: ");
    scanf("%d",&p->y);
}

void le_perso(struct personagem* pe){
    printf("Digite a identificacao: ");
    scanf("%d",&pe->id);
    le_posicao(&pe->posicao);
    printf("Digite a pontuacao: ");
    scanf("%d",&pe->score);
}

void ordenacao(struct personagem* p, int n){
    int x,y;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if((p+i)->posicao.y>(p+j)->posicao.y){
                y=(p+i)->posicao.y;
                (p+i)->posicao.y=(p+j)->posicao.y;
                (p+j)->posicao.y=y;
                x=(p+i)->posicao.x;
                (p+i)->posicao.x=(p+j)->posicao.x;
                (p+j)->posicao.x=x;
            }
        }
    }
}

void mapa(struct personagem* p, int n){
    int y=0,x=0,e=0;
    printf("   0  1  2  3  4  5  6  7  8  9\n");
    for(y=0;y<10;y++){
        printf("%d  ",y);
        for(x=0;x<10;x++){
            for(e=0;e<n;e++){
                if((p+e)->posicao.y==y && (p+e)->posicao.x==x){
                    printf("%d",(p+e)->id);
                    break;
                }
                else if(e==(n-1)){
                    printf("   ");
                }
            }
        }
        printf("\n");
    }
}

int main (void) {
    struct personagem pers[3];
    for(int i=0;i<3;i++){
        le_perso(&pers[i]);
    }
    mapa(pers,3);
    return 0;
}