#include<stdio.h>

int main(){
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("Decimal:%d\nHexadecimal:%x\nOctal:%o",num,num,num);
	return 0;
}
