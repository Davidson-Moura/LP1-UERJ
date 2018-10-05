#include <stdio.h>

void preencher(int* vetor,int n){
	int i;
	for (i=0;i<n;i++){
		printf("Digite o valor do item %d do vetor: ",i+1);
		scanf("%d",vetor+i);
	}
}
float medias (int* vet,int nu,float* media){
	int i;
	float soma=0,r;
	for (i=0;i<nu;i++){
		soma+=*(vet+i);
	}
	r=soma/nu;
	printf("%f",r);
	*media=r;
}
int main (void){
	int n;
	float media;
	printf("Digite um valor n: ");
	scanf("%d",&n);
	int vec[n];
	preencher(vec,n);
	medias(vec,n,&media);
	
	printf("Media: %.2f",media);
	return 0;
}
