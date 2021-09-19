#include <stdio.h>
main(){
	double sal,quilo,r,per,p;
	printf("digite o valor do salario minimo");
	scanf("%lf",&sal);
	printf("digite a quantidade de quilowatts");
	scanf("%lf",&quilo);
	r=(sal/5);
    p=quilo*r;
    per=(p*15)/100;
    printf("o valor de cada quilowatt e %lf",r);
    printf("\no valor a ser pago por essa resistencio e %lf",p);
    printf("o valor a ser pago com desconto de 15 porcento e %lf ",p-per);
}