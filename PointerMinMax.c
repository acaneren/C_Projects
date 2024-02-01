#include<stdio.h>

int main(){
	
	int myArray[5];
	int i, max, min;
	int *ptr;
	
	ptr = myArray;
	
	printf("Please enter 5 integers:\n");
	
	for(i=0; i<5; i++){
		
		scanf("%d",ptr+i); 
	}
	
	min = *ptr;
	max = *ptr;
	
	for(i=0; i<5; i++){
		
		if(*(ptr+i) > max){
			
			max = *(ptr+i);
		}
		
		if(*(ptr+i) < min){
			
			min = *(ptr+i);
		}
	}
	
	printf("Max num : %d\n", max);
	printf("Min num : %d", min);
				
	return 0;
}
