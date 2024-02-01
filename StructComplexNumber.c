#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct complexNumber{
	
	float a;
	float b;
};

int main(){
	
	struct complexNumber num1, num2, result;
	
	char op;
	
	printf("Please enter an operator.(+/-)");
	scanf("%c",&op);
	
	printf("Please enter the first complex number: ");
	scanf("%f %f",&num1.a,&num1.b);
	
	printf("Please enter the second complex number: ");
	scanf("%f %f",&num2.a,&num2.b);
	
	
	if(op == '+'){
	
		result.a = num1.a + num2.a;
		result.b = num1.b + num2.b;
		
		printf("%.2f + %.2fi",result.a,result.b);
	}
	else if(op == '-'){
		
		result.a = num1.a - num2.a;
		result.b = num1.b - num2.b;
		
		printf("%.2f + %.2fi", result.a, result.b);
	}
	else{
		printf("Invalid operator entered...");
	}
	
	return 0;
}
