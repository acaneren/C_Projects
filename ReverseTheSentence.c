#include<stdio.h>
#include<string.h>

int main(){
	
	char sentence[100];
	int length, i;
	
	printf("Please enter a sentence: ");
	fgets(sentence, sizeof(sentence), stdin);
	
	printf("Reverse version of the sentence: ");
	
	length = strlen(sentence);
	
	for(i=length-1; i>=0; i--){
		
		printf("%c", sentence[i]);
	} 
	return 0;
}
