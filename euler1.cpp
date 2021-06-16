#include <iostream>
using namespace std;

int sum_of_3(int k)
{
    int sum = 0;
    for(int i =1;i<=k;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum+=i;
        }
    }

    return sum;
}

int main()
{
    std::cout << (sum_of_3(1000))<<endl;
}