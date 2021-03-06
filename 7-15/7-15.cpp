// 7-15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>
using namespace std;

const int Seasons = 4;
const array<string, Seasons> Snames = { "Spring","Summer","Fall","Winter" };

void fill(array<double, Seasons> * pa);
void show(array<double, Seasons> da);

int main()
{
	array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
	getchar();
	getchar();
    return 0;
}

void fill(array<double, Seasons> * pa)
{
	for (int i = 0;i < Seasons;i++)
	{
		cout << "enter " << Snames[i] << " expenses:";
		cin >> (*pa)[i];
	}
}

void show(array<double, Seasons> da)
{
	double total = 0;
	cout << "\nEXPENSES\n";
	for (int i = 0;i < Seasons;i++)
	{
		cout << Snames[i] << " : $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total : $" << total << endl;
}
