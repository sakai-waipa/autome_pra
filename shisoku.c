#include <stdio.h>
//I find bugs
//I am in your.shisoku
int main(){
	double a, b;

	a=2;
	b=3;

	puts("latest update is 2019/06/01");

	printf("This program calculate two numbers.\n");

	printf("a+b=%f\n",a+b);

	printf("a-b=%f\n", a-b);

	printf("a*b=%f\n",a*b);

	if(b==0)
		puts("error");
	else
		printf("a/b=%f\n", a/b);

	return 0;
}

