#include<stdio.h>

int main(){
	int a,b,rem;
	printf("Enter a and b:");
	scanf("%i %i",&a,&b);
	for(rem=b;rem>=b;rem=a-b){
		a-=b;
	}
	printf("a%%b=%d",rem);
    return 0;
}

