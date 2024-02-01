#include<stdio.h>

int main(){
	
	int myArray[15]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int *pointer;
	int i;
	
	pointer = myArray;
	
	printf("Even numbers in array: \n");
	
	for(i=0; i < 15; i++){
		
		if(*(pointer+i) % 2 == 0){
			
			printf("%d ", *(pointer+i));
		}
	}
	
	printf("\n");
	printf("Odd numbers in array: \n");
	
	for(i=0; i < 15; i++){
		
		if(*(pointer+i) % 2 != 0){
			
			printf("%d ",*(pointer+i));
		}
	}	
	
	return 0;
}
