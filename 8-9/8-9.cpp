// 8-9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
const int ArSize = 80;
char * left(const char * str, int n = 1);

int main()
{
	char sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	char * ps = left(sample, 4);
	cout << ps << endl;
	delete[] ps;
	ps = left(sample);
	cout << ps << endl;
	delete[] ps;
	getchar();
	getchar();
    return 0;
}

char * left(const char * str, int n)
{
	if (n < 0)
	{
		n = 0;
	}
	char * p = new char[n + 1];
	int i;
	for (i = 0;i < n&&str[i];i++)//复制原始字符串的前n个字符
	{
		p[i] = str[i];
	}
	while (i <= n)
	{
		p[i++] = '\0';
	}
	return p;
}
