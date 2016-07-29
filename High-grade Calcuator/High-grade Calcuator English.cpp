// High-grade Calcuator.cpp : 定义控制台应用程序的入口点。
//

#include <stdafx.h>
#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
	int a, b, c, delta, delta2, a2jb2, x[2];
	printf("Welcome to my calcuator!\nSuitable for quadratic equations. Please input a,b,c in common format\n");
	scanf_s("%d %d %d",&a,&b,&c);
	if (a == 0 && b == 0 && c == 0)
	{
		printf("This software is based on C ++ development using .NET Framework 4.5, compatible with WinVista and later, of course, you can run it on your behalf in line with \ n This program is easy to everyone, you know, prefer Mathematica \ (PC \) and Photomath \ (Android / iOS / Windows \), they are more powerful --Translated by Google");
	}
	else
	{
		delta = b * b - 4 * a * c;
		delta2 = sqrt(delta);
		x[0] = (delta2 - b) / a / 2;
		x[1] = (delta2 + b) / a / -2;
		printf("=====Solution of the equation=====\nX1=%d\nX2=%d\n", x[0], x[1]);
		a2jb2 = (x[0] + x[1])*(x[0] + x[1]) - 2 * x[0] * x[1];
		printf("============Symmetric=============\n△=%d\n", delta);
		printf("a²+b²=%d\n", a2jb2);
		ajb2 = sqrt(a2jb2 - 2 * x[0] * x[1]);
		printf("（a-b）²=%d\n", ajb2);
	}
	system("pause");
    return 0;
}