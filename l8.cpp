#include <stdio.h>
main(){
	double salm,ht,h1,sb,receber,imp;
	printf("introduz o numero de horas trabalhadas");
	scanf("%lf",&ht);
	printf("introduz o salario minimo");
	scanf("%lf",&salm);
	h1=(salm/2);
	sb=ht*h1;
	imp=(sb*3)/100;
	receber=sb-imp;
	printf("o salario a receber e %lf ",receber);
}