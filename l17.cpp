#include <stdio.h>
#include<stdlib.h>
main(){
	int a,m=1;
	system("color e2");
	printf("digite o valor");
	scanf("%i",&a);
	for(int c=1;c<=a;c++){
		m*=c;
	}
	printf("%i",m);
}