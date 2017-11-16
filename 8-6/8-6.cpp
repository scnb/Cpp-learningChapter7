// 8-6.cpp : �������̨Ӧ�ó������ڵ㡣
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
free_throws & accumulate(free_throws & target, const free_throws & source);//����һ��ָ��ṹ������

int main()
{
	//���ֳ�ʼ��
	free_throws one = { "Ifelsa Branch",13,14 };
	free_throws two = { "Andor Knott",10,16 };
	free_throws three = { "Minnie Max",7,9 };
	free_throws four = { "Whily Looper",5,9 };
	free_throws five = { "Long Long",6,14 };
	free_throws team = { "Throwgoods",0,0 };
	//û�г�ʼ��
	free_throws dup;
	set_pc(one);
	display(one);
	accumulate(team, one);
	display(team);
	//�ѷ���ֵ������������
	display(accumulate(team, two));
	accumulate(accumulate(team, three), four);
	display(team);
	//�ѷ���ֵ���ڸ�ֵ���ʽ��
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

void set_pc(free_throws & ft)//�޸�ԭ�ṹ��ֵ,����ÿ���ṹ�е�percent��Ա��ֵ
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

free_throws & accumulate(free_throws & target, const free_throws & source)//���ܸı�ԭ�ṹ������
{
	target.attempts += source.attempts;
	target.made += source.made;
	set_pc(target);
	return target;
}
