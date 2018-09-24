#include <stdio.h>

int primo (int c){
	int i;
	for (i=2;i<c;i++){
		if(c%i==0){
			return 0;
			break;
		}
		if(i==c-1){
			return 1;
			break;
		}
	}
}
int main (void){
	int d;
	printf("Digite o valor: ");
	scanf("%d",&d);
	if (primo(d)){
		printf("O valor %d é primo! ",d);
	}
	else{
		printf("O valor %d não é primo! ",d);
	}
	return 0;
}
