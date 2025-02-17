#include<stdio.h>
#include<ctype.h>

int main(){
	char ch;
	int i;
	for(i=0;i<=255;i++){
		ch=i;
		if (ispunct(ch)){
	 	printf("%c\n",i);
	}
	}
    return 0;
}

