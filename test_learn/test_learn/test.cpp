#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include<stdio.h>
#include<stdlib.h>

#define N 10
void print()
{
	printf("hello world!");
	printf("%d\n",N);
	int n = 5;
	printf("%d\n", n);

}

int main()
{
	print();
	system("pause");
	return 0;
}