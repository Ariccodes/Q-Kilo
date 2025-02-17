#include<stdio.h>

int main(){
		char ch;
	int i;
	for(i=0;i<=255;i++){
		ch=i;
		if (isprint(ch)){
	 	printf("%c\n",i);
	}
	}
    return 0;
}

