#include<stdio.h>
main(){
	double sal,au25;
	printf("introduz o seu salario");
	scanf("%lf",&sal);
	au25=(sal*25)/100;
	printf("o seu novo salario e %lf",sal+au25);
}