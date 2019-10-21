#include <stdio.h>
#include "cal.h"

void main(){
	char process;
	int a,b;

	printf("input first integer : ");
	scanf("%d",&a);

	printf("enter your desired process");
	scanf("%c",&process);

	printf("input second integer : ");
	scanf("%d",&b);

	switch(process){
		case '+' : printf("%d",add(a,b));
		break;
		case '-' : printf("%d",sub(a,b));
		break;
		case '*' : printf("%d",mul(a,b));
		break;
		case '/' : printf("%d",div(a,b));
		break;
		default: printf("input error");
	}

}
