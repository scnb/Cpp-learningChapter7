// 8-10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

unsigned long left(unsigned long num, unsigned ct);
char * left(const char * str, int n = 1);

int main()
{
	char * trip = "Hawaii!!";
	unsigned long n = 12345678;
	int i;
	char * temp;
	for (i = 1;i < 10;i++)
	{
		cout << left(n, i) << endl;
		temp = left(trip, i);
		cout << temp << endl;
		delete[]temp;
	}
	getchar();
	getchar();
    return 0;
}

unsigned long left(unsigned long num, unsigned ct)//num是原始数据，ct是要保留的位数
{
	unsigned digits = 1;
	unsigned long n = num;
	if (ct == 0 || num == 0)
	{
		return 0;
	}
	while (n /= 10)
	{
		digits++;//总位数
	}
	if (digits > ct)
	{
		ct = digits - ct;//计算要删除的位数
		while (ct--)
		{
			num /= 10;
		}
		return num;
	}
	else
	{
		return num;
	}
}

char * left(const char * str, int n )
{
	if (n < 0)
	{
		n = 0;
	}
	int i;
	char * p = new char[n + 1];//位数多1，最后一个保存结束符
	for (i = 0;i < n&&str[i];i++)//判断两个方面，一个是当前的索引值要小于保留的位数，另一个是原始字符串不能结束
	{
		p[i] = str[i];
	}
	while (i <= n)
	{
		p[i++] = '\0';
	}
	return p;
}