#include <bits/stdc++.h>

using namespace std;

void noob(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        bool flag=false;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<=arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        cout<<arr[i];
    }
    
    
}

void pro(int arr[],int n)
{
    int curr_leader=arr[n-1];
    cout<<curr_leader;
    
    for(int i=n;i>=0;i--)
    {
        if(curr_leader<arr[i])
        {
            curr_leader=arr[i];
            cout<<curr_leader;
        }
    }
}

int main()
{
    int arr[]={10,2,3,44,9,22},count=0,n=6;
    
    //noob(arr,n);
        
    pro(arr,n);
    return 0;
}
