#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int n)
{
    for(int i =2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main() {
	long long int sop=2;
	for(long long int i =3;i<2000000;i++)
	{
	    if(IsPrime(i))
	    {
	        sop+=i;
	    }
	}
	cout<<sop<<endl;
}

