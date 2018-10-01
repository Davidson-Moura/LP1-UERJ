#include <stdio.h>

int main (void){
	int valor1,valor2,maior,menor,i;
	printf("Digite o primeiro valor");
	scanf("%d",&valor1);
	printf("Digite o segundo valor");
	scanf("%d",&valor2);
	if (valor1>valor2){
		maior=valor1;
		menor=valor2;	
	}
	else{
		maior=valor2;
		menor=valor1;
	}
	printf("valores entre %d e %d: ",menor,maior);
	for (i=menor+1;i<maior;i++){
		printf("%d, ",i);
	}
	return 0;
}
