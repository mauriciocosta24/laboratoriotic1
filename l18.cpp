#include <stdio.h>
main(){
	int dia;
	double sc,so=0;
	char nome;
	for(int c=1;c<=30;c++){
		sc=0;
       printf("introduz o seu nome");
	   scanf("%s",&nome);
	   printf("introduz a quantidade de dias");
	   scanf("%i",&dia);
	   if(dia<15){
         sc=50+4;
         so+=sc;
	             }
       if(dia==15){
	    	  sc=50+3.60;
		      so+=sc;
	                    }
	   if(dia>15){
		   sc=50+3;
		   so+=sc;
	}
	printf("o %c deverapagar %lf e a empresa ganhara %lf ",nome,sc,so);
}
printf(" a empresa ganhara %lf ",so);}