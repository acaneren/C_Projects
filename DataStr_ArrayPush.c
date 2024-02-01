#include<stdio.h>

	void push(int array[], int *size, int element, int maxSize){
		
		while(*size < maxSize){
			
			array[(*size)++] = element;
			element++;
		}
		/*else{
			
			printf("Array is full; cannot push more elements. \n");
		}*/
	}

int main(){
	
	int arr[6] = {1,2,3,4,5};
	int size = 5;
	int i;
		
	push(arr, &size , 6, 6); // Add 6 to the end of the array if there's room. Room = maxsize yani.
	
	for(i=0; i < size; i++) {
		
		printf("%d ", arr[i]);
	}	
	return 0;
}
