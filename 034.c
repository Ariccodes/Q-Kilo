#include<stdio.h>
#include<string.h>

int main(){
	char stat[3],name[30];
	printf("Enter your name:");
	scanf("%s",name);
	printf("Are you married?\n");
	scanf("%s",stat);
	if(strcmp(stat,"yes")==0){
	    printf("You are mrs.%s",name);
	}
	else{
		printf("You are miss.%s",name);
	}
    return 0;
}

