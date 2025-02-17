#include<stdio.h>
#include<math.h>

int main(){
	int a=7,b=8,c=3,s=(a+b+c)/2;
	printf("%.2f",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}

