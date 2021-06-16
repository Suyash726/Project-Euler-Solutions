#include <iostream>
using namespace std;


int main() {
	long long int sos=0,sqrs=0;
    int sum =0;
    for(int i =0;i<=100;i++)
    {
        sum+=i;
    }
    
    sos = sum*sum;
    for(int i =0;i<=100;i++)
    {
        sqrs+=i*i;
    }
    
    cout<< sos-sqrs<<endl;
    return 0;
    
}

