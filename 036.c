#include<stdio.h>

int main(){
	int n;
	printf("Enter N:");
	scanf("%d",&n);
	printf("The sum of all numbers from 0 to %d is %d.",n,(n*(n+1))/2);
    return 0;
}

