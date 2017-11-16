// 7-9.cpp : 定义控制台应用程序的入口点。
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

	//上面这一段程序可以用下面的简洁语句代替
	while (*str)//当*str为'\0'时，退出循环,str是指向const char的指针，意味者char字符不能改变，但是str指针却可以改变
	{
		if (*str == ch)
		{
			++num;
		}
		++str;//直接另str递增，不用再声明变量
	}

	return num;
}

