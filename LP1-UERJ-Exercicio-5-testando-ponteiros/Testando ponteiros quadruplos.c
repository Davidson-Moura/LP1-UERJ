#include<stdio.h>

int main (void){
	int**** a;
	int*** b;
	int** c;
	int* d;
	int s;
	s=1;
	a=&b;
	printf("teste 1 \n%p\n",a);
	b=&c;
	printf("teste 2 \n%p\n",b);
	c=&d;
	printf("teste 3 \n%p\n",c);
	d=&s;
	printf("teste 4 \n%p\n",d);
	
	printf("%d\n",s);
	****a=****a+1;
	printf("teste 5 \n%d\n",****a);
}
