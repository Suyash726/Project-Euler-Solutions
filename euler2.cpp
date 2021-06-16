#include <vector>;
#include <iostream>
using namespace std;

int main() {
    
    // vector<int> A;
    long long int p1=1,p2=2;
    long long int p=2;
    long long int ans=2;
    while(p<4000000)
    {
        p = p1+p2;
        if(p%2 ==0)
        {
            ans+=p;
        }
        p1 = p2;
        p2 = p;
    }
    cout<<ans<<endl;
    return 0;
}
