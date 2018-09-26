#include<stdio.h>
int main (void){
	float a,b;
	int c;
	printf("Digite o primeiro valor: ");
	scanf("%f",&a);
	printf("Digite o segundo valor: ");
	scanf("%f",&b);
	if (a>b){
		printf("O maior valor e: %f \n",a);
	}
	else{
		printf("O maior valor e: %f \n",b);
	}
	printf("pronto");
	scanf("%d",&c);// só para o programa não fechar
}
