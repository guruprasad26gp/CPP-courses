#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int sum, sub, mul, div, mod;
	cin>>a>>b;

	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a%b;

	cout<<sum<<endl<<sub<<endl<<mul<<endl<<div<<endl<<mod<<endl;
	return 0;
}