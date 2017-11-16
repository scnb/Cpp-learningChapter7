// 8-13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);

struct job
{
	char name[40];
	double salary;
	int floor;
};

//对于job结构体的具体化模板
template <> void Swap(job &j1, job &j2);
void Show(job &j);

int main()
{
	cout.precision(2);//两位小数
	cout.setf(ios::fixed, ios::floatfield);
	int i = 10, j = 20;
	cout << "i , j = " << i <<", "<< j << endl;
	Swap(i, j);
	cout << "Now i , j = " << i << ", " << j << endl;
	job sue = { "Susan Yaffee",73000.60,7 };
	job sidney = { "Sidney Taffee",78060.72,9 };
	cout << "before job swaping:\n";
	Show(sue);
	Show(sidney);
	Swap(sue, sidney);
	cout << "after job swaping:\n";
	Show(sue);
	Show(sidney);
	getchar();
    return 0;
}

template<typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap(job &j1, job &j2)
{
	double t1;
	int t2;
	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;
	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void Show(job &j)
{
	cout << j.name << " $ " << j.salary << " on the " << j.floor << " floor.\n";
	cout << endl;
}