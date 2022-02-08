#include <bits/stdc++.h>

using namespace std;

bool palindrome(int n)
{
    int ans=0,temp=n;
    
    bool res;
    
    while(temp!=0)
    {
        ans = ans * 10 + temp % 10;
        temp = temp / 10;
    }
    
    if(ans==n)
        res=true;
    else
        res=false;
    
    return res;
}


int main()
{
    
    int n;
    
    cin>>n;
    
    cout<<palindrome(n);

    return 0;
}
