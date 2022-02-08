#include <bits/stdc++.h>

using namespace std;

void isprime()
{
    int n=0;
    cin>>n;
    bool prime[n+1];
 
    for(int i=0;i<=n;i++)
    {
        prime[i]=true;
    }
    
    prime[0]=false;
    prime[1]=false;
    
    for(int i=2;i*i<=n;i++)
    {
        for(int j=2*i;j<=n;j=j+i)
        {
            prime[j]=false;
        }
    }
    
    for(int i=0;i<=n;i++)
    {
        cout<<i<<" : "<<prime[i]<<endl;
    }
}

int main()
{
    isprime();
    return 0;
}
