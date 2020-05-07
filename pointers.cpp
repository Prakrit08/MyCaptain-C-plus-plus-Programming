#include<iostream>
#define n 5
using namespace std;
int main()
{
	int *p,a[n],i;
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"You entered: ";
	for(i=0;i<n;i++)
	{
		p=&a[i];
		cout<<*p<<"\n";
	}	
}
