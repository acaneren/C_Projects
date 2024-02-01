#include<stdio.h>

	void unshift(int array[], int *size, int element, int maxSize){
		
		if(*size < maxSize){
			int i;
			
			for(i = (*size); i > 0; i--){
				array[i] = array[i - 1];
			}
			array[0] = element;
			(*size)++;
		}
		else{
			
			printf("Array is full; cannot unshift more elements. \n");
		}
	}
	
int main(){
	
	int arr[6] = {1,2,3,4,5};
	int size = 5;
	int i;
		
	unshift(arr, &size , 0, 6); // Add 0 to the beginning of the array if there's room.
	
	for(i=0; i < size; i++) {
		
		printf("%d ", arr[i]);
	}	
	return 0;
}
