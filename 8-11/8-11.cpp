// 8-11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//����ģ��ԭ��
template <typename T>
void Swap(T &a, T &b);

int main()
{
	int i = 10;
	int j = 20;
	cout << "i = " << i << " , j = " << j << endl;
	cout << "ʹ�ñ���������int���͵Ľ���������\n";
	Swap(i, j);
	cout << "Now i = " << i << " , j = " << j << endl;
	double x = 24.5;
	double y = 81.7;
	cout << "x = " << x << " , y = " << y << endl;
	cout << "ʹ�ñ���������double���͵Ľ���������\n";
	Swap(x, y);
	cout << "Now x = " << x << " , y = " << y << endl;
	getchar();
    return 0;
}

//����ģ�嶨��
template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
