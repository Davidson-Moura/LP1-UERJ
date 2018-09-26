#include<stdio.h>
int main (void){
	float a;
	printf("Digite a velocidade atual em mph: ");
	scanf("%f",&a);
	if (a*1.6<80){
		printf("Acelere!");
	}
	else{
		if(a*1.6>100){
			printf("Desacelere!");
		}
		else{
			printf("Mantenha!");
		}
	}
	scanf("%f",&a);
	return 0;
}
