#include<stdio.h>
#include<math.h>

int main(){
	float pi=3.14,h=2,r=2;
	printf("Area:%.2f\nVolume:%.2f",pi*r*(r+sqrt((r*r)+(h*h))),(pi*r*r*h)/3);
    return 0;
}

