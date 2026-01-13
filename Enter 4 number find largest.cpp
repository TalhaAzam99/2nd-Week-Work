#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<" Enter Number A ";
	cin>>a;
	cout<<" Enter Number B ";
	cin>>b;
	cout<<" Enter Number C ";
	cin>>c;
	cout<<" Enter Number D ";
	cin>>d;
	if (a>b,a>c,a>d)
	cout<<" A is a largest number ";
	else if (b>a,b>c,b>d)
	cout<<" B is a Largest number ";
	else if (c>a,c>b,c>d)
	cout<<" C is a largest number ";
	else
	cout<<" D is a largest number ";
	return 0;
}