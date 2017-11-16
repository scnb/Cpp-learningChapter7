// 8-12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);
//函数模板重载
template <typename T>
void Swap(T a[], T b[], int n);

void Show(int a[]);
const int Lim = 8;

int main()
{
	int i = 10, j = 20;
	cout << "i = " << i << " j = " << j << endl;
	Swap(i, j);
	cout << "Now i = " << i << " j = " << j << endl;

	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
	int d2[Lim] = { 0,7,2,0,1,9,6,9 };
	cout << "原始数组：\n";
	Show(d1);
	Show(d2);
	cout << "交换后：\n";
	Swap(d1, d2,Lim);
	Show(d1);
	Show(d2);
	getchar();
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0;i < n;i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}

void Show(int a[])
{
	cout << a[0] << a[1] << "/";
	cout << a[2] << a[3] << "/";
	for (int i = 4;i < Lim;i++)
	{
		cout << a[i];
	}
	cout << endl;
}
