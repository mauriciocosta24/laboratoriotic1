#include <stdio.h>
#include <math.h>
main(){
	double a,b,c,d,x1,x2;
	printf("introduz o valor de a,b e c");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=(b*b)-(4*a*c);
	printf("%lf",d);
	if(d>0){
		x1=(-b+(sqrt(d)))/(a*2);
		x2=(-b-(sqrt(d)))/(a*2);
			printf("os valores de x1 e x2 e %lf %lf ",x1,x2);
	}else
		printf("impossivel");
}