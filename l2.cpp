#include <stdio.h>
main(){
	double vs,r,sf;
	printf("introduz o valor do salario minimo");
	scanf("%lf",&vs);
	printf("introduz o salario do funcionario");
	scanf("%lf",&sf);
	r=(sf*vs)/100;
	printf("o funcionario devera receber %lf",r+sf);
}