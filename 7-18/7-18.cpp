// 7-18.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
double besty(int);
double pam(int);
void estimate(int lines, double(*pf)(int));//��ȷ���庯����ԭ���ǹؼ���һ��ֻҪ�ѱ����õĺ����ĺ������ã�*pf���滻����


int main()
{
	int code;
	cout << "how many lines of code do you need?";
	cin >> code;
	cout << "Here's Besty's estimate:\n";
	estimate(code, besty);
	cout << "Here's Pam's estimate:\n";
	estimate(code, pam);
	getchar();
	getchar();
    return 0;
}

double besty(int lns)
{
	return 0.05*lns;
}

double pam(int lns)
{
	return 0.03*lns + 0.0004*lns*lns;
}

void estimate(int lines, double(*pf)(int))
{
	cout << lines << " lines with take ";
	cout << pf(lines) << " hour(s).\n";
}