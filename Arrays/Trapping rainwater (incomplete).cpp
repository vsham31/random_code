#include <bits/stdc++.h>

using namespace std;

void noob(int arr[], int n)
{
    int ans=0;
    
    for(int i=1;i<n-1;i++)
    {
        int lmax=arr[i];
        
        for(int j=0;j<n;j++)
            lmax=max(lmax,arr[i]);
        
        int rmax=arr[i];
        
        for(int j=i+1;j<n;j++)
            rmax=max(rmax,arr[i]);
            
        ans=ans+(min(rmax,lmax)-arr[i]);
    }
    cout<<ans;
}

void pro(int arr[],int n)
{
    
}

int main()
{
    int arr[]={3,0,1,2,5},count=0,n=5;
    
    noob(arr,n);
        
    //pro(arr,n);
    return 0;
}
