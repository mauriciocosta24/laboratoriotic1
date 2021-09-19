#include<stdio.h>
main(){
	int n1,n2;
	printf("digite o seu ano de nascimento");
	scanf("%i",&n1);
	printf("digite o seu ano actual");
		scanf("%i",&n2);
		printf("a sua idade e %i ",(n2-n1));
		printf("em 2050 teras %i",(2050-n1)," anos de idade");
}