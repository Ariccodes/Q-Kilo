#include<stdio.h>

int main(){
	char str[4]="-123";
	int sign=1,digit,num=0,i,j=0;
	for(i=3;i>=0;i--){
		if(str[i]=='-'){
			sign=-1;
		}
		if(str[i]<='9' && str[i]>='0'){
			digit=str[i]-'0';
			num+=pow(10,j)*digit;
			j++;
		}
	}
	printf("%d",num*sign);
    return 0;
}

