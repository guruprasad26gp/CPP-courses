#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int a,b,c,d,e;

	cin>>a>>b>>c>>d>>e;

	int sum = a+b+c+d+e;
	float avarge = (float)sum/5;

	cout<<sum<<endl;
	cout<<fixed<<setprecision(8)<<avarge;

	return 0;
}