#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(long long int n)
{
	for(int i =2;i<sqrt(n);i++)
	{
		if(n % i ==0)
		{
			return false;
		}
	}
	return true;
}

int main() {
	long long int m =600851475143;
	
	vector<long long int> Primes;
	
	for(long long int i =2;i<sqrt(m);i++)
	{
		if((m%i ==0) && isPrime(i))
		{
			Primes.push_back(i);
		}
	}
	
	cout<<Primes[Primes.size()-1]<<endl;
	
	// your code goes here
	return 0;
}
