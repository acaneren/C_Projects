#include<stdio.h>

int main(){
	
	char dizim[100];
	char *ptr;
	
	printf("Lutfen bir cumle giriniz:\n");
	gets(dizim);
	
	for(ptr=dizim; *ptr; ptr++){
		
	}
	
	printf("Dizimiz %s %d kadar karakterden olsumaktadir.",dizim,ptr-dizim);
	
	return 0;
}
