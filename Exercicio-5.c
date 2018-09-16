#include <stdio.h>

int main (void) {
	int x,y;
	while(1){
		printf("Digite um numero: \n");
		scanf("%d", &y);
		x += y;
		if (y==0){
			printf("Soma dos numeros: %d", x);
			break;
		}
	}
	scanf("%d",&y);
    return 0;
}
