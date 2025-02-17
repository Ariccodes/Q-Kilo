#include<stdio.h>

int main(){
	char ch;
	int i;
	for(i=0;i<=255;i++){
		ch=i;
		if (ch == '!' || ch == '\"' || ch == '#' || ch == '$' || ch == '%' || ch == '&' || ch == '\'' || ch == '(' || ch == ')' || ch == '*' || ch == '+' || ch == ',' || ch == '-' || ch == '.' || ch == '/' || ch == ':' || ch == ';' || ch == '<' || ch == '=' || ch == '>' || ch == '?' || ch == '@' || ch == '[' || ch == '\\' || ch == ']' || ch == '^' || ch == '`' || ch == '{' || ch == '|' || ch == '}' || (ch>='0' && ch<='9' || ch>='a' && ch<='z' || ch>='A' && ch<='Z')){
	 	printf("%c\n",i);
	}
	}
    return 0;
}

