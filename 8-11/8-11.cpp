// 8-11.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//函数模板原型
template <typename T>
void Swap(T &a, T &b);

int main()
{
	int i = 10;
	int j = 20;
	cout << "i = " << i << " , j = " << j << endl;
	cout << "使用编译器生成int类型的交换函数：\n";
	Swap(i, j);
	cout << "Now i = " << i << " , j = " << j << endl;
	double x = 24.5;
	double y = 81.7;
	cout << "x = " << x << " , y = " << y << endl;
	cout << "使用编译器生成double类型的交换函数：\n";
	Swap(x, y);
	cout << "Now x = " << x << " , y = " << y << endl;
	getchar();
    return 0;
}

//函数模板定义
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
