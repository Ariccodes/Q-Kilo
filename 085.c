#include<stdio.h>

int add(int n1,int n2){
	int sum=0,i=0,carry=0,ld,d,multiplier=1;
	while(n2>0 || carry>0 || n1>0){
		ld=n2%10+n1%10+carry;
		if(ld==0){
			d=0;
			carry=0;
		}
		else if(ld==1){
			d=1;
			carry=0;
		}
		else if(ld==2){
			d=0;
			carry=1;
		}
		else if(ld==3){
			d=1;
			carry=1;
		}
	    sum+=multiplier*d;
	    multiplier*=10;
	    n2/=10;
	    n1/=10;
	}
	return sum;
}

int main(){
	int bn1,bn2;
	printf("Enter two binary numbers:");
	scanf("%i %i",&bn1,&bn2);
	int temp=0,product=0;
	while(temp!=bn2){
		product=add(product,bn1);
		temp=add(temp,1);
	}
	printf("Product:%d",product);
    return 0;
}

