#include<stdio.h>
#include<math.h>

int main(){
	int a=1,b=-2,c=1;
	printf("Roots: %.1f, %.1f",(-b+pow((b*b-4*a*c),0.5))/(2*a),(-b-pow((b*b-4*a*c),0.5))/(2*a));
    return 0;
}

