// High-grade Calcuator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdlib>
using namespace std;

int main()
{
	int a,b,c,delta,delta2,a2jb2,ajb2,x[2];
	printf("欢迎使用计算器，可用于一元二次方程计算，请化为一般形式后分别输入a b c\n输入0 0 0以获取帮助/关于\n");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 0 && b == 0 && c == 0)
	{
		printf("此软件基于C++开发，使用.NET Framework 4.5，兼容WinVista及以后版本，当然你能运行也就代表你符合了\n此程序只是方便大家，你懂的，更推荐Mathematica（PC）和Photomath（Android/iOS/Windows），更加强大\n");
	}
	else
	{
		delta = b * b - 4 * a * c;
		delta2 = sqrt(delta);
		x[0] = (delta2 - b) / a / 2;
		x[1] = (delta2 + b) / a / -2;
		printf("=====方程的解=====\nX1=%d\nX2=%d\n", x[0], x[1]);
		a2jb2 = (x[0] + x[1])*(x[0] + x[1]) - 2 * x[0] * x[1];
		printf("======对称式======\n△=%d\n", delta);
		printf("a²+b²=%d\n", a2jb2);
		ajb2 = sqrt(a2jb2 - 2 * x[0] * x[1]);
		printf("（a-b）²=%d\n",ajb2);
	}
	system("pause");
    return 0;
}