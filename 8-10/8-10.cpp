// 8-10.cpp : �������̨Ӧ�ó������ڵ㡣
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

unsigned long left(unsigned long num, unsigned ct)//num��ԭʼ���ݣ�ct��Ҫ������λ��
{
	unsigned digits = 1;
	unsigned long n = num;
	if (ct == 0 || num == 0)
	{
		return 0;
	}
	while (n /= 10)
	{
		digits++;//��λ��
	}
	if (digits > ct)
	{
		ct = digits - ct;//����Ҫɾ����λ��
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
	char * p = new char[n + 1];//λ����1�����һ�����������
	for (i = 0;i < n&&str[i];i++)//�ж��������棬һ���ǵ�ǰ������ֵҪС�ڱ�����λ������һ����ԭʼ�ַ������ܽ���
	{
		p[i] = str[i];
	}
	while (i <= n)
	{
		p[i++] = '\0';
	}
	return p;
}