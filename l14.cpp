#include <stdio.h>
#include <stdlib.h>
main(){
	int n,sp=0,contp=0,simp=0,contimp=0;
	for(int c=1;c<=10;c++){
		printf("digite o valor");
		scanf("%i",&n);
		if(n%2==0){
			contp++;
			sp+=n;
			
		}
		else{
			contimp++;
			simp+=n;
		}
		
	}
		printf("a media dos pares e %i",sp/contp);
		printf("a media dos pares e %i",simp/contimp);
}