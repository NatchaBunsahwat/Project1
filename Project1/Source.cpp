#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<iostream>
int main() {
	int input;
	int i;
	printf("Enter Number : ");
	scanf_s("%d", &input);
	for (i = 0; i < input; i++)
	{
		printf("*");
	}
	return 0;
}
