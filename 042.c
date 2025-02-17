#include<stdio.h>

int main(){
	float km;
	printf("Enter the distance in kilometers:");
	scanf("%f",&km);
	printf("Meters:%.2f\nCentimeters:%.2f\nFeet:%.2f\nInches:%.2f",km*1000,km*100000,km * 3280.84,km * 39370.1);
    return 0;
}

