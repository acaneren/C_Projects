#include <stdio.h>
	void change(int *ad1,int *ad2){
		
		int temp;
		
		temp=*ad1;
		*ad1=*ad2;
		*ad2=temp;
	}
int main(){
	
	int a=10, b=20;
	
	printf("Before the change a: %d b: %d \n",a,b);
	change(&a,&b);
	printf("After the change a: %d b: %d",a,b);

return 0;
}
	
