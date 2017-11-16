// 8-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

struct free_throws
{
	string name;
	int made;
	int attempts;
	float precent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);//返回一个指向结构的引用

int main()
{
	//部分初始化
	free_throws one = { "Ifelsa Branch",13,14 };
	free_throws two = { "Andor Knott",10,16 };
	free_throws three = { "Minnie Max",7,9 };
	free_throws four = { "Whily Looper",5,9 };
	free_throws five = { "Long Long",6,14 };
	free_throws team = { "Throwgoods",0,0 };
	//没有初始化
	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
	//把返回值用作函数参数
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	//把返回值用在赋值表达式中
	dup = accumulate(team, five);
	cout << "Displaying team:\n";
	display(team);
	cout << "Displaying dup after assignment:\n";
	display(dup);
	set_pc(four);
	//
	accumulate(dup, five) = four;
	cout << "Displaying dup after ill_advised assignment:\n";
	display(dup);
	getchar();
    return 0;
}

void display(const free_throws & ft)
{
	using std::cout;
	cout << "name: " << ft.name << endl;
	cout << "made: " << ft.made << '\t';
	cout << "attempts: " << ft.attempts << '\t';
	cout << "percent: " << ft.precent << endl;
}

void set_pc(free_throws & ft)//修改原结构的值,计算每个结构中的percent成员的值
{
	if (ft.attempts != 0)
	{
		ft.precent = 100.0f*float(ft.made) / float(ft.attempts);
	}
	else
	{
		ft.precent = 0;
	}
}

free_throws & accumulate(free_throws & target, const free_throws & source)//不能改变原结构的内容
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}
