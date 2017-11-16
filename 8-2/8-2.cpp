// 8-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int rats = 101;
	int &rodents = rats;
	cout << "rats = " << rats;
	cout << " , rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ",rodents = " << rodents << endl;
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	getchar();
    return 0;
}

