#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a=1232;
	float b= 2333.23223222;
	double c = 2.322623772631;
	bool d = true;
	char e='a';
	
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<fixed<<setprecision(6)<<c<<endl;
	cout<<d<<endl;
	cout<<e;

	return 0;
}