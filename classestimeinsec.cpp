#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
	public:
		int h,m,s;
};
int main()
{
	Time t;
	cout<<"Enter hours: ";
	cin>>t.h;
	cout<<"Enter minutes: ";
	cin>>t.m;
	cout<<"Enter hours: ";
	cin>>t.s;
	cout<<"The time is "<<setw(2)<<setfill('0')<<t.h<<":"<<setw(2)<<setfill('0')<<t.m<<":"<<setw(2)<<setfill('0')<<t.s<<"\nTotal time in seconds is "<<((t.h*3600)+(t.m*60)+t.s);
}
