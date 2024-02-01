#include<stdio.h>

	void isItPerfect(int num){
		
		int i,sum=0;
		
		for(i=1; i < num; i++){
			
			if(num % i == 0){
				
				sum = sum + i;
			}
		}
		
		if(sum == num){
		
			printf("%d is a perfect number",num);
		}
		else{
			
			printf("%d is not a perfect number",num);
		}
	}

int main(){
	
	int num;
	
	printf("This program checks that entered number is a perfect number.\n");
	printf("Please enter an integer: ");
	scanf("%d",&num);
	
	isItPerfect(num);
	
	return 0;
}
