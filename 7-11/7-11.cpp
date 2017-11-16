// 7-11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct travel_time
{
	int hours;
	int mins;
};
const int Mins_per_hr = 60;
travel_time sum(travel_time, travel_time);
void show_time(travel_time);

int main()
{
	travel_time day1 = { 5,45 };
	travel_time day2 = { 4,55 };
	travel_time trip = sum(day1, day2);
	cout << "2-days total:";
	show_time(trip);
	travel_time day3 = { 4,32 };
	cout << "3-days total:";
	show_time(sum(trip, day3));
	getchar();
    return 0;
}

travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;
	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
	return total;
}

void show_time(travel_time t)
{
	cout << t.hours << " hours,";
	cout << t.mins << " minutes." << endl;
}
