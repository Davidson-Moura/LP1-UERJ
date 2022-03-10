#include <stdio.h> // RESPOSTA: (nome=stdio.h, propriedade=biblioteca, tempo=pre-processamento)

void preencher (int* vetor, int n){ // RESPOSTA: (nome=int*, propriedade=pontero, tempo=implementação)
    int i; // RESPOSTA: (nome=int, propriedade=tamanho, tempo=implementação)
    for (i=0;i<n;i++){ // RESPOSTA: (nome=++, propriedade=operação, tempo=compilação)
        printf("Digite o valor %d: ",(i+1));// RESPOSTA: (nome=printf, propriedade=funções, tempo=ligação)
        scanf("%d",(vetor+i));// RESPOSTA: (nome=scanf, propriedade=funções, tempo=ligação)
    }
}

char busca(int valor,int* vetor,int n){ // RESPOSTA: (nome=busca, propriedade=tipo de retorno, tempo=compilação)
    //pesquisa binária
    int m,i,inicio=1,final=n;
    char r=0; // RESPOSTA: (nome=r, propriedade=valor, tempo=execução)
    while(inicio<=final){
        m=(inicio/2)+(final/2);
        if (valor==vetor[m-1]){ // RESPOSTA: (nome=vetor, propriedade=vetor, tempo=Design)
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
    char x=busca(proc,vetor,n); // RESPOSTA: (nome=x, propriedade=valor, tempo=execução)
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
