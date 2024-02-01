#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	
	char name[10];
	char surname[10];
	int age;
	
};

int main(){
	
	struct student stu1;
		
	strcpy(stu1.name, "james");
	strcpy(stu1.surname, "brown");
	stu1.age = 27;
	
	struct student stu2 = {"steve","miller",30};
	 
	printf("%s  %s  %d\n", stu1.name, stu1.surname, stu1.age);
	printf("%s  %s  %d", stu2.name, stu2.surname, stu2.age);
	
	return 0;
}
