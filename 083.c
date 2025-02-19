#include<stdio.h>

int fact(int num){
	if(num==0 || num==1){
		return 1;
	}
	else if(num<0){
		printf("Error");
		return 0;
	}
	else{
		return num*fact(num-1);
	}
}

int main(){
	int n=7,r=3;
	printf("%i",fact(n)/(fact(r)*fact(n-r)));
    return 0;
}

