#include<stdio.h>

int main(){
	int gcd,i,a=2,b=8;
	if(a>b){
		int temp=a;
		a=b;
		b=temp;
	}
	for(i=1;i<=a;i++){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}
	printf("%i",gcd);
    return 0;
}

