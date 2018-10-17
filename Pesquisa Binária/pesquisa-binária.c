#include <stdio.h>

void preencher (int* vetor, int n){
    int i;
    for (i=0;i<n;i++){
        printf("Digite o valor %d: ",(i+1));
        scanf("%d",(vetor+i));
    }
}

char busca(int valor,int* vetor,int n){
    //pesquisa binária
    int m,i,inicio=1,final=n;
    char r=0;
    while(inicio<=final){
        m=(inicio/2)+(final/2);
        if (valor==vetor[m-1]){
            r=1;
            return r;    
        }
        else if (valor<vetor[m-1]){
            final=m-1;
        }
        else{
            inicio=m+1;
        }
    }
    return r;
}

void ordenar (int* vetor,int n){
    int i,j,a;
    for (i=0;i<n;i++){
        for(j=i;j<n;j++){
            if (*(vetor+i)>*(vetor+j)){
                a=*(vetor+i);
                *(vetor+i)=*(vetor+j);
                *(vetor+j)=a;
            }
        }
    }
}

void mostrarvec (int* v,int n ){
    int i;
    for(i=0;i<n;i++){
        printf("%d\n",*(v+i));
    }
}

int main (void){
    int n,proc;
    printf("Digite o Tamanho do vetor: ");
    scanf("%d",&n);
    printf("--------------\nPreencher.....\n");
    int vetor[n];
    preencher(vetor,n);
    printf("--------------\nOrdenado.....\n");
    ordenar(vetor,n);
    mostrarvec(vetor,n);
    printf("--------------\nBuscando.....\n");
    printf("Digite o valor a procurar: ");
    scanf("%d",&proc);
    char x=busca(proc,vetor,n);
    if (x==0){
        printf("Valor %d: nao foi encontrado!\n",proc);
    }
    else{
        printf("Valor %d: Foi encontrado!\n",proc);
    }
    printf("--------------\nFinalizar.....\n");
    scanf("%d");//Só para não fechar...
    return 0;
}