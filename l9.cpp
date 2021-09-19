#include <stdio.h>
main(){
	double peso,gato1,gato2,kl,dia5;
   printf("digite o peso do saco da racao");
   scanf("%lf",&peso);	
   printf("digite a quantidade de racao para o gato1 e para o gato2");
   scanf("%lf%lf",&gato1,&gato2);
   kl=peso*1000;
   dia5=(gato1+gato2)*5;
   printf("em 5 dias restara %lf kilogramas no saco de racao",(kl-dia5)/1000);
}