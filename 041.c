#include<stdio.h>

int main(){
	int cp,sp;
	printf("Enter your cost price and selling price:");
	scanf("%i%i",&cp,&sp);
	if(cp>sp){
		printf("Loss:%i",cp-sp);
	}
	else{
		printf("Profit:%i",sp-cp);
	}
    return 0;
}

