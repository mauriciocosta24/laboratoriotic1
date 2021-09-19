#include <stdio.h>
main(){
int s=0;
	for(int c=1;c<=500;c++){
		if(c%2!=0 && c%3==0)
			s+=c;
	}
	printf("o resultado da soma e %i",s);
}