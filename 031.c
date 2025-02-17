#include<stdio.h>
#include<string.h>
int main(){
	char buffer[10];
	memset(buffer,'o',9);
	printf("buffer:%s",buffer);
	getch();
	return 0;
}
