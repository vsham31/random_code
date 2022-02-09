#include <bits/stdc++.h>

using namespace std;


int power(int a, int b)
{
    int ans=1;
    
    while(b>0)
    {
        if((b&1)!=0)
            ans=ans*a;
        
        a=a*a;
        b=b>>1;
    }
    
    
    return ans;
}


int highpower(int a, int b, int n)
{
    int ans=1;
    
    while(b>0)
    {
        if((b&1)!=0)
            ans=(ans *a % n) % n;
        a=(a % n * a % n) % n;
        b=b>>1;
        
    }
    
    return ans;
}


int main()
{
    int a,b,n;
    
    cin>>a>>b>>n;
    
//  cout<<power(a,b);  
    
    cout<<highpower(a,b,n);
    
    return 0;
}
