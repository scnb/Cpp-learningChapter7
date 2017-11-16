// 7-14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;
void display(const string sa[], int n);

int main()
{
	string list[SIZE];//创建string数组
	cout << "enter your " << SIZE << " favorite astronomical sights:\n";
	for (int i = 0;i < SIZE;i++)
	{
		cout << i + 1 << " : ";
		getline(cin, list[i]);
	}
	cout << "Your list:\n";
	display(list, SIZE);
	getchar();
    return 0;
}

void display(const string sa[], int n)
{
	for (int i = 0;i < n;i++)
	{
		cout << i + 1 << " : " << sa[i] << endl;
	}
}
