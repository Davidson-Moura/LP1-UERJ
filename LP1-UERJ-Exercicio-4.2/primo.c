#include <stdio.h>

int primo (int valor){
	int i,R=1;	
	for (i=2;i<valor;i++){
		if (valor%i==0){
			R=0;
		}	
	}
	return R;
}
int main (void){
	int d,s,r;
	printf("Digite o valor: ");
	scanf("%d",&d);
    r=primo(s);
	for (s=2;s<d;s++){
		if (r){
			printf("%d, ",s);
		}
	}
	return 0;
}
