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
	int d,s;
	printf("Digite o valor: ");
	scanf("%d",&d);
	for (s=2;s<d;s++){
		if (primo(s)){
			printf("%d, ",s);
		}
	}
	return 0;
}
