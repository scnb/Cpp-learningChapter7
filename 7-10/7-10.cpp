// 7-10.cpp : �������̨Ӧ�ó������ڵ㡣
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

char * buildstr(char c, int n)//��������Ϊchar *��
{
	char * ps = new char[n+1];//n+1�������������һ��Ԫ�ص�������n,����Ҫ��һ������ſ���Ԫ��
	ps[n] = '\0';
	for (int i = 0;i < n;i++)
	{
		ps[i] = c;
	}
	return ps;
}
