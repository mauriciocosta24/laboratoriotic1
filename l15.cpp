#include <stdio.h>
main(){
	int n;
	do{
		printf("digite o valor");
		scanf("%i",&n);
		printf("\n o seu sucessor e %i",n+1);
	}while(n>0);
}