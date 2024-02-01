#include<stdio.h>

	void fibonacci(int n){
		
		int x=0, y=1;
		int temp, i;
		
		for(i=0; i < n;i++){
			
			if(i<= 1){
				
				temp = i;
				printf("%d ",temp);
			}
			
			else{
		
				temp = x+y;
				
				printf("%d ",temp);
				
				x = y;
				y = temp;
			}
		}	
	}

int main(){
	
	int n;
	printf("How many elements will your Fibonacci series consist of? :\n");
	scanf("%d",&n);
	
	fibonacci(n);
}
