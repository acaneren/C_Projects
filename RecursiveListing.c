#include<stdio.h>
#include<stdlib.h>

	void list(int num){
		
		if(num == 0){
			printf("0");
			return 0;
		}
		else{
			printf("%d ",num);
			list(num-1);
		}
	}

int main(){
	
	int n;
	
	printf("Please enter a positive integer : ");
	scanf("%d", &n);
	
	list(n);
	 
	return 0;	
}
