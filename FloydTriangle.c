#include<stdio.h>

	void floyd(int x){
		int i=1, cut=1, count=0;
		
		while(1){
			printf("%4d ",i);
			count++;
			
			if(count == cut){
				printf("\n");
				count = 0;
					
				if(cut == x){
					break;
				}
				else{
					cut++;
				}
			}	
			i++;
		}	
	}

int main(){
	int x;
	
	printf("Please enter a row number for floyd triangle : ");
	scanf("%d",&x);
	
	floyd(x);
	
	return 0;
}
