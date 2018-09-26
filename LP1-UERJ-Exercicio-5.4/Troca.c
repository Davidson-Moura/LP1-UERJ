#include<stdio.h>

void troca (int* a,int* b){
	int c=*a,d=*b;
	*a=d,*b=c;
}

int main (void){
	int x=20,y=10;
	troca(&x,&y);
	printf("O valor de x: %d\nO valor de y: %d",x,y);
	return 0;
}
