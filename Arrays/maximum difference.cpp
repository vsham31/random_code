#include <bits/stdc++.h>

using namespace std;

void noob(int arr[], int n)
{
    int ans=arr[1]-arr[0];
    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if((arr[j]-arr[i])>ans)
            {
                ans=arr[j]-arr[i];
            }
        }
    }
    cout<<ans;
    
}

void pro(int arr[],int n)
{
    int minval=arr[0],ans=arr[1]-arr[0];
    
    for(int i=0;i<n;i++)
    {
        ans=max(ans,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    cout<<ans;
}

int main()
{
    int arr[]={10,2,3,44,9,22},count=0,n=6;
    
    //noob(arr,n);
        
    pro(arr,n);
    return 0;
}
