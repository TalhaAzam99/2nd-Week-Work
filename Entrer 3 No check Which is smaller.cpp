#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<" Enter A Number "<<endl;
	cin>>a;
	cout<<" Enter B Number "<<endl;
	cin>>b;
	cout<<" Enter C Number "<<endl;
	cin>>c;
	if (a<b || a<c)
	cout<<" A is a smaller number ";
	else if (b<c || b<a)
	cout<<" B is a smaaler number ";
	else
	cout<<" C is a smaller number ";
	return 0;
}
	