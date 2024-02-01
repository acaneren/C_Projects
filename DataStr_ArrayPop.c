#include<stdio.h>

int pop(int array[], int *size){
	
	if(*size > 0){
		
		int poppedElement = array[--(*size)];
		return poppedElement;
	}
	else{
		
		printf("Array is empty; cannot pop elements. \n");
		return -1; // Error or sentinel value
	}
}

int main(){
	
	int arr[5] = {1,2,3,4,5};
	int size = 5;
	int i;
		
	int poppedValue = pop(arr, &size); //Remove and returns the last element (5).
	printf("%d\n",poppedValue);
	
	for(i=0; i < size; i++) {
		
		printf("%d ", arr[i]);
	}	
	return 0;
}
