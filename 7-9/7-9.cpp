// 7-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
unsigned int c_int_str(const char * str, char ch);
int main()
{
	char mmm[15] = "minimum";
	char * wail = "ululate";
	unsigned int ms = c_int_str(mmm, 'm');
	unsigned int us = c_int_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;
	getchar();
    return 0;
}

unsigned int c_int_str(const char * str, char ch)
{
	unsigned int num = 0;
	unsigned int i = 0;
	while (*(str + i) != NULL)
	{
		if (ch == *(str+i))
		{
			++num;
		}
		++i;
	}

	//������һ�γ������������ļ��������
	while (*str)//��*strΪ'\0'ʱ���˳�ѭ��,str��ָ��const char��ָ�룬��ζ��char�ַ����ܸı䣬����strָ��ȴ���Ըı�
	{
		if (*str == ch)
		{
			++num;
		}
		++str;//ֱ����str��������������������
	}

	return num;
}

