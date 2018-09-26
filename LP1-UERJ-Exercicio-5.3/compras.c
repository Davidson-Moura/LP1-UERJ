#include<stdio.h>

void compra (float* conta,float valor){
	*conta=*conta-valor;
}

int main (void){
	float minha_conta1,minha_conta2,soma,r;
	float* maior;
	int n;
	printf("Digite o saldo da primeira conta: ");
	scanf("%f",&minha_conta1);
	printf("Digite o saldo da primeira conta: ");
	scanf("%f",&minha_conta2);
	
	printf("Digite o numero de compras: ");
	scanf("%d",&n);
	float compras[n];
	int i;
	printf("Saldo Antes\nConta 1: R$%.2f \nConta 2: R$%.2f \n",minha_conta1,minha_conta2);
	for(i=0;i<n;i++){
		if(minha_conta1>minha_conta2){
			maior=&minha_conta1;
		}
		else{
			maior=&minha_conta2;
		}
		printf("Digite o valor da compra: ");
		scanf("%f",&r);
		compras[i]=r;
		compra(maior,compras[i]);
		printf("Saldo Depois\nConta 1: R$%.2f \nConta 2: R$%.2f \n",minha_conta1,minha_conta2);
		printf("___________________________________________\n");
	}


	
	
}
