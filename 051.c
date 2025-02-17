#include<stdio.h>

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int a=4,b=6;
	int temp;
//	temp=a;
//	a=b
//	b=temp;
	
//	a=a+b;
//	b=a-b;
//	a=a-b;

//    swap(&a,&b);	

    a=a^b;
    b=a^b;
    a=a^b;
    
    printf("a=%d b=%d",a,b);
    return 0;
}

