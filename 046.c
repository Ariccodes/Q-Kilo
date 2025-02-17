#include<stdio.h>

int main(){
	float a=1.616;
	double b=1.616;
	printf("a=%.20f b=%.20lf\n",a,b);
	if(a==b){
		printf("EQUAL!");
	}
	else{
		printf("NOT EQUAL!");
	}
    return 0;
}

