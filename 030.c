#include<stdio.h>

int main(){
	int salary;
	printf("Enter your salary:");
	scanf("%d",&salary);
	printf("Employee Provident Fund:%.0f   Employer Provident Fund:%.0f",salary*0.12,salary*0.1);
	return 0;
}
