#include <stdio.h>
main(){
	int c=0;
	double chico=1.50,juca=1.10;
    while(chico>=juca){
		chico+=0.2;
		juca+=0.3;
		c++;
	}
	printf("precisara de %i anos para o juca ser maior que o chico ",c);
}