#include<stdio.h>

int main(){
	char ch='t';
    if ((ch == ' ') || (ch == '\t') || (ch == '\n') || (ch == '\r') || (ch == '\f')){
    	printf("YEH");
	}
	else{
		printf("NEH");
	}
    return 0;
}

