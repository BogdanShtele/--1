#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int a, b, c;

	printf("Input a ");
	scanf("%d", &a);


	printf("Input b ");
	scanf("%d", &b);


	printf("Input c ");
	scanf("%d", &c);


	printf("%d * %d = %d\n", a, b, a * b);
	return 0;
}