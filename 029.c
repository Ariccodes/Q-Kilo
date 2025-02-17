#include<stdio.h>

int main(){
	int i,count=0;
	for(i=1;i<=5;i++){
		printf("Enter an integer:");
		count+=scanf("%d");
	}
	printf("Number of inputs:%d",count);
	return 0;
}
