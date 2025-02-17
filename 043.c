#include<stdio.h>

int main(){
	double l,b;
	printf("Enter the length and breadth of the rectangle:");
	scanf("%lf%lf",&l,&b);
	printf("Area:%.2lf\nPerimeter:%.2lf",l*b,2*(l+b));
    return 0;
}

