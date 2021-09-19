#include <stdio.h>
main(){
	double sal,per,c;
	printf("introduz o seu salario");
	scanf("%lf",&sal);
	printf("introduz o percentual de aumento");
	scanf("%lf",&per);
	c=(sal*per)/100;
	printf("o seu novo salario e %lf",sal+c);
}