#include <bits/stdc++.h>

using namespace std;


int trailing_0(int n)
{
    int ans=0;
    
    for(int i=5;i<=n;i=i*5)
    {
        ans=ans+n/i;
    }
    
    return ans;
}


int main()
{
    
    int n;
    
    cin>>n;
    
    cout<<trailing_0(n);

    return 0;
}
