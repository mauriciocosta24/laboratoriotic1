#include <stdio.h>
main(){
	int n,a1,a2,a4,a5;
	printf("digite um valor de 5 digitos");
	scanf("%i",&n);
	a1=n%10;
	a5=n/10000;
	a2=(n/1000)%10;
	a4=(n%100)/10;
	if(a1==a5 && a2==a4)
		printf("o numero e palindromo");
	else
		printf("nao sao palindromos");
}