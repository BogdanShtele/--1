#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<cmath>
int main()
{
	int x, y = 0;
	int i = 1;
	while (i <= 10) { printf("Input x ");
scanf("%d ", &x);
	if (abs(x) > abs(y)) { y = x; }
	i = i + 1;
	}
	printf("answer %d \n", y);
	return 0;
}
