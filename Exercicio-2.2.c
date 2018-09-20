#include<stdio.h>

int main (void){
	int a,b;
	printf("Digite o Primeiro Valor: ");
	scanf("%d",&a);
	printf("Digite o Segundo Valor: ");
	scanf("%d",&b);
	printf("Os valores entre %d",a);
	printf(" e %d :\n",b);
	while(1){
		if(b>a){
			a+=1;
			if(a!=b){
				printf("%d ,",a);
			}
		}
		else{
			if(a>b){
				b+=1;
				printf("%d ,",b);
			}
			else{
				break;
				
			}
		}
	}
	scanf("%d",&a);
	return 0;
}
