// 7-10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
char * buildstr(char c, int n);

int main()
{
	int times;
	char ch;
	cout << "enter a character:";
	cin >> ch;
	cout << "enter an integer:";
	cin >> times;
	char * ps = buildstr(ch, times);
	cout << ps << endl;
	delete [] ps;
	ps = buildstr('+', 20);
	cout << ps << "-DONE-" << ps<< endl;
	delete [] ps;
	getchar();
	getchar();
    return 0;
}

char * buildstr(char c, int n)//返回类型为char *型
{
	char * ps = new char[n+1];//n+1个数，但是最后一个元素的索引是n,必须要多一个来存放空置元素
	ps[n] = '\0';
	for (int i = 0;i < n;i++)
	{
		ps[i] = c;
	}
	return ps;
}
