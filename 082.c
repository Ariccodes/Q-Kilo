#include<stdio.h>

int main(){
	int x,y;
	printf("Enter a coordinate point:");
	scanf("%i %i",&x,&y);
	if(x>0 && y>0){
		printf("First");
	}
    else if(x<0 && y>0){
		printf("Second");
	}
	if(x<0 && y<0){
		printf("Third");
	}
	if(x>0 && y<0){
		printf("Fourth");
	}
    return 0;
}

