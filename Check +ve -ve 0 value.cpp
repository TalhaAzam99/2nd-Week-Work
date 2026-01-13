#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<" Enter a Number ";
	cin>>a;
	if (a==0)
	cout<<" You entered zero value ";
	else if (a>0)
	cout<<" You entered positive number ";
	else
	cout<<" You entered Negative number ";
	return 0;
}