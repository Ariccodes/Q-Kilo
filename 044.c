#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int l,u;
	printf("Enter lower and upper limit(inclusive):");
	scanf("%i%i",&l,&u);
	srand(time(0));
	printf("%i",(rand()%(u-l+1))+l);
    return 0;
}

