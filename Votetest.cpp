#include <iostream>
using namespace std;
int a,f;
int main()
{
	do
	{
		f=0;
		cout<<"Enter your age : "; 
		cin>>a;
		if(a>=18)
			cout<<"You are eligible!!";
		else if(a>0 && a<18)
			cout<<"You are not eligible!!";
		else
		{
			cout<<"Please enter your age properly\n!!";
			f=1;
		}
	}while(f==1);
}
