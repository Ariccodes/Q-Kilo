#include<stdio.h>

int main(){
	int days=367;
	printf("%d years, %d weeks and %d days",days/365,(days%365)/7,(days%365)%7);
    return 0;
}

