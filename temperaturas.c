#include<stdio.h>

int main (void){
	char a,temperaturas[50];
	int b,i;
	float media;
	for(i=1;i<=50;i=i+1){
		printf("Digite uma temperatura: ");
		scanf("%d",&a);
		b+=a;
		temperaturas[i]=a;
		
	}
	media=b/50;
	printf("Temperaturas entre -100 e 100: \n");
	for (i=1;i<=50;i+=1){
		if (temperaturas[i]<=100){
			if(temperaturas[i]>=-100){
				printf("%d ,",temperaturas[i]);
			}
		}	
	}
	printf("\n");
	printf("Temperaturas maior que a media %f:  \n",media);
	for (i=1;i<=50;i+=1){
		if (temperaturas[i]>media){
			printf("%d ,",temperaturas[i]);
		}	
	}
	scanf("%d",&i);
	return 0;
}
