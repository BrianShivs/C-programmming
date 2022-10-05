//Adding_using_do_whileloop.cpp
#include <iostream>
using namespace std;
int main()
{
	int a,b,sum;
	sum=0;
	cout<<"Enter first number";
	cin>>a;
	cout<<"Enter last number";
	cin>>b;
	do{
     cout<<a <<"\n";
     sum+=a;
     a++;
	}
	while(a<=b);
	cout<<sum;
}