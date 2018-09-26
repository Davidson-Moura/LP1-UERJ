#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main (void){
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");
	int input,i,valor,cont,f,list[60];
	list[1]=1;
	list[2]=1;
	cont=1;
	printf("Gerando valores aleatorios para jogar na loteria.\n");
	printf("Digite o número de valores aleatorios que deseja:");
	scanf("%d",&input);
	while(1){
		valor=(rand() % 60)+1;
		f=0;
		for (i=1;i<=cont;i+=1){
			if(valor!=list[i]){
				f+=1;
			}
		}
		if(f==cont){
			list[cont]=valor;
			if(cont==input){
				break;
			}
		}
        cont+=1;
	}
	for (i=1;i<=input;i+=1){
		printf("%d, ",list[i]);
	}
	getch();
	return 0;	
}
