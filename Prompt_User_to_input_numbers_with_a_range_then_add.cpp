//prompt user to input value of certain range and then add the numbers
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
	
	for(a=a;a<=b;a=a+1)
	sum+=a;
	{
		
		cout<<sum;
		}
}