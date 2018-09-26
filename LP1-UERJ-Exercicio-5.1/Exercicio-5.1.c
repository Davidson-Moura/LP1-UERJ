#include<stdio.h>

int main (void){
	int a,b;
	int* p;
	printf("Digite o valor a: ");
	scanf("%d",&a);
	printf("Digite o valor b: ");
	scanf("%d",&b);
	printf("");
	printf("Valor de A: %d \nValor de B: %d \n",a,b);
	if (a>b){
		p=&a;
	}
	else{
		if(a<b){
			p=&b;
		}
	}
	*p=*p-50;
	printf("---------------------------------------\n          Depois...\n");
	printf("Valor de A: %d \nValor de B: %d ",a,b);
	return 0 ;
}
