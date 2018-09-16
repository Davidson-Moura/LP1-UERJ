#include<stdio.h>
int main (void){
	float n,soma,f;
	printf("Digite N: ");
	scanf("%f",&n);
	while(1){
		if (n==0){
			break;
		}
		else{
			soma+=n*n;
			n-=1;
		}
	}
	printf("Soma: %f",soma);
	scanf("%f",&f);// Apenas para não fechar o programa
	return 0;
}
