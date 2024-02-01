#include<stdio.h>

	void convert(float x,char unit){
		
		if(unit == 'F' || unit == 'f'){
	
			printf("%f Fahrenheit equals to %f Celcius",x,((0.555)*(x-32)));
	
		}
		else if(unit == 'C' || unit == 'c'){
	
			printf("%f Celcius equals to %f Fahrenheit",x,(1.8*x)+32);
	
		}
		else{
			
			printf("Wrong unit entered...");
		}
	}

int main(){
		
	float x;	
	char unit;
	
	printf("Please select the unit in which you will enter the temperature: (F/C)\n");
	scanf("%c",&unit);
	
	printf("Please enter the temperature in %c:\n",unit);
	scanf("%f",&x);
	
	convert(x,unit);
	
	return 0;
}
