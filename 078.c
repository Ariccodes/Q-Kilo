#include<stdio.h>
#include<math.h>

int main(){
	float l=8,b=1,h=32;
	printf("Area:%.2f\nVolume:%.2f\nSpace Diagonal:%.2f",2*((l*b)+(b*h)+(h*l)),l*b*h,sqrt((h*h)+(b*b)+(l*l)));
    return 0;
}

