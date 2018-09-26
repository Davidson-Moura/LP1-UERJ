#include<stdio.h>

void compra (float* conta,float valor){
	*conta=*conta-valor;
}

int main (void){
	float minha_conta1,minha_conta2,valor1;
	float* maior;
	printf("Digite o saldo da primeira conta: ");
	scanf("%f",&minha_conta1);
	printf("Digite o saldo da primeira conta: ");
	scanf("%f",&minha_conta2);
	printf("Digite o valor da compra: ");
	scanf("%f",&valor1);
	if(minha_conta1>minha_conta2){
		maior=&minha_conta1;
	}
	else{
		maior=&minha_conta2;
	}
	printf("Saldo Antes\nConta 1: R$%.2f \nConta 2: R$%.2f \n",minha_conta1,minha_conta2);
	compra(maior,valor1);
	printf("Saldo Depois\nConta 1: R$%.2f \nConta 2: R$%.2f \n",minha_conta1,minha_conta2);
	return 0;
}
