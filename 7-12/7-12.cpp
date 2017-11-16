// 7-12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

struct polar//极坐标
{
	double distance;
	double angle;
};

struct rect//直角坐标
{
	double x;
	double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
	rect rplace;
	polar pplace;
	cout << "enter the x and y values:";
	while (cin >> rplace.x >> rplace.y)
	{
		pplace=rect_to_polar(rplace);
		show_polar(pplace);
		cout << "next to numbers:(q to quit)" << endl;
	}
    return 0;
}

polar rect_to_polar(rect xypos)
{
	polar answer;
	answer.distance = sqrt(xypos.x*xypos.x + xypos.y*xypos.y);
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

void show_polar(polar dapos)
{
	const double rad_to_deg = 57.29577591;
	cout << "distance = " << dapos.distance << endl;
	cout << "angle = " << dapos.angle*rad_to_deg << endl;
}
