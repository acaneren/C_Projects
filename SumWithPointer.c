#include<stdio.h>

int main(){
	
	int num1,num2;
	int *ptr1,*ptr2;
	
	printf("Please enter two integers: \n");

	ptr1 = &num1;
	ptr2 = &num2;

	scanf("%d %d",ptr1,ptr2);
	
	printf("%d + %d = %d", *ptr1, *ptr2, *ptr1+*ptr2);
	
	return 0;
}

