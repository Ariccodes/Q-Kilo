#include<stdio.h>

int main(){
	char ch='2';
	if (ch == '!' || ch == '\"' || ch == '#' || ch == '$' || ch == '%' || ch == '&' || ch == '\'' || ch == '(' || ch == ')' || ch == '*' || ch == '+' || ch == ',' || ch == '-' || ch == '.' || ch == '/' || ch == ':' || ch == ';' || ch == '<' || ch == '=' || ch == '>' || ch == '?' || ch == '@' || ch == '[' || ch == '\\' || ch == ']' || ch == '^' || ch == '`' || ch == '{' || ch == '|' || ch == '}' || (ch>='0' && ch<='9' || ch>='a' && ch<='z' || ch>='A' && ch<='Z')){
	 	printf("YEH");
 	}
    else{
    	printf("NEH");
	}
    return 0;
}

