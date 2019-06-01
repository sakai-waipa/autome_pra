#include <stdio.h>
//I find bugs
//I am in your.shisoku
int main(){
	double a, b;

	a=2;
	b=3;

	printf("This program calculate two numbers.\n");

	printf("No bugs!!\n");

	printf("a+b=%f\n",a+b);

	printf("a-b=%f\n", a-b);

	printf("a*b=%f\n",a*b);

	if(b==0)
		puts("error");
	else
		printf("a/b=%f\n", a/b);

	return 0;
}

