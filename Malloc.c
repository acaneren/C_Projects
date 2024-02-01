#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *ptr;
	int n=5;
	int i;
	
	printf("The n value we entered: %d\n",n);
	
	ptr = (int*)malloc(n * sizeof(int));
	
	if(ptr == NULL){
		
		printf("The memory could not be separated...");
	}
	else{
		
		for(i=0; i<n; i++){
			
			ptr[i]= i+1;
		}
		
		printf("Elements: \n");
		
		for(i=0; i<n; i++){
			
			printf("%d ",*ptr++);
		}
		
		free(ptr);		
	}
	
	
	
	
	return 0;
}
