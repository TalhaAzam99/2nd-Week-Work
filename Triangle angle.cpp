#include<iostream>
using namespace std;
int main()
{
	float angle1,angle2,angle3;
	cout<<" Enter the angle 1 ";
	cin>>angle1;
	cout<<" Enter the angle 2 ";
	cin>>angle2;
	cout<<" Enter the angle 3 ";
	cin>>angle3;
	if (angle1+angle2+angle3==180)
	cout<<" The Triangle is Valid ";
	else
	cout<<" The Triangle is not Valid ";
	return 0;
}