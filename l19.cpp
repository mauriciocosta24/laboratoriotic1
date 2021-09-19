#include <stdio.h>
main(){
	int a=1,b=0,s;
	for(int c=1;c<=20;c++){
		s=a+b;
		printf("\n%i",s);
		a=b;
		b=s;
	}
}