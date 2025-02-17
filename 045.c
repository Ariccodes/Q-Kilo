#include<stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers:");
	scanf("%i %i",&a,&b);
	printf("%d",a+(~b)+1);
    return 0;
}

