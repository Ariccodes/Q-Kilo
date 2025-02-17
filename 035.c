#include<stdio.h>

int main(){
	int a,b,num;
	printf("Enter A and B:");
	scanf("%d %d",&a,&b);
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%a==0 && num%b==0){
		printf("%d is divisible by A and B.",num);
	}
	else{
		printf("%d is not divisible by A and B.",num);
	}
    return 0;
}

