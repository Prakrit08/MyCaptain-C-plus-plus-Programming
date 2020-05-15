#include <iostream>
using namespace std;
int sum_of_two_primes(int n)
{
    int i,isPrime=1;
    for(i = 2; i <= n/2; ++i)
        if(n % i == 0)
        {
            isPrime = 0;
            break;
        }
    return isPrime;
}
int main()
{
    int n,i,f=0;
    cout<<"Enter ta natural number: ";
    cin>>n;
    int flag=0;
    for(i=2;i<=n/2;i++)
        if (sum_of_two_primes(i) == 1)
			if (sum_of_two_primes(n-i) == 1)
            {
                cout<<n<<" = " <<i<<" + " <<n-i<<endl;
                f=1;
            }
	if (f==0)
        cout<<n<<"cannot be expressed as the sum of two prime numbers\n";
}
