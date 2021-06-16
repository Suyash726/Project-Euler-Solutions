#include <algorithm>
#include <iostream>
using namespace std;


int main() {
	long long int lcm=1;
	for(long long int i =1;i<=20;i++)
	{
	    lcm = lcm*i/__gcd(lcm,i);
	}
	cout<<lcm<<endl;
	return 0;
}

